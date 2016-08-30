//******************************************************************************
//
// This file is part of the OpenHoldem project
//   Download page:         http://code.google.com/p/openholdembot/
//   Forums:                http://www.maxinmontreal.com/forums/index.php
//   Licensed under GPL v3: http://www.gnu.org/licenses/gpl.html
//
//******************************************************************************
//
// Purpose: Very simple user-DLL as a starting-point
//
// Required OpenHoldem version: 7.7.6
//
//******************************************************************************

// Needs to be defined here, before #include "user.h"
// to generate proper export- and inport-definitions
#define USER_DLL

// #define OPT_DEMO_OUTPUT if you are a beginner 
// who wants to see some message-boxes with output of game-states, etc.
// It is disabled upon request, 
//   * as it is not really needed
//   * as some DLL-users don't have MFC (atlstr.h) installed
// http://www.maxinmontreal.com/forums/viewtopic.php?f=156&t=16232
#undef OPT_DEMO_OUTPUT

#include "user.h"
#include <conio.h>
#include <windows.h>
#include <string>
#include <vector>

#ifdef OPT_DEMO_OUTPUT
#include <atlstr.h>
#endif OPT_DEMO_OUTPUT

// Supporting macros
#define HIGH_NIBBLE(c)	(((c)>>4)&0x0F)
#define LOW_NIBBLE(c)	  ((c)&0x0F)

// Card macro
#define RANK(c)         ( ISKNOWN(c) ? HIGH_NIBBLE(c) : 0 )
#define SUIT(c)         ( ISKNOWN(c) ? LOW_NIBBLE(c) : 0 )
#define ISCARDBACK(c)   ((c) == CARD_BACK)
#define ISUNKNOWN(c)    ((c) == CARD_UNDEFINED)
#define ISNOCARD(c)     ((c) == CARD_NOCARD)
#define ISKNOWN(c)      (!ISCARDBACK(c) && !ISUNKNOWN(c) && !ISNOCARD(c))

using namespace std;
enum Street { PREFLOP = 1, FLOP, TURN, RIVER };
enum DealPositionType { NOPOSITION, SMALLBLIND, BIGBLIND, EARLYPOSITION, MIDDLEPOSITION, LATEPOSITION };

#define MAX_ACTIONS 10
#define MAX_PLAYERS 10
//GLOBAL Variables - state of play
int currentBet;
int numRaises;
int numCalls;
bool reachedBB;
double handPercent[MAX_PLAYERS];
std::vector<char> actions[MAX_PLAYERS];
int nPlayersDealt;
int playerTurns;

void HandReset()
{
	playerTurns = 0;
	numRaises = 0;
	numCalls = 0;
	reachedBB = false;

	for (int i = 1; i < MAX_PLAYERS; i++)
	{
		actions[i].clear();
		handPercent[i] = 1;
	}
	int nPlayersDealt = GetSymbol("nplayersdealt");

}

template <class T>
bool contains(const std::vector<T> &vec, const T &value)
{
	return std::find(vec.begin(), vec.end(), value) != vec.end();
}


DealPositionType GetPositionType(int chairNumber)
{
	int dealPosition = GetSymbol((string("ac_dealpos") + to_string(chairNumber)).c_str());
	int nPlayersDealt = GetSymbol("nplayersdealt");

	return
		dealPosition == 1 ? SMALLBLIND :
		dealPosition == 2 ? BIGBLIND :

		nPlayersDealt == 10 ? (dealPosition == 3 ? EARLYPOSITION :
			dealPosition == 4 ? EARLYPOSITION :
			dealPosition == 5 ? MIDDLEPOSITION :
			dealPosition == 6 ? MIDDLEPOSITION :
			dealPosition == 7 ? MIDDLEPOSITION :
			dealPosition == 8 ? LATEPOSITION :
			dealPosition == 9 ? LATEPOSITION :
			dealPosition == 10 ? LATEPOSITION : NOPOSITION) :

		nPlayersDealt == 9 ? (dealPosition == 3 ? EARLYPOSITION :
			dealPosition == 4 ? EARLYPOSITION :
			dealPosition == 5 ? MIDDLEPOSITION :
			dealPosition == 6 ? MIDDLEPOSITION :
			dealPosition == 7 ? MIDDLEPOSITION :
			dealPosition == 8 ? LATEPOSITION :
			dealPosition == 9 ? LATEPOSITION : NOPOSITION) :

		nPlayersDealt == 8 ? (dealPosition == 3 ? EARLYPOSITION :
			dealPosition == 4 ? EARLYPOSITION :
			dealPosition == 5 ? MIDDLEPOSITION :
			dealPosition == 6 ? MIDDLEPOSITION :
			dealPosition == 7 ? LATEPOSITION :
			dealPosition == 8 ? LATEPOSITION : NOPOSITION) :

		nPlayersDealt == 7 ? (dealPosition == 3 ? EARLYPOSITION :
			dealPosition == 4 ? MIDDLEPOSITION :
			dealPosition == 5 ? MIDDLEPOSITION :
			dealPosition == 6 ? LATEPOSITION :
			dealPosition == 7 ? LATEPOSITION : NOPOSITION) :

		nPlayersDealt == 6 ? (dealPosition == 3 ? EARLYPOSITION :
			dealPosition == 4 ? MIDDLEPOSITION :
			dealPosition == 5 ? LATEPOSITION :
			dealPosition == 6 ? LATEPOSITION : NOPOSITION) :

		nPlayersDealt == 5 ? (dealPosition == 3 ? EARLYPOSITION :
			dealPosition == 4 ? MIDDLEPOSITION :
			dealPosition == 5 ? LATEPOSITION : NOPOSITION) :

		nPlayersDealt == 4 ? (dealPosition == 3 ? MIDDLEPOSITION :
			dealPosition == 4 ? LATEPOSITION : NOPOSITION) :

		nPlayersDealt == 3 ? (dealPosition == 3 ? LATEPOSITION : NOPOSITION) : NOPOSITION;
}

double GetStat(const char* statName, int chairNumber)
{
	int dealPosition = GetSymbol((string("ac_dealpos") + to_string(chairNumber)).c_str());
	int dealPositionRaise = GetSymbol("dealpositionrais");

	string positionSuffix = "";
	vector<string> preflopPosition = { "vpip","pfr","rfi","preflop_first_raiser","preflop_fold_to_raise","preflop_limp","preflop_limp_fold" };
	vector<string> inOrOutOfPosition = { "preflop_limp_3bet","preflop_3bet","preflop_fold_to_3bet","preflop_4bet",
		"flop_fold_to_cbet","flop_raise_cbet", "turn_fold_to_cbet","turn_raise_cbet","river_fold_to_cbet","river_raise_cbet",
		"flop_fold_to_raise","flop_3bet","flop_fold_to_3bet","flop_4bet",
		"turn_fold_to_raise","turn_3bet","turn_fold_to_3bet","turn_4bet",
		"river_fold_to_raise","river_3bet","river_fold_to_3bet","river_4bet" };
	vector<string> centreInOrOutOfPosition = { "flop_cbet","flop_fold_to_donkbet","flop_raise_donkbet","flop_fold_to_float","flop_raise_float",
		"turn_cbet","turn_fold_to_donkbet","turn_raise_donkbet","turn_fold_to_float","turn_raise_float",
		"river_cbet","river_fold_to_donkbet","river_raise_donkbet","river_fold_to_float","river_raise_float" };
	vector<string> stealPosition = { "steal_attempt","fold_to_resteal","4bet_vs_resteal" };
	vector<string> blindPosition = { "fold_to_steal","3bet_vs_steal" };

	vector<string> agressiveStats = { "flop_cbet","flop_raise_cbet","flop_donkbet","flop_raise_donkbet", "flop_float", "flop_raise_float",
		"turn_cbet","turn_raise_cbet","turn_donkbet","turn_raise_donkbet", "turn_float", "turn_raise_float",
		"river_cbet","river_raise_cbet","river_donkbet","river_raise_donkbet", "river_float", "river_raise_float",
		"flop_3bet", "flop_4bet", "turn_3bet", "turn_4bet", "river_3bet", "river_4bet" };
	vector<string> laydownStats = { "flop_fold_to_cbet","flop_fold_to_donkbet","flop_fold_to_float",
		"flop_fold_to_cbet","turn_fold_to_donkbet","turn_fold_to_float",
		"river_fold_to_cbet","river_fold_to_donkbet","river_fold_to_float",
		"flop_fold_to_raise", "flop_fold_to_3bet", "turn_fold_to_raise", "turn_fold_to_3bet", "river_fold_to_raise", "river_fold_to_3bet" };

	if (contains(preflopPosition, string(statName)))
	{
		if (GetPositionType(chairNumber) == EARLYPOSITION)
		{
			positionSuffix = "_ep";
		}
		else if (GetPositionType(chairNumber) == MIDDLEPOSITION)
		{
			positionSuffix = "_mp";
		}
		else if (GetPositionType(chairNumber) == LATEPOSITION)
		{
			positionSuffix = "_lp";
		}
		else if (GetPositionType(chairNumber) == SMALLBLIND || GetPositionType(chairNumber) == BIGBLIND)
		{
			positionSuffix = "_bp";
		}
	}
	else if (contains(inOrOutOfPosition, string(statName)))
	{
		if (dealPosition < dealPositionRaise)
		{
			positionSuffix = "_op";
		}
		else
		{
			positionSuffix = "_ip";
		}
	}
	else if (contains(centreInOrOutOfPosition, string(statName)))
	{
		int firstPos = 100;
		int lastPos = -1;

		for (int i = 1; i < MAX_PLAYERS; i++)
		{
			int chairNumber = i;

			if ((((int)GetSymbol("opponentsplayingbits")) >> chairNumber) & 0b1)
			{
				int dealPos = GetSymbol((string("ac_dealpos") + to_string(chairNumber)).c_str());
				if (dealPos > lastPos)
					lastPos = dealPos;
				if (dealPosition < firstPos)
					firstPos = dealPos;
			}
		}
		if (dealPosition == firstPos)
		{
			positionSuffix = "_op";
		}
		else if (dealPosition == lastPos)
		{
			positionSuffix = "_ip";
		}
		else
		{
			positionSuffix = "_cp";
		}
	}
	else if (contains(stealPosition, string(statName)))
	{
		if (dealPosition == 1)
		{
			positionSuffix = "_sb";
		}
		else if (dealPosition == nPlayersDealt - 1)
		{
			positionSuffix = "_bt";
		}
		else if (dealPosition == nPlayersDealt - 2)
		{
			positionSuffix = "_co";
		}
	}
	else if (contains(blindPosition, string(statName)))
	{
		if (dealPosition == 1)
		{
			positionSuffix = "_sb";
		}
		else if (dealPosition == 2)
		{
			positionSuffix = "_bb";
		}
	}

	string finalStatName = statName + positionSuffix;

	double avg_value = GetSymbol((string(finalStatName) + string("_avg")).c_str());
	double pt_value = GetSymbol((string("pt_") + string(finalStatName) + to_string(chairNumber)).c_str());
	double pt_hands = GetSymbol((string("pt_hands") + to_string(chairNumber)).c_str());
	double pt_opps = GetSymbol((string("pt_") + string(finalStatName) + to_string(chairNumber) + string("_opp")).c_str());
	double handStdDev = 2 / (avg_value*(1 - avg_value));
	double modifiedAvg = avg_value;

	if (finalStatName.substr(0, 5) == "turn_")
	{
		double prev_avg = GetSymbol((string("flop_") + finalStatName.substr(5) + string("_avg")).c_str());
		double afq = GetSymbol("turn_afq");
		double afq_avg = GetSymbol("turn_afq_avg");
		double lfq = GetSymbol("turn_lfq");
		double lfq_avg = GetSymbol("turn_lfq_avg");

		modifiedAvg = GetStat((string("flop_") + finalStatName.substr(5)).c_str(), chairNumber);
		modifiedAvg *= avg_value / prev_avg;

		if (contains(agressiveStats, string(statName)))
		{
			modifiedAvg *= afq / afq_avg;
		}
		else if (contains(laydownStats, string(statName)))
		{
			modifiedAvg *= lfq / lfq_avg;
		}
	}
	else if (finalStatName.substr(0, 6) == "river_")
	{
		double prev_avg = GetSymbol((string("turn_") + finalStatName.substr(5) + string("_avg")).c_str());
		double afq = GetSymbol("river_afq");
		double afq_avg = GetSymbol("river_afq_avg");
		double lfq = GetSymbol("river_lfq");
		double lfq_avg = GetSymbol("river_lfq_avg");

		modifiedAvg = GetStat((string("turn_") + finalStatName.substr(6)).c_str(), chairNumber);
		modifiedAvg *= avg_value / prev_avg;

		if (contains(agressiveStats, string(statName)))
		{
			modifiedAvg *= afq / afq_avg;
		}
		else if (contains(laydownStats, string(statName)))
		{
			modifiedAvg *= lfq / lfq_avg;
		}
	}

	/*double valueAccuracy = pow((pt_value*(1 - pt_value) / pt_opps),0.5);

	return avg_value +
	(pt_value - avg_value)*
	(pt_hands == 0 || pt_value < 0 ?
	0 : 1 / pow(2, valueAccuracy));*/

	return avg_value +
		(pt_value - modifiedAvg)*
		(pt_hands == 0 || pt_value < 0 ?
			0 : 1 / pow(2, (handStdDev / (pt_opps))));
}

void SetHandPercents()
{
	if (playerTurns == GetSymbol("f$preflopTurnNumber") || (int)GetSymbol("isfinalanswer") == 0)
	{
		return;
	}
	else if (playerTurns + 1 != GetSymbol("f$preflopTurnNumber"))
	{
		for (int i = 1; i < MAX_PLAYERS; i++)
		{
			int chairNumber = (i + (int)GetSymbol("userchair")) % 10;

			if ((((int)GetSymbol("opponentsplayingbits")) >> chairNumber) & 0b1)
			{
				handPercent[chairNumber] = GetStat("vpip", chairNumber);
			}
		}
	}
	else
	{
		playerTurns++;

		for (int i = 1; i < MAX_PLAYERS; i++)
		{
			int chairNumber = (i + (int)GetSymbol("userchair")) % 10;
			int dealPosition = GetSymbol((string("ac_dealpos") + to_string(chairNumber)).c_str());
			int dealPositionRaise = GetSymbol("dealpositionrais");

			if (!reachedBB)
			{
				reachedBB = chairNumber == (int)GetSymbol("bigblind_chair");
				if (reachedBB)
					continue;
			}


			if ((((int)GetSymbol("opponentsplayingbits")) >> chairNumber) & 0b1)
			{
				switch ((int)GetSymbol("didbetsize") + (int)GetSymbol("didcall"))
				{
				case 0:
					//if ((int)(GetSymbol((string("ac_dealpos") + to_string(chairNumber)).c_str()) - 3 + 10) % 10 < (int)(GetSymbol("dealposition") - 3 + 10) % 10)
					if (reachedBB)
					{
						if ((int)GetSymbol((string("currentbet") + to_string(chairNumber)).c_str()) == currentBet) // call
						{
							if (numRaises == 0) // limp
							{
								handPercent[chairNumber] = GetStat("preflop_limp", chairNumber);
								actions[chairNumber].push_back('L');
							}
							else if (numRaises == 1)
							{
								if ((dealPosition == 1 || dealPosition == 2) &&
									(dealPositionRaise == 1 || dealPositionRaise == nPlayersDealt - 1 || dealPositionRaise == nPlayersDealt - 2))//call steal attempt
								{
									handPercent[chairNumber] = 1 - GetStat("fold_to_steal", chairNumber);
								}
								else if (actions[chairNumber].front() == 'L')//limp first then call
								{
									handPercent[chairNumber] = 1 - GetStat("preflop_limp_fold", chairNumber);
								}
								else // call one raise
								{
									handPercent[chairNumber] = 1 - GetStat("preflop_fold_to_raise", chairNumber);
								}
								actions[chairNumber].push_back('C');
							}
							else if (numRaises == 2)
							{
								if ((dealPositionRaise == 1 || dealPositionRaise == 2) && actions[chairNumber].front() == 'R' &&
									(dealPosition == 1 || dealPosition == nPlayersDealt - 1 || dealPosition == nPlayersDealt - 2))//call resteal attempt
								{
									handPercent[chairNumber] = 1 - GetStat("fold_to_steal", chairNumber);
								}
								else // call 3b
								{
									handPercent[chairNumber] = 1 - GetStat("preflop_fold_to_3bet", chairNumber);
								}
								actions[chairNumber].push_back('C');
							}
							numCalls++;
						}
						//
						// RAISE
						//
						else if ((int)GetSymbol((string("currentbet") + to_string(chairNumber)).c_str()) > currentBet) // raise
						{
							if (numRaises == 0)
							{
								if (dealPosition == 1 || dealPosition == nPlayersDealt - 1 || dealPosition == nPlayersDealt - 2)//steal attempt
								{
									handPercent[chairNumber] = GetStat("steal_attempt", chairNumber);
								}
								else //first raiser
								{
									handPercent[chairNumber] = GetStat("preflop_first_raiser", chairNumber);
								}
							}
							else if (numRaises == 1)
							{
								if ((dealPosition == 1 || dealPosition == 2) &&
									(dealPositionRaise == 1 || dealPositionRaise == nPlayersDealt - 1 || dealPositionRaise == nPlayersDealt - 2))//resteal attempt
								{
									handPercent[chairNumber] = GetStat("3bet_vs_steal", chairNumber);
								}
								else if (actions[chairNumber].front() == 'L')//limp raise (3bet)
								{
									handPercent[chairNumber] = GetStat("preflop_limp_3bet", chairNumber);
								}
								else //regular 3bet
								{
									handPercent[chairNumber] = GetStat("preflop_3bet", chairNumber);
								}
							}
							else if (numRaises == 2)
							{
								if ((dealPositionRaise == 1 || dealPositionRaise == 2) &&
									(dealPosition == 1 || dealPosition == nPlayersDealt - 1 || dealPosition == nPlayersDealt - 2) && actions[chairNumber].front() == 'R')//4bet steal attempt
								{
									handPercent[chairNumber] = GetStat("4bet_vs_resteal", chairNumber);
								}
								else //regular 4bet
								{
									handPercent[chairNumber] = GetStat("preflop_4bet", chairNumber);
								}
							}
							numRaises++;
							numCalls = 0;
							currentBet = (int)GetSymbol((string("currentbet") + to_string(chairNumber)).c_str());
							actions[chairNumber].push_back('R');
						}
					}
					break;
				}
			}
		}
	}
}

int GetHandList(int chairNumber)
{
	//GetStat("vpip", chairNumber)*GetStat("rfi", chairNumber) > 0.75;

	int dealPosition = GetSymbol((string("ac_dealpos") + to_string(chairNumber)).c_str());
	double percent = handPercent[chairNumber];

	if (percent == 1)
	{
		if (dealPosition != 2 || (int)GetSymbol("nbetsround1") > 1)
		{
			percent = GetStat("vpip", chairNumber);
		}
	}

	if (percent > 0.75)
		return 0;
	else
		return (int)handPercent[chairNumber] / 5 + 1;
}

double ChanceToWin(int chairNumber)
{
	if (GetHandList(chairNumber) == 0)
		return GetSymbol("vs$prwin") + GetSymbol("vs$prtie") / 2;
	else
		return GetSymbol((string("vs$list") + to_string(GetHandList(chairNumber)) + string("$prwin")).c_str()) + GetSymbol((string("vs$") + to_string(GetHandList(chairNumber)) + string("$prtie")).c_str()) / 2;
}

string GetStreetName(Street street)
{
	switch (street)
	{
	case PREFLOP:
		return "preflop";
	case FLOP:
		return "flop";
	case TURN:
		return "turn";
	case RIVER:
		return "river";
	}
	return "";
}
/*
double DonkbetScore(Street street)
{
string streetName = GetStreetName(street);

//if donkbetopp
{
int chanceAllFold = 1;
for (int i = 1; i < MAX_PLAYERS; i++)
{
if ((((int)GetSymbol("opponentsplayingbits")) >> i) & 0b1)
{
chanceAllFold *= GetStat((streetName + string("_fold_to_donkbet")).c_str(), i);
}
}

int chanceOneRaise = 1;
for (int i = 1; i < MAX_PLAYERS; i++)
{
if ((((int)GetSymbol("opponentsplayingbits")) >> i) & 0b1)
{
chanceOneRaise *= (1 - GetStat((streetName + string("_raise_donkbet")).c_str(), i));
}
}
chanceOneRaise = 1/chanceOneRaise;

int cost = BetAmount();
int ExpectedIncome = chanceAllFold*pot +
chanceOneRaise*(ctwvs3bet - (1 - ctwvs3bet))*newpot *impliedoddsafter3bet +
(1 - chanceAllFold - chanceOneRaise)*newpot*(ctwvscall - (1 - ctwvscall))*impliedoddsaftercall;

}
}*/

double CbetScore(Street street, int chairNumber)
{
	string streetName = GetStreetName(street);

	double stat_fold_to_cbet = GetStat((streetName + string("_fold_to_cbet")).c_str(), chairNumber);
	double stat_raise_cbet = GetStat((streetName + string("_raise_cbet")).c_str(), chairNumber);
	double sym_avg_raise_cbet = GetSymbol((streetName + string("_raise_cbet") + string("_avg")).c_str());
	double stat_float = GetStat((streetName + string("_float")).c_str(), chairNumber);
	double sym_avg_float = GetSymbol((streetName + string("_float") + string("_avg")).c_str());

	return 0
		+
		//fold
		ChanceToWin(chairNumber) < 0.40 ? stat_fold_to_cbet :
		ChanceToWin(chairNumber) > .70 ? 0 :
		(ChanceToWin(chairNumber) - 0.40)*(0 - stat_fold_to_cbet) / 0.30 + stat_fold_to_cbet
		+
		//calls
		ChanceToWin(chairNumber) < 0.50 ? 0 :
		ChanceToWin(chairNumber) > .75 ? 1 - stat_fold_to_cbet - stat_raise_cbet :
		(ChanceToWin(chairNumber) - 0.50)*((1 - stat_fold_to_cbet - stat_raise_cbet) - 0) / 0.25 + 0
		+
		//raises
		ChanceToWin(chairNumber) < 0.70 ? 0 :
		ChanceToWin(chairNumber) > .85 ? (stat_raise_cbet * 3 - sym_avg_raise_cbet * 2) :
		(ChanceToWin(chairNumber) - 0.70)*(stat_raise_cbet * 3 - sym_avg_raise_cbet * 2) / 0.15 + 0
		+
		//float
		ChanceToWin(chairNumber) < 0.75 ? 0 :
		ChanceToWin(chairNumber) > .85 ? -(stat_float * 3 - sym_avg_float * 3) :
		(ChanceToWin(chairNumber) - 0.75)*(-(stat_float * 3 - sym_avg_float * 3) - 0) / 0.10 + 0;
}

double DonkbetScore(Street street, int chairNumber)
{
	string streetName = GetStreetName(street);

	double stat_fold_to_donkbet = GetStat((streetName + string("_fold_to_donkbet")).c_str(), chairNumber);
	double stat_raise_donkbet = GetStat((streetName + string("_raise_donkbet")).c_str(), chairNumber);
	double sym_avg_raise_donkbet = GetSymbol((streetName + string("_raise_donkbet") + string("_avg")).c_str());
	double stat_cbet = GetStat((streetName + string("_cbet")).c_str(), chairNumber);
	double sym_avg_cbet = GetSymbol((streetName + string("_cbet") + string("_avg")).c_str());
	double stat_float = GetStat((streetName + string("_float")).c_str(), chairNumber);
	double sym_avg_float = GetSymbol((streetName + string("_float") + string("_avg")).c_str());

	return 0
		+
		//fold
		ChanceToWin(chairNumber) < 0.40 ? stat_fold_to_donkbet :
		ChanceToWin(chairNumber) > .70 ? 0 :
		(ChanceToWin(chairNumber) - 0.40)*(0 - stat_fold_to_donkbet) / 0.30 + stat_fold_to_donkbet
		+
		//calls
		ChanceToWin(chairNumber) < 0.50 ? 0 :
		ChanceToWin(chairNumber) > .75 ? 1 - stat_fold_to_donkbet - stat_raise_donkbet :
		(ChanceToWin(chairNumber) - 0.50)*((1 - stat_fold_to_donkbet - stat_raise_donkbet) - 0) / 0.25 + 0
		+
		//raises
		ChanceToWin(chairNumber) < 0.70 ? 0 :
		ChanceToWin(chairNumber) > .85 ? (stat_raise_donkbet * 3 - sym_avg_raise_donkbet * 2) :
		(ChanceToWin(chairNumber) - 0.70)*(stat_raise_donkbet * 3 - sym_avg_raise_donkbet * 2) / 0.15 + 0
		+
		//cbet
		ChanceToWin(chairNumber) < 0.75 ? 0 :
		ChanceToWin(chairNumber) > .85 ? -(stat_cbet * 3 - sym_avg_cbet * 3) :
		(ChanceToWin(chairNumber) - 0.75)*(-(stat_cbet * 3 - sym_avg_cbet * 3) - 0) / 0.10 + 0;
	+
		//float
		ChanceToWin(chairNumber) < 0.75 ? 0 :
		ChanceToWin(chairNumber) > .85 ? -(stat_float * 3 - sym_avg_float * 3) :
		(ChanceToWin(chairNumber) - 0.75)*(-(stat_float * 3 - sym_avg_float * 3) - 0) / 0.10 + 0;
}

double FloatScore(Street street, int chairNumber)
{
	string streetName = GetStreetName(street);

	double stat_fold_to_float = GetStat((streetName + string("_fold_to_float")).c_str(), chairNumber);
	double stat_raise_float = GetStat((streetName + string("_raise_float")).c_str(), chairNumber);
	double sym_avg_raise_float = GetSymbol((streetName + string("_raise_float") + string("_avg")).c_str());
	double stat_float = GetStat((streetName + string("_float")).c_str(), chairNumber);
	double sym_avg_float = GetSymbol((streetName + string("_float") + string("_avg")).c_str());

	return 0
		+
		//fold
		ChanceToWin(chairNumber) < 0.40 ? stat_fold_to_float :
		ChanceToWin(chairNumber) > .70 ? 0 :
		(ChanceToWin(chairNumber) - 0.40)*(0 - stat_fold_to_float) / 0.30 + stat_fold_to_float
		+
		//calls
		ChanceToWin(chairNumber) < 0.50 ? 0 :
		ChanceToWin(chairNumber) > .75 ? 1 - stat_fold_to_float - stat_raise_float :
		(ChanceToWin(chairNumber) - 0.50)*((1 - stat_fold_to_float - stat_raise_float) - 0) / 0.25 + 0
		+
		//raises
		ChanceToWin(chairNumber) < 0.70 ? 0 :
		ChanceToWin(chairNumber) > .85 ? (stat_raise_float * 3 - sym_avg_raise_float * 2) :
		(ChanceToWin(chairNumber) - 0.70)*(stat_raise_float * 3 - sym_avg_raise_float * 2) / 0.15 + 0
		+
		//float
		ChanceToWin(chairNumber) < 0.75 ? 0 :
		ChanceToWin(chairNumber) > .85 ? -(stat_float * 3 - sym_avg_float * 3) :
		(ChanceToWin(chairNumber) - 0.75)*(-(stat_float * 3 - sym_avg_float * 3) - 0) / 0.10 + 0;
}

bool PreflopBetsize()
{
	return GetSymbol("f$betsize") > 0;
}

bool ShouldPostflopBetsize(Street street)
{
	int dealPosition = GetSymbol("dealposition");
	int lastRaised = GetSymbol((string("lastraised") + to_string(street - 1)).c_str());
	int lastRaisedDealPosition = GetSymbol((string("ac_dealpos") + to_string(lastRaised)).c_str());
	int ncallbets = GetSymbol("ncallbets");

	//if donkbetopp
	if (ncallbets = 0 && dealPosition < lastRaisedDealPosition)
	{
		double lowestScore = 100;
		for (int i = 1; i < MAX_PLAYERS; i++)
		{
			double score = DonkbetScore(FLOP, i);

			if (score < lowestScore)
				lowestScore = score;
		}
		return lowestScore > 1.5;
	}
	//if cbet
	else if (ncallbets = 0 && dealPosition == lastRaisedDealPosition)
	{
		double lowestScore = 100;
		for (int i = 1; i < MAX_PLAYERS; i++)
		{
			double score = CbetScore(FLOP, i);

			if (score < lowestScore)
				lowestScore = score;
		}
		return lowestScore > 1.5;
	}
	//if float
	else if (ncallbets = 0 && dealPosition > lastRaisedDealPosition)
	{
		double lowestScore = 100;
		for (int i = 1; i < MAX_PLAYERS; i++)
		{
			double score = FloatScore(FLOP, i);

			if (score < lowestScore)
				lowestScore = score;
		}
		return lowestScore > 1.5;
	}
	else
	{
		return false;
	}
}

bool Betsize()
{
	switch ((int)GetSymbol("betround"))
	{
	case 1:
		SetHandPercents();
		return PreflopBetsize();
	case 2:
		return ShouldPostflopBetsize(FLOP);
	case 3:
		return ShouldPostflopBetsize(TURN);
	case 4:
		return ShouldPostflopBetsize(RIVER);
	default:
		return false;
	}
}

double ImpliedOddsBonus(Street street, int raiserDealPosition)
{
	string turnName = GetStreetName(TURN);
	string riverName = GetStreetName(RIVER);

	int numOuts = GetSymbol("$HTCountofOuts");
	double largestImplied = 0;

	switch (street)
	{
	case FLOP:

		for (int i = 1; i < MAX_PLAYERS; i++)
		{
			int chairNumber = i;

			if ((((int)GetSymbol("opponentsplayingbits")) >> chairNumber) & 0b1)
			{
				double riverSeen = GetStat((riverName + string("_seen")).c_str(), chairNumber);
				double showdownSeen = GetStat("wtsd", chairNumber) / riverSeen;

				double implied = numOuts / 47 * riverSeen*0.75;
				implied *= 1 + showdownSeen*0.75;
				if (implied > largestImplied)
					largestImplied = implied;
			}
		}
		return largestImplied;
	case TURN:
		for (int i = 1; i < MAX_PLAYERS; i++)
		{
			int chairNumber = i;

			if ((((int)GetSymbol("opponentsplayingbits")) >> chairNumber) & 0b1)
			{
				double riverSeen = GetStat((riverName + string("_seen")).c_str(), chairNumber);
				double showdownSeen = GetStat("wtsd", chairNumber) / riverSeen;

				double implied = numOuts / 46 * showdownSeen*0.75;
				if (implied > largestImplied)
					largestImplied = implied;
			}
		}
		return largestImplied;
	default:
		return 0;
	}
}

bool ShouldPostflopCall(Street street)
{
	double lowestCTW = 100;

	for (int i = 1; i < MAX_PLAYERS; i++)
	{
		double score = ChanceToWin(i);

		if (score < lowestCTW)
			lowestCTW = score;
	}
	return lowestCTW * (1 + ImpliedOddsBonus(street, GetSymbol("dealpositionrais"))) > 0.5;
}

double Call()
{
	switch ((int)GetSymbol("betround"))
	{
	case 1:
		return true;
	case 2:
		return ShouldPostflopCall(FLOP);
	case 3:
		return ShouldPostflopCall(TURN);
	case 4:
		return ShouldPostflopCall(RIVER);
	default:
		return false;
	}
}

double BetsizeAmount()
{
	if (Betsize())
	{
		if ((int)GetSymbol("betround") == 1)
			return GetSymbol("f$betsize");
		else if (GetSymbol("pot") < 4 * GetSymbol("bblind"))
			return GetSymbol("pot");
		else
			return GetSymbol("pot")*0.75;
	}
	else
	{
		return 0;
	}
}

// ProcessQuery()
//   Handling the lookup of dll$symbols
DLL_IMPLEMENTS double __stdcall ProcessQuery(const char* pquery)
{
	if (pquery == NULL)
		return 0;
	if (strncmp(pquery, "dll$test", 8) == 0)
	{
		return 123.456;
	}
	if (strncmp(pquery, "dll$betsize", 11) == 0)
	{
		return BetsizeAmount();
	}
	if (strncmp(pquery, "dll$call", 8) == 0)
	{
		return Call();
	}
	if (strncmp(pquery, "dll$handreset", 13) == 0)
	{
		HandReset();
		return 0;
	}
	return 0;
}

// OnLoad and OnUnload()
//   called once and at the beginning of a session
//   when the DLL gets loaded / unloaded
//   Do initilization / finalization here.

DLL_IMPLEMENTS void __stdcall DLLOnLoad()
{
	HandReset();
#ifdef OPT_DEMO_OUTPUT
	MessageBox(NULL, "event-load", "MESSAGE", MB_OK);
#endif OPT_DEMO_OUTPUT
}

DLL_IMPLEMENTS void __stdcall DLLOnUnLoad()
{
#ifdef OPT_DEMO_OUTPUT
	MessageBox(NULL, "event-unload", "MESSAGE", MB_OK);
#endif OPT_DEMO_OUTPUT
}

// DLL entry point
//   Technically required, but don't do anything here.
//   Initializations belong into the OnLoad() function,
//   where they get executed at run-time.
//   Doing things here at load-time is a bad idea,
//   as some functionalitz might not be properly initialized   
//   (including error/handling).
BOOL APIENTRY DllMain(HANDLE hModule, DWORD ul_reason_for_call, LPVOID lpReserved)
{
	switch (ul_reason_for_call)
	{
	case DLL_PROCESS_ATTACH:
#ifdef OPT_DEMO_OUTPUT
		AllocConsole();
#endif OPT_DEMO_OUTPUT
		break;
	case DLL_THREAD_ATTACH:
		break;
	case DLL_THREAD_DETACH:
		break;
	case DLL_PROCESS_DETACH:
#ifdef OPT_DEMO_OUTPUT
		FreeConsole();
#endif OPT_DEMO_OUTPUT
		break;
	}
	return TRUE;
}
