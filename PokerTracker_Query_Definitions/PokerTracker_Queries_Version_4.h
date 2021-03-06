///*****************************************************************************
//
// This file is part of the OpenHoldem project
//   Download page:         http://code.google.com/p/openholdembot/
//   Forums:                http://www.maxinmontreal.com/forums/index.php
//   Licensed under GPL v3: http://www.gnu.org/licenses/gpl.html
//
///*****************************************************************************
//
// Purpose:
//
///*****************************************************************************

#ifndef INC_POKERTRACKER_QUERIES_VERSION_4_H
#define INC_POKERTRACKER_QUERIES_VERSION_4_H

#define MAX_STATS_PER_TYPE 5
#define GAMETYPE_MAX_PLAYERS 6
//2=headsup, 6=6max, 10=fullring
#if GAMETYPE_MAX_PLAYERS == 2
#define EARLYPOSITIONS "-1"
#define MIDDLEPOSITIONS "-1"
#define LATEPOSITIONS "-1"
#define BLINDPOSITIONS "8,9"
#define MIN_PLAYERS_AT_TABLE "2"
#define MAX_PLAYERS_AT_TABLE "2"
#elif GAMETYPE_MAX_PLAYERS == 6
#define EARLYPOSITIONS "2,3"
#define MIDDLEPOSITIONS "1"
#define LATEPOSITIONS "0"
#define BLINDPOSITIONS "8,9"
#define MIN_PLAYERS_AT_TABLE "3"
#define MAX_PLAYERS_AT_TABLE "6"
#else
#define EARLYPOSITIONS "5,6,7"
#define MIDDLEPOSITIONS "2,3,4"
#define LATEPOSITIONS "0,1"
#define BLINDPOSITIONS "8,9"
#define MIN_PLAYERS_AT_TABLE "7"
#define MAX_PLAYERS_AT_TABLE "10"
#endif

// GENERAL STATS
// ICON disabled, as not supported by PT 4.
// https://pt4.pokertracker.com/forums/viewtopic.php?f=59&t=49035
#define PT4_QUERY_SUPPORT__ICON							(0) // "icon"
#define PT4_QUERY_SUPPORT__NB_HANDS						(1)	// "hands"
#define PT4_QUERY_SUPPORT__VPIP							(4)	// "vpip"
#define PT4_QUERY_SUPPORT__PFR							(4)	// "pfr"
#define PT4_QUERY_SUPPORT__RFI							(4)	// "rfi"
#define PT4_QUERY_SUPPORT__WTSD							(1)	// "wtsd"
#define PT4_QUERY_SUPPORT__WSSD							(1)	// "wssd"

// PREFLOP STATS
#define PT4_QUERY_SUPPORT__PREFLOP_STEAL_ATTEMPT		(3)	// "preflop_steal_attempt"
#define PT4_QUERY_SUPPORT__PREFLOP_FOLD_TO_STEAL		(2)	// "preflop_fold_to_steal"
#define PT4_QUERY_SUPPORT__PREFLOP_3B_VS_STEAL			(2)	// "preflop_3bet_vs_steal"
#define PT4_QUERY_SUPPORT__PREFLOP_FOLD_TO_RESTEAL		(3)	// "preflop_fold_to_resteal"
#define PT4_QUERY_SUPPORT__PREFLOP_4B_VS_RESTEAL		(3)	// "preflop_4bet_vs_resteal"
#define PT4_QUERY_SUPPORT__PREFLOP_CALLED_ANY_RAISE		(0)	// "preflop_called_any_raise"
#define PT4_QUERY_SUPPORT__PREFLOP_FIRST_RAISER			(4)	// "preflop_first_raiser"
#define PT4_QUERY_SUPPORT__PREFLOP_FOLD_TO_RAISE		(4)	// "preflop_fold_to_raise"
#define PT4_QUERY_SUPPORT__PREFLOP_LIMP					(4)	// "preflop_limp"
#define PT4_QUERY_SUPPORT__PREFLOP_LIMP_FOLD			(4)	// "preflop_limp_fold"
#define PT4_QUERY_SUPPORT__PREFLOP_LIMP_3B				(2)	// "preflop_limp_3B"
#define PT4_QUERY_SUPPORT__PREFLOP_3B					(2)	// "preflop_3bet"
#define PT4_QUERY_SUPPORT__PREFLOP_FOLD_TO_3B			(2)	// "preflop_fold_to_3bet"
#define PT4_QUERY_SUPPORT__PREFLOP_4B					(2)	// "preflop_4bet"
#define PT4_QUERY_SUPPORT__PREFLOP_FOLD_TO_4B			(2)	// "preflop_fold_to_4bet"
#define PT4_QUERY_SUPPORT__PREFLOP_5B					(2)	// "preflop_5bet"

// AF
#define PT4_QUERY_SUPPORT__AGGRESSION_FACTOR			(4)	// "af"

// AFq
#define PT4_QUERY_SUPPORT__AGGRESSION_FREQUENCY			(5)	// "afq" 
// LFq
#define PT4_QUERY_SUPPORT__LAYDOWN_FREQUENCY			(5)	// "lfq" 

// Hero AFq
#define PT4_QUERY_SUPPORT__HERO_AGGRESSION_FREQUENCY	(5)	// "hero_afq" 
// Hero LFq
#define PT4_QUERY_SUPPORT__HERO_LAYDOWN_FREQUENCY		(5)	// "hero_lfq" 

// Street seen
#define PT4_QUERY_SUPPORT__SEEN_PCT			  			(3)	// "seen"

// Continuation bet B0
// Flop
#define PT4_QUERY_SUPPORT__FLOP_B0_BET						(2)	// "flop_cbet"
#define PT4_QUERY_SUPPORT__FLOP_B0_BET_MW					(1)	// "flop_cbet_mw"
#define PT4_QUERY_SUPPORT__FLOP_B0_FOLD_TO_BET				(2)	// "flop_fold_to_cbet"
#define PT4_QUERY_SUPPORT__FLOP_B0_FOLD_TO_BET_MW			(1)	// "flop_fold_to_cbet_mw"
#define PT4_QUERY_SUPPORT__FLOP_B0_RAISE_BET				(2)	// "flop_raise_cbet"
#define PT4_QUERY_SUPPORT__FLOP_B0_RAISE_BET_MW				(1)	// "flop_raise_cbet_mw"
// Turn
#define PT4_QUERY_SUPPORT__TURN_B0_CBET						(2)	// "turn_cbet"
#define PT4_QUERY_SUPPORT__TURN_B0_CBET_MW					(1)	// "turn_cbet_mw"
#define PT4_QUERY_SUPPORT__TURN_B0_FOLD_TO_CBET				(2)	// "turn_fold_to_cbet"
#define PT4_QUERY_SUPPORT__TURN_B0_FOLD_TO_CBET_MW			(1)	// "turn_fold_to_cbet_mw"
#define PT4_QUERY_SUPPORT__TURN_B0_RAISE_CBET				(2)	// "turn_raise_cbet"
#define PT4_QUERY_SUPPORT__TURN_B0_RAISE_CBET_MW			(1)	// "turn_raise_cbet_mw"
#define PT4_QUERY_SUPPORT__TURN_B0_DONKBET					(1)	// "turn_donkbet"
#define PT4_QUERY_SUPPORT__TURN_B0_DONKBET_MW				(1)	// "turn_donkbet_mw"
#define PT4_QUERY_SUPPORT__TURN_B0_FOLD_TO_DONKBET			(1)	// "turn_fold_to_donkbet"
#define PT4_QUERY_SUPPORT__TURN_B0_FOLD_TO_DONKBET_MW		(2)	// "turn_fold_to_donkbet_mw"
#define PT4_QUERY_SUPPORT__TURN_B0_RAISE_DONKBET			(1)	// "turn_raise_donkbet"
#define PT4_QUERY_SUPPORT__TURN_B0_RAISE_DONKBET_MW			(2)	// "turn_raise_donkbet_mw"
#define PT4_QUERY_SUPPORT__TURN_B0_FLOAT     				(1)	// "turn_float" (PT's stat for: bet IP turn vs missed cbet)
#define PT4_QUERY_SUPPORT__TURN_B0_FLOAT_MW     			(1)	// "turn_float_mw" (PT's stat for: bet IP turn vs missed cbet)
#define PT4_QUERY_SUPPORT__TURN_B0_FOLD_TO_FLOAT			(1)	// "turn_fold_to_float"
#define PT4_QUERY_SUPPORT__TURN_B0_FOLD_TO_FLOAT_MW			(2)	// "turn_fold_to_float_mw"
#define PT4_QUERY_SUPPORT__TURN_B0_RAISE_FLOAT				(1)	// "turn_raise_float"
#define PT4_QUERY_SUPPORT__TURN_B0_RAISE_FLOAT_MW			(2)	// "turn_raise_float_mw"
// River
#define PT4_QUERY_SUPPORT__RIVER_B0_CBET					(2)	// "river_cbet"
#define PT4_QUERY_SUPPORT__RIVER_B0_CBET_MW					(1)	// "river_cbet_mw"
#define PT4_QUERY_SUPPORT__RIVER_B0_FOLD_TO_CBET			(2)	// "river_fold_to_cbet"
#define PT4_QUERY_SUPPORT__RIVER_B0_FOLD_TO_CBET_MW			(1)	// "river_fold_to_cbet_mw"
#define PT4_QUERY_SUPPORT__RIVER_B0_RAISE_CBET				(2)	// "river_raise_cbet"
#define PT4_QUERY_SUPPORT__RIVER_B0_RAISE_CBET_MW			(1)	// "river_raise_cbet_mw"
#define PT4_QUERY_SUPPORT__RIVER_B0_DONKBET					(1)	// "river_donkbet"
#define PT4_QUERY_SUPPORT__RIVER_B0_DONKBET_MW				(1)	// "river_donkbet_mw"
#define PT4_QUERY_SUPPORT__RIVER_B0_FOLD_TO_DONKBET			(1)	// "river_fold_to_donkbet"
#define PT4_QUERY_SUPPORT__RIVER_B0_FOLD_TO_DONKBET_MW		(2)	// "river_fold_to_donkbet_mw"
#define PT4_QUERY_SUPPORT__RIVER_B0_RAISE_DONKBET			(1)	// "river_raise_donkbet"
#define PT4_QUERY_SUPPORT__RIVER_B0_RAISE_DONKBET_MW		(2)	// "river_raise_donkbet_mw"
#define PT4_QUERY_SUPPORT__RIVER_B0_FLOAT     				(1)	// "river_float" (PT's stat for: bet IP river vs missed cbet)
#define PT4_QUERY_SUPPORT__RIVER_B0_FLOAT_MW     			(1)	// "river_float_mw" (PT's stat for: bet IP river vs missed cbet)
#define PT4_QUERY_SUPPORT__RIVER_B0_FOLD_TO_FLOAT			(1)	// "river_fold_to_float"
#define PT4_QUERY_SUPPORT__RIVER_B0_FOLD_TO_FLOAT_MW		(2)	// "river_fold_to_float_mw"
#define PT4_QUERY_SUPPORT__RIVER_B0_RAISE_FLOAT				(1)	// "river_raise_float"
#define PT4_QUERY_SUPPORT__RIVER_B0_RAISE_FLOAT_MW			(2)	// "river_raise_float_mw"

// Continuation bet B1
// Flop
#define PT4_QUERY_SUPPORT__FLOP_B1_CBET						(2)	// "flop_cbet"
#define PT4_QUERY_SUPPORT__FLOP_B1_CBET_MW					(1)	// "flop_cbet_mw"
#define PT4_QUERY_SUPPORT__FLOP_B1_FOLD_TO_CBET				(2)	// "flop_fold_to_cbet"
#define PT4_QUERY_SUPPORT__FLOP_B1_FOLD_TO_CBET_MW			(1)	// "flop_fold_to_cbet_mw"
#define PT4_QUERY_SUPPORT__FLOP_B1_RAISE_CBET				(2)	// "flop_raise_cbet"
#define PT4_QUERY_SUPPORT__FLOP_B1_RAISE_CBET_MW			(1)	// "flop_raise_cbet_mw"
#define PT4_QUERY_SUPPORT__FLOP_B1_DONKBET					(1)	// "flop_donkbet"
#define PT4_QUERY_SUPPORT__FLOP_B1_DONKBET_MW				(1)	// "flop_donkbet_mw"
#define PT4_QUERY_SUPPORT__FLOP_B1_FOLD_TO_DONKBET			(1)	// "flop_fold_to_donkbet"
#define PT4_QUERY_SUPPORT__FLOP_B1_FOLD_TO_DONKBET_MW		(2)	// "flop_fold_to_donkbet_mw"
#define PT4_QUERY_SUPPORT__FLOP_B1_RAISE_DONKBET			(1)	// "flop_raise_donkbet"
#define PT4_QUERY_SUPPORT__FLOP_B1_RAISE_DONKBET_MW			(2)	// "flop_raise_donkbet_mw"
#define PT4_QUERY_SUPPORT__FLOP_B1_FLOAT     				(1)	// "flop_float" (PT's stat for: bet IP flop vs missed cbet)
#define PT4_QUERY_SUPPORT__FLOP_B1_FLOAT_MW     			(1)	// "flop_float_mw" (PT's stat for: bet IP flop vs missed cbet)
#define PT4_QUERY_SUPPORT__FLOP_B1_FOLD_TO_FLOAT			(1)	// "flop_fold_to_float"
#define PT4_QUERY_SUPPORT__FLOP_B1_FOLD_TO_FLOAT_MW			(2)	// "flop_fold_to_float_mw"
#define PT4_QUERY_SUPPORT__FLOP_B1_RAISE_FLOAT				(1)	// "flop_raise_float"
#define PT4_QUERY_SUPPORT__FLOP_B1_RAISE_FLOAT_MW			(2)	// "flop_raise_float_mw"
// Turn
#define PT4_QUERY_SUPPORT__TURN_B1_CBET						(2)	// "turn_cbet"
#define PT4_QUERY_SUPPORT__TURN_B1_CBET_MW					(1)	// "turn_cbet_mw"
#define PT4_QUERY_SUPPORT__TURN_B1_FOLD_TO_CBET				(2)	// "turn_fold_to_cbet"
#define PT4_QUERY_SUPPORT__TURN_B1_FOLD_TO_CBET_MW			(1)	// "turn_fold_to_cbet_mw"
#define PT4_QUERY_SUPPORT__TURN_B1_RAISE_CBET				(2)	// "turn_raise_cbet"
#define PT4_QUERY_SUPPORT__TURN_B1_RAISE_CBET_MW			(1)	// "turn_raise_cbet_mw"
#define PT4_QUERY_SUPPORT__TURN_B1_DONKBET					(1)	// "turn_donkbet"
#define PT4_QUERY_SUPPORT__TURN_B1_DONKBET_MW				(1)	// "turn_donkbet_mw"
#define PT4_QUERY_SUPPORT__TURN_B1_FOLD_TO_DONKBET			(1)	// "turn_fold_to_donkbet"
#define PT4_QUERY_SUPPORT__TURN_B1_FOLD_TO_DONKBET_MW		(2)	// "turn_fold_to_donkbet_mw"
#define PT4_QUERY_SUPPORT__TURN_B1_RAISE_DONKBET			(1)	// "turn_raise_donkbet"
#define PT4_QUERY_SUPPORT__TURN_B1_RAISE_DONKBET_MW			(2)	// "turn_raise_donkbet_mw"
#define PT4_QUERY_SUPPORT__TURN_B1_FLOAT     				(1)	// "turn_float" (PT's stat for: bet IP turn vs missed cbet)
#define PT4_QUERY_SUPPORT__TURN_B1_FLOAT_MW     			(1)	// "turn_float_mw" (PT's stat for: bet IP turn vs missed cbet)
#define PT4_QUERY_SUPPORT__TURN_B1_FOLD_TO_FLOAT			(1)	// "turn_fold_to_float"
#define PT4_QUERY_SUPPORT__TURN_B1_FOLD_TO_FLOAT_MW			(2)	// "turn_fold_to_float_mw"
#define PT4_QUERY_SUPPORT__TURN_B1_RAISE_FLOAT				(1)	// "turn_raise_float"
#define PT4_QUERY_SUPPORT__TURN_B1_RAISE_FLOAT_MW			(2)	// "turn_raise_float_mw"
// River
#define PT4_QUERY_SUPPORT__RIVER_B1_CBET					(2)	// "river_cbet"
#define PT4_QUERY_SUPPORT__RIVER_B1_CBET_MW					(1)	// "river_cbet_mw"
#define PT4_QUERY_SUPPORT__RIVER_B1_FOLD_TO_CBET			(2)	// "river_fold_to_cbet"
#define PT4_QUERY_SUPPORT__RIVER_B1_FOLD_TO_CBET_MW			(1)	// "river_fold_to_cbet_mw"
#define PT4_QUERY_SUPPORT__RIVER_B1_RAISE_CBET				(2)	// "river_raise_cbet"
#define PT4_QUERY_SUPPORT__RIVER_B1_RAISE_CBET_MW			(1)	// "river_raise_cbet_mw"
#define PT4_QUERY_SUPPORT__RIVER_B1_DONKBET					(1)	// "river_donkbet"
#define PT4_QUERY_SUPPORT__RIVER_B1_DONKBET_MW				(1)	// "river_donkbet_mw"
#define PT4_QUERY_SUPPORT__RIVER_B1_FOLD_TO_DONKBET			(1)	// "river_fold_to_donkbet"
#define PT4_QUERY_SUPPORT__RIVER_B1_FOLD_TO_DONKBET_MW		(2)	// "river_fold_to_donkbet_mw"
#define PT4_QUERY_SUPPORT__RIVER_B1_RAISE_DONKBET			(1)	// "river_raise_donkbet"
#define PT4_QUERY_SUPPORT__RIVER_B1_RAISE_DONKBET_MW		(2)	// "river_raise_donkbet_mw"
#define PT4_QUERY_SUPPORT__RIVER_B1_FLOAT     				(1)	// "river_float" (PT's stat for: bet IP river vs missed cbet)
#define PT4_QUERY_SUPPORT__RIVER_B1_FLOAT_MW     			(1)	// "river_float_mw" (PT's stat for: bet IP river vs missed cbet)
#define PT4_QUERY_SUPPORT__RIVER_B1_FOLD_TO_FLOAT			(1)	// "river_fold_to_float"
#define PT4_QUERY_SUPPORT__RIVER_B1_FOLD_TO_FLOAT_MW		(2)	// "river_fold_to_float_mw"
#define PT4_QUERY_SUPPORT__RIVER_B1_RAISE_FLOAT				(1)	// "river_raise_float"
#define PT4_QUERY_SUPPORT__RIVER_B1_RAISE_FLOAT_MW			(2)	// "river_raise_float_mw"
// Continuation bet B2
// Flop
#define PT4_QUERY_SUPPORT__FLOP_B2_CBET						(2)	// "flop_cbet"
#define PT4_QUERY_SUPPORT__FLOP_B2_CBET_MW					(1)	// "flop_cbet_mw"
#define PT4_QUERY_SUPPORT__FLOP_B2_FOLD_TO_CBET				(2)	// "flop_fold_to_cbet"
#define PT4_QUERY_SUPPORT__FLOP_B2_FOLD_TO_CBET_MW			(1)	// "flop_fold_to_cbet_mw"
#define PT4_QUERY_SUPPORT__FLOP_B2_RAISE_CBET				(2)	// "flop_raise_cbet"
#define PT4_QUERY_SUPPORT__FLOP_B2_RAISE_CBET_MW			(1)	// "flop_raise_cbet_mw"
#define PT4_QUERY_SUPPORT__FLOP_B2_DONKBET					(1)	// "flop_donkbet"
#define PT4_QUERY_SUPPORT__FLOP_B2_DONKBET_MW				(1)	// "flop_donkbet_mw"
#define PT4_QUERY_SUPPORT__FLOP_B2_FOLD_TO_DONKBET			(1)	// "flop_fold_to_donkbet"
#define PT4_QUERY_SUPPORT__FLOP_B2_FOLD_TO_DONKBET_MW		(2)	// "flop_fold_to_donkbet_mw"
#define PT4_QUERY_SUPPORT__FLOP_B2_RAISE_DONKBET			(1)	// "flop_raise_donkbet"
#define PT4_QUERY_SUPPORT__FLOP_B2_RAISE_DONKBET_MW			(2)	// "flop_raise_donkbet_mw"
#define PT4_QUERY_SUPPORT__FLOP_B2_FLOAT     				(1)	// "flop_float" (PT's stat for: bet IP flop vs missed cbet)
#define PT4_QUERY_SUPPORT__FLOP_B2_FLOAT_MW     			(1)	// "flop_float_mw" (PT's stat for: bet IP flop vs missed cbet)
#define PT4_QUERY_SUPPORT__FLOP_B2_FOLD_TO_FLOAT			(1)	// "flop_fold_to_float"
#define PT4_QUERY_SUPPORT__FLOP_B2_FOLD_TO_FLOAT_MW			(2)	// "flop_fold_to_float_mw"
#define PT4_QUERY_SUPPORT__FLOP_B2_RAISE_FLOAT				(1)	// "flop_raise_float"
#define PT4_QUERY_SUPPORT__FLOP_B2_RAISE_FLOAT_MW			(2)	// "flop_raise_float_mw"
// Turn
#define PT4_QUERY_SUPPORT__TURN_B2_CBET						(2)	// "turn_cbet"
#define PT4_QUERY_SUPPORT__TURN_B2_CBET_MW					(1)	// "turn_cbet_mw"
#define PT4_QUERY_SUPPORT__TURN_B2_FOLD_TO_CBET				(2)	// "turn_fold_to_cbet"
#define PT4_QUERY_SUPPORT__TURN_B2_FOLD_TO_CBET_MW			(1)	// "turn_fold_to_cbet_mw"
#define PT4_QUERY_SUPPORT__TURN_B2_RAISE_CBET				(2)	// "turn_raise_cbet"
#define PT4_QUERY_SUPPORT__TURN_B2_RAISE_CBET_MW			(1)	// "turn_raise_cbet_mw"
#define PT4_QUERY_SUPPORT__TURN_B2_DONKBET					(1)	// "turn_donkbet"
#define PT4_QUERY_SUPPORT__TURN_B2_DONKBET_MW				(1)	// "turn_donkbet_mw"
#define PT4_QUERY_SUPPORT__TURN_B2_FOLD_TO_DONKBET			(1)	// "turn_fold_to_donkbet"
#define PT4_QUERY_SUPPORT__TURN_B2_FOLD_TO_DONKBET_MW		(2)	// "turn_fold_to_donkbet_mw"
#define PT4_QUERY_SUPPORT__TURN_B2_RAISE_DONKBET			(1)	// "turn_raise_donkbet"
#define PT4_QUERY_SUPPORT__TURN_B2_RAISE_DONKBET_MW			(2)	// "turn_raise_donkbet_mw"
#define PT4_QUERY_SUPPORT__TURN_B2_FLOAT     				(1)	// "turn_float" (PT's stat for: bet IP turn vs missed cbet)
#define PT4_QUERY_SUPPORT__TURN_B2_FLOAT_MW     			(1)	// "turn_float_mw" (PT's stat for: bet IP turn vs missed cbet)
#define PT4_QUERY_SUPPORT__TURN_B2_FOLD_TO_FLOAT			(1)	// "turn_fold_to_float"
#define PT4_QUERY_SUPPORT__TURN_B2_FOLD_TO_FLOAT_MW			(2)	// "turn_fold_to_float_mw"
#define PT4_QUERY_SUPPORT__TURN_B2_RAISE_FLOAT				(1)	// "turn_raise_float"
#define PT4_QUERY_SUPPORT__TURN_B2_RAISE_FLOAT_MW			(2)	// "turn_raise_float_mw"
// River
#define PT4_QUERY_SUPPORT__RIVER_B2_CBET					(2)	// "river_cbet"
#define PT4_QUERY_SUPPORT__RIVER_B2_CBET_MW					(1)	// "river_cbet_mw"
#define PT4_QUERY_SUPPORT__RIVER_B2_FOLD_TO_CBET			(2)	// "river_fold_to_cbet"
#define PT4_QUERY_SUPPORT__RIVER_B2_FOLD_TO_CBET_MW			(1)	// "river_fold_to_cbet_mw"
#define PT4_QUERY_SUPPORT__RIVER_B2_RAISE_CBET				(2)	// "river_raise_cbet"
#define PT4_QUERY_SUPPORT__RIVER_B2_RAISE_CBET_MW			(1)	// "river_raise_cbet_mw"
#define PT4_QUERY_SUPPORT__RIVER_B2_DONKBET					(1)	// "river_donkbet"
#define PT4_QUERY_SUPPORT__RIVER_B2_DONKBET_MW				(1)	// "river_donkbet_mw"
#define PT4_QUERY_SUPPORT__RIVER_B2_FOLD_TO_DONKBET			(1)	// "river_fold_to_donkbet"
#define PT4_QUERY_SUPPORT__RIVER_B2_FOLD_TO_DONKBET_MW		(2)	// "river_fold_to_donkbet_mw"
#define PT4_QUERY_SUPPORT__RIVER_B2_RAISE_DONKBET			(1)	// "river_raise_donkbet"
#define PT4_QUERY_SUPPORT__RIVER_B2_RAISE_DONKBET_MW		(2)	// "river_raise_donkbet_mw"
#define PT4_QUERY_SUPPORT__RIVER_B2_FLOAT     				(1)	// "river_float" (PT's stat for: bet IP river vs missed cbet)
#define PT4_QUERY_SUPPORT__RIVER_B2_FLOAT_MW     			(1)	// "river_float_mw" (PT's stat for: bet IP river vs missed cbet)
#define PT4_QUERY_SUPPORT__RIVER_B2_FOLD_TO_FLOAT			(1)	// "river_fold_to_float"
#define PT4_QUERY_SUPPORT__RIVER_B2_FOLD_TO_FLOAT_MW		(2)	// "river_fold_to_float_mw"
#define PT4_QUERY_SUPPORT__RIVER_B2_RAISE_FLOAT				(1)	// "river_raise_float"
#define PT4_QUERY_SUPPORT__RIVER_B2_RAISE_FLOAT_MW			(2)	// "river_raise_float_mw"

// POSTFLOP Other stats
#define PT4_QUERY_SUPPORT__POSTFLOP_FOLD_TO_3B			(0)	// "postflop_fold_to_3bet"

// FLOP Other stats
#define PT4_QUERY_SUPPORT__FLOP_FOLD_TO_RAISE			(2)	// "flop_fold_to_raise"
#define PT4_QUERY_SUPPORT__FLOP_3B						(2)	// "flop_3bet"
#define PT4_QUERY_SUPPORT__FLOP_FOLD_TO_3B				(2)	// "flop_fold_to_3bet"
#define PT4_QUERY_SUPPORT__FLOP_4B						(2)	// "flop_4bet"
#define PT4_QUERY_SUPPORT__FLOP_CHECK_RAISE				(0)	// "flop_checkraise"

// TURN Other stats
#define PT4_QUERY_SUPPORT__TURN_FOLD_TO_RAISE			(2)	// "turn_fold_to_raise"
#define PT4_QUERY_SUPPORT__TURN_3B						(2)	// "turn_3bet"
#define PT4_QUERY_SUPPORT__TURN_FOLD_TO_3B				(2)	// "turn_fold_to_3bet"
#define PT4_QUERY_SUPPORT__TURN_4B						(2)	// "turn_4bet"
#define PT4_QUERY_SUPPORT__TURN_CHECK_RAISE				(0)	// "turn_checkraise"

//RIVER Other stats
#define PT4_QUERY_SUPPORT__RIVER_FOLD_TO_RAISE			(2)	// "river_fold_to_raise"
#define PT4_QUERY_SUPPORT__RIVER_3B						(2)	// "river_3bet"
#define PT4_QUERY_SUPPORT__RIVER_FOLD_TO_3B				(2)	// "river_fold_to_3bet"
#define PT4_QUERY_SUPPORT__RIVER_4B						(2)	// "river_4bet"
#define PT4_QUERY_SUPPORT__RIVER_CHECK_RAISE			(0)	// "river_checkraise"

const int k_number_of_pokertracker_stat_types =  //GENERAL STATS
(PT4_QUERY_SUPPORT__ICON > 0 ? 1 : 0)
+ (PT4_QUERY_SUPPORT__NB_HANDS > 0 ? 1 : 0)
+ (PT4_QUERY_SUPPORT__VPIP > 0 ? 1 : 0)
+ (PT4_QUERY_SUPPORT__PFR > 0 ? 1 : 0)
+ (PT4_QUERY_SUPPORT__RFI > 0 ? 1 : 0)
+ (PT4_QUERY_SUPPORT__WTSD > 0 ? 1 : 0)
+ (PT4_QUERY_SUPPORT__WSSD > 0 ? 1 : 0)
//PREFLOP STATS
+ (PT4_QUERY_SUPPORT__PREFLOP_STEAL_ATTEMPT > 0 ? 1 : 0)
+ (PT4_QUERY_SUPPORT__PREFLOP_FOLD_TO_STEAL > 0 ? 1 : 0)
+ (PT4_QUERY_SUPPORT__PREFLOP_3B_VS_STEAL > 0 ? 1 : 0)
+ (PT4_QUERY_SUPPORT__PREFLOP_FOLD_TO_RESTEAL > 0 ? 1 : 0)
+ (PT4_QUERY_SUPPORT__PREFLOP_4B_VS_RESTEAL > 0 ? 1 : 0)
+ (PT4_QUERY_SUPPORT__PREFLOP_CALLED_ANY_RAISE > 0 ? 1 : 0)
+ (PT4_QUERY_SUPPORT__PREFLOP_FIRST_RAISER > 0 ? 1 : 0)
+ (PT4_QUERY_SUPPORT__PREFLOP_FOLD_TO_RAISE > 0 ? 1 : 0)
+ (PT4_QUERY_SUPPORT__PREFLOP_LIMP > 0 ? 1 : 0)
+ (PT4_QUERY_SUPPORT__PREFLOP_LIMP_FOLD > 0 ? 1 : 0)
+ (PT4_QUERY_SUPPORT__PREFLOP_LIMP_3B > 0 ? 1 : 0)
+ (PT4_QUERY_SUPPORT__PREFLOP_3B > 0 ? 1 : 0)
+ (PT4_QUERY_SUPPORT__PREFLOP_FOLD_TO_3B > 0 ? 1 : 0)
+ (PT4_QUERY_SUPPORT__PREFLOP_4B > 0 ? 1 : 0)
+ (PT4_QUERY_SUPPORT__PREFLOP_FOLD_TO_4B > 0 ? 1 : 0)
+ (PT4_QUERY_SUPPORT__PREFLOP_5B > 0 ? 1 : 0)
//  AF
+ (PT4_QUERY_SUPPORT__AGGRESSION_FACTOR > 0 ? 1 : 0)
//  AFq
+ (PT4_QUERY_SUPPORT__AGGRESSION_FREQUENCY > 0 ? 1 : 0)
//  LFq
+ (PT4_QUERY_SUPPORT__LAYDOWN_FREQUENCY > 0 ? 1 : 0)
//  Hero AFq
+ (PT4_QUERY_SUPPORT__HERO_AGGRESSION_FREQUENCY > 0 ? 1 : 0)
//  Hero LFq
+ (PT4_QUERY_SUPPORT__HERO_LAYDOWN_FREQUENCY > 0 ? 1 : 0)
// POSTFLOP stats
+ (PT4_QUERY_SUPPORT__POSTFLOP_FOLD_TO_3B > 0 ? 1 : 0)
//  Street seen
+ (PT4_QUERY_SUPPORT__SEEN_PCT > 0 ? 1 : 0)
//  Continuation bet B0
//  Flop
+ (PT4_QUERY_SUPPORT__FLOP_B0_BET > 0 ? 1 : 0)
+ (PT4_QUERY_SUPPORT__FLOP_B0_BET_MW > 0 ? 1 : 0)
+ (PT4_QUERY_SUPPORT__FLOP_B0_FOLD_TO_BET > 0 ? 1 : 0)
+ (PT4_QUERY_SUPPORT__FLOP_B0_FOLD_TO_BET_MW > 0 ? 1 : 0)
+ (PT4_QUERY_SUPPORT__FLOP_B0_RAISE_BET > 0 ? 1 : 0)
+ (PT4_QUERY_SUPPORT__FLOP_B0_RAISE_BET_MW > 0 ? 1 : 0)
//  Turn
+ (PT4_QUERY_SUPPORT__TURN_B0_CBET > 0 ? 1 : 0)
+ (PT4_QUERY_SUPPORT__TURN_B0_CBET_MW > 0 ? 1 : 0)
+ (PT4_QUERY_SUPPORT__TURN_B0_FOLD_TO_CBET > 0 ? 1 : 0)
+ (PT4_QUERY_SUPPORT__TURN_B0_FOLD_TO_CBET_MW > 0 ? 1 : 0)
+ (PT4_QUERY_SUPPORT__TURN_B0_RAISE_CBET > 0 ? 1 : 0)
+ (PT4_QUERY_SUPPORT__TURN_B0_RAISE_CBET_MW > 0 ? 1 : 0)
+ (PT4_QUERY_SUPPORT__TURN_B0_DONKBET > 0 ? 1 : 0)
+ (PT4_QUERY_SUPPORT__TURN_B0_DONKBET_MW > 0 ? 1 : 0)
+ (PT4_QUERY_SUPPORT__TURN_B0_FOLD_TO_DONKBET > 0 ? 1 : 0)
+ (PT4_QUERY_SUPPORT__TURN_B0_FOLD_TO_DONKBET_MW > 0 ? 1 : 0)
+ (PT4_QUERY_SUPPORT__TURN_B0_RAISE_DONKBET > 0 ? 1 : 0)
+ (PT4_QUERY_SUPPORT__TURN_B0_RAISE_DONKBET_MW > 0 ? 1 : 0)
+ (PT4_QUERY_SUPPORT__TURN_B0_FLOAT > 0 ? 1 : 0)
+ (PT4_QUERY_SUPPORT__TURN_B0_FLOAT_MW > 0 ? 1 : 0)
+ (PT4_QUERY_SUPPORT__TURN_B0_FOLD_TO_FLOAT > 0 ? 1 : 0)
+ (PT4_QUERY_SUPPORT__TURN_B0_FOLD_TO_FLOAT_MW > 0 ? 1 : 0)
+ (PT4_QUERY_SUPPORT__TURN_B0_RAISE_FLOAT > 0 ? 1 : 0)
+ (PT4_QUERY_SUPPORT__TURN_B0_RAISE_FLOAT_MW > 0 ? 1 : 0)
//  River
+ (PT4_QUERY_SUPPORT__RIVER_B0_CBET > 0 ? 1 : 0)
+ (PT4_QUERY_SUPPORT__RIVER_B0_CBET_MW > 0 ? 1 : 0)
+ (PT4_QUERY_SUPPORT__RIVER_B0_FOLD_TO_CBET > 0 ? 1 : 0)
+ (PT4_QUERY_SUPPORT__RIVER_B0_FOLD_TO_CBET_MW > 0 ? 1 : 0)
+ (PT4_QUERY_SUPPORT__RIVER_B0_RAISE_CBET > 0 ? 1 : 0)
+ (PT4_QUERY_SUPPORT__RIVER_B0_RAISE_CBET_MW > 0 ? 1 : 0)
+ (PT4_QUERY_SUPPORT__RIVER_B0_DONKBET > 0 ? 1 : 0)
+ (PT4_QUERY_SUPPORT__RIVER_B0_DONKBET_MW > 0 ? 1 : 0)
+ (PT4_QUERY_SUPPORT__RIVER_B0_FOLD_TO_DONKBET > 0 ? 1 : 0)
+ (PT4_QUERY_SUPPORT__RIVER_B0_FOLD_TO_DONKBET_MW > 0 ? 1 : 0)
+ (PT4_QUERY_SUPPORT__RIVER_B0_RAISE_DONKBET > 0 ? 1 : 0)
+ (PT4_QUERY_SUPPORT__RIVER_B0_RAISE_DONKBET_MW > 0 ? 1 : 0)
+ (PT4_QUERY_SUPPORT__RIVER_B0_FLOAT > 0 ? 1 : 0)
+ (PT4_QUERY_SUPPORT__RIVER_B0_FLOAT_MW > 0 ? 1 : 0)
+ (PT4_QUERY_SUPPORT__RIVER_B0_FOLD_TO_FLOAT > 0 ? 1 : 0)
+ (PT4_QUERY_SUPPORT__RIVER_B0_FOLD_TO_FLOAT_MW > 0 ? 1 : 0)
+ (PT4_QUERY_SUPPORT__RIVER_B0_RAISE_FLOAT > 0 ? 1 : 0)
+ (PT4_QUERY_SUPPORT__RIVER_B0_RAISE_FLOAT_MW > 0 ? 1 : 0)
//  Continuation bet B1
//  Flop
+ (PT4_QUERY_SUPPORT__FLOP_B1_CBET > 0 ? 1 : 0)
+ (PT4_QUERY_SUPPORT__FLOP_B1_CBET_MW > 0 ? 1 : 0)
+ (PT4_QUERY_SUPPORT__FLOP_B1_FOLD_TO_CBET > 0 ? 1 : 0)
+ (PT4_QUERY_SUPPORT__FLOP_B1_FOLD_TO_CBET_MW > 0 ? 1 : 0)
+ (PT4_QUERY_SUPPORT__FLOP_B1_RAISE_CBET > 0 ? 1 : 0)
+ (PT4_QUERY_SUPPORT__FLOP_B1_RAISE_CBET_MW > 0 ? 1 : 0)
+ (PT4_QUERY_SUPPORT__FLOP_B1_DONKBET > 0 ? 1 : 0)
+ (PT4_QUERY_SUPPORT__FLOP_B1_DONKBET_MW > 0 ? 1 : 0)
+ (PT4_QUERY_SUPPORT__FLOP_B1_FOLD_TO_DONKBET > 0 ? 1 : 0)
+ (PT4_QUERY_SUPPORT__FLOP_B1_FOLD_TO_DONKBET_MW > 0 ? 1 : 0)
+ (PT4_QUERY_SUPPORT__FLOP_B1_RAISE_DONKBET > 0 ? 1 : 0)
+ (PT4_QUERY_SUPPORT__FLOP_B1_RAISE_DONKBET_MW > 0 ? 1 : 0)
+ (PT4_QUERY_SUPPORT__FLOP_B1_FLOAT > 0 ? 1 : 0)
+ (PT4_QUERY_SUPPORT__FLOP_B1_FLOAT_MW > 0 ? 1 : 0)
+ (PT4_QUERY_SUPPORT__FLOP_B1_FOLD_TO_FLOAT > 0 ? 1 : 0)
+ (PT4_QUERY_SUPPORT__FLOP_B1_FOLD_TO_FLOAT_MW > 0 ? 1 : 0)
+ (PT4_QUERY_SUPPORT__FLOP_B1_RAISE_FLOAT > 0 ? 1 : 0)
+ (PT4_QUERY_SUPPORT__FLOP_B1_RAISE_FLOAT_MW > 0 ? 1 : 0)
//  Turn
+ (PT4_QUERY_SUPPORT__TURN_B1_CBET > 0 ? 1 : 0)
+ (PT4_QUERY_SUPPORT__TURN_B1_CBET_MW > 0 ? 1 : 0)
+ (PT4_QUERY_SUPPORT__TURN_B1_FOLD_TO_CBET > 0 ? 1 : 0)
+ (PT4_QUERY_SUPPORT__TURN_B1_FOLD_TO_CBET_MW > 0 ? 1 : 0)
+ (PT4_QUERY_SUPPORT__TURN_B1_RAISE_CBET > 0 ? 1 : 0)
+ (PT4_QUERY_SUPPORT__TURN_B1_RAISE_CBET_MW > 0 ? 1 : 0)
+ (PT4_QUERY_SUPPORT__TURN_B1_DONKBET > 0 ? 1 : 0)
+ (PT4_QUERY_SUPPORT__TURN_B1_DONKBET_MW > 0 ? 1 : 0)
+ (PT4_QUERY_SUPPORT__TURN_B1_FOLD_TO_DONKBET > 0 ? 1 : 0)
+ (PT4_QUERY_SUPPORT__TURN_B1_FOLD_TO_DONKBET_MW > 0 ? 1 : 0)
+ (PT4_QUERY_SUPPORT__TURN_B1_RAISE_DONKBET > 0 ? 1 : 0)
+ (PT4_QUERY_SUPPORT__TURN_B1_RAISE_DONKBET_MW > 0 ? 1 : 0)
+ (PT4_QUERY_SUPPORT__TURN_B1_FLOAT > 0 ? 1 : 0)
+ (PT4_QUERY_SUPPORT__TURN_B1_FLOAT_MW > 0 ? 1 : 0)
+ (PT4_QUERY_SUPPORT__TURN_B1_FOLD_TO_FLOAT > 0 ? 1 : 0)
+ (PT4_QUERY_SUPPORT__TURN_B1_FOLD_TO_FLOAT_MW > 0 ? 1 : 0)
+ (PT4_QUERY_SUPPORT__TURN_B1_RAISE_FLOAT > 0 ? 1 : 0)
+ (PT4_QUERY_SUPPORT__TURN_B1_RAISE_FLOAT_MW > 0 ? 1 : 0)
//  River
+ (PT4_QUERY_SUPPORT__RIVER_B1_CBET > 0 ? 1 : 0)
+ (PT4_QUERY_SUPPORT__RIVER_B1_CBET_MW > 0 ? 1 : 0)
+ (PT4_QUERY_SUPPORT__RIVER_B1_FOLD_TO_CBET > 0 ? 1 : 0)
+ (PT4_QUERY_SUPPORT__RIVER_B1_FOLD_TO_CBET_MW > 0 ? 1 : 0)
+ (PT4_QUERY_SUPPORT__RIVER_B1_RAISE_CBET > 0 ? 1 : 0)
+ (PT4_QUERY_SUPPORT__RIVER_B1_RAISE_CBET_MW > 0 ? 1 : 0)
+ (PT4_QUERY_SUPPORT__RIVER_B1_DONKBET > 0 ? 1 : 0)
+ (PT4_QUERY_SUPPORT__RIVER_B1_DONKBET_MW > 0 ? 1 : 0)
+ (PT4_QUERY_SUPPORT__RIVER_B1_FOLD_TO_DONKBET > 0 ? 1 : 0)
+ (PT4_QUERY_SUPPORT__RIVER_B1_FOLD_TO_DONKBET_MW > 0 ? 1 : 0)
+ (PT4_QUERY_SUPPORT__RIVER_B1_RAISE_DONKBET > 0 ? 1 : 0)
+ (PT4_QUERY_SUPPORT__RIVER_B1_RAISE_DONKBET_MW > 0 ? 1 : 0)
+ (PT4_QUERY_SUPPORT__RIVER_B1_FLOAT > 0 ? 1 : 0)
+ (PT4_QUERY_SUPPORT__RIVER_B1_FLOAT_MW > 0 ? 1 : 0)
+ (PT4_QUERY_SUPPORT__RIVER_B1_FOLD_TO_FLOAT > 0 ? 1 : 0)
+ (PT4_QUERY_SUPPORT__RIVER_B1_FOLD_TO_FLOAT_MW > 0 ? 1 : 0)
+ (PT4_QUERY_SUPPORT__RIVER_B1_RAISE_FLOAT > 0 ? 1 : 0)
+ (PT4_QUERY_SUPPORT__RIVER_B1_RAISE_FLOAT_MW > 0 ? 1 : 0)
//  Continuation bet B2
//  Flop
+ (PT4_QUERY_SUPPORT__FLOP_B2_CBET > 0 ? 1 : 0)
+ (PT4_QUERY_SUPPORT__FLOP_B2_CBET_MW > 0 ? 1 : 0)
+ (PT4_QUERY_SUPPORT__FLOP_B2_FOLD_TO_CBET > 0 ? 1 : 0)
+ (PT4_QUERY_SUPPORT__FLOP_B2_FOLD_TO_CBET_MW > 0 ? 1 : 0)
+ (PT4_QUERY_SUPPORT__FLOP_B2_RAISE_CBET > 0 ? 1 : 0)
+ (PT4_QUERY_SUPPORT__FLOP_B2_RAISE_CBET_MW > 0 ? 1 : 0)
+ (PT4_QUERY_SUPPORT__FLOP_B2_DONKBET > 0 ? 1 : 0)
+ (PT4_QUERY_SUPPORT__FLOP_B2_DONKBET_MW > 0 ? 1 : 0)
+ (PT4_QUERY_SUPPORT__FLOP_B2_FOLD_TO_DONKBET > 0 ? 1 : 0)
+ (PT4_QUERY_SUPPORT__FLOP_B2_FOLD_TO_DONKBET_MW > 0 ? 1 : 0)
+ (PT4_QUERY_SUPPORT__FLOP_B2_RAISE_DONKBET > 0 ? 1 : 0)
+ (PT4_QUERY_SUPPORT__FLOP_B2_RAISE_DONKBET_MW > 0 ? 1 : 0)
+ (PT4_QUERY_SUPPORT__FLOP_B2_FLOAT > 0 ? 1 : 0)
+ (PT4_QUERY_SUPPORT__FLOP_B2_FLOAT_MW > 0 ? 1 : 0)
+ (PT4_QUERY_SUPPORT__FLOP_B2_FOLD_TO_FLOAT > 0 ? 1 : 0)
+ (PT4_QUERY_SUPPORT__FLOP_B2_FOLD_TO_FLOAT_MW > 0 ? 1 : 0)
+ (PT4_QUERY_SUPPORT__FLOP_B2_RAISE_FLOAT > 0 ? 1 : 0)
+ (PT4_QUERY_SUPPORT__FLOP_B2_RAISE_FLOAT_MW > 0 ? 1 : 0)
//  Turn
+ (PT4_QUERY_SUPPORT__TURN_B2_CBET > 0 ? 1 : 0)
+ (PT4_QUERY_SUPPORT__TURN_B2_CBET_MW > 0 ? 1 : 0)
+ (PT4_QUERY_SUPPORT__TURN_B2_FOLD_TO_CBET > 0 ? 1 : 0)
+ (PT4_QUERY_SUPPORT__TURN_B2_FOLD_TO_CBET_MW > 0 ? 1 : 0)
+ (PT4_QUERY_SUPPORT__TURN_B2_RAISE_CBET > 0 ? 1 : 0)
+ (PT4_QUERY_SUPPORT__TURN_B2_RAISE_CBET_MW > 0 ? 1 : 0)
+ (PT4_QUERY_SUPPORT__TURN_B2_DONKBET > 0 ? 1 : 0)
+ (PT4_QUERY_SUPPORT__TURN_B2_DONKBET_MW > 0 ? 1 : 0)
+ (PT4_QUERY_SUPPORT__TURN_B2_FOLD_TO_DONKBET > 0 ? 1 : 0)
+ (PT4_QUERY_SUPPORT__TURN_B2_FOLD_TO_DONKBET_MW > 0 ? 1 : 0)
+ (PT4_QUERY_SUPPORT__TURN_B2_RAISE_DONKBET > 0 ? 1 : 0)
+ (PT4_QUERY_SUPPORT__TURN_B2_RAISE_DONKBET_MW > 0 ? 1 : 0)
+ (PT4_QUERY_SUPPORT__TURN_B2_FLOAT > 0 ? 1 : 0)
+ (PT4_QUERY_SUPPORT__TURN_B2_FLOAT_MW > 0 ? 1 : 0)
+ (PT4_QUERY_SUPPORT__TURN_B2_FOLD_TO_FLOAT > 0 ? 1 : 0)
+ (PT4_QUERY_SUPPORT__TURN_B2_FOLD_TO_FLOAT_MW > 0 ? 1 : 0)
+ (PT4_QUERY_SUPPORT__TURN_B2_RAISE_FLOAT > 0 ? 1 : 0)
+ (PT4_QUERY_SUPPORT__TURN_B2_RAISE_FLOAT_MW > 0 ? 1 : 0)
//  River
+ (PT4_QUERY_SUPPORT__RIVER_B2_CBET > 0 ? 1 : 0)
+ (PT4_QUERY_SUPPORT__RIVER_B2_CBET_MW > 0 ? 1 : 0)
+ (PT4_QUERY_SUPPORT__RIVER_B2_FOLD_TO_CBET > 0 ? 1 : 0)
+ (PT4_QUERY_SUPPORT__RIVER_B2_FOLD_TO_CBET_MW > 0 ? 1 : 0)
+ (PT4_QUERY_SUPPORT__RIVER_B2_RAISE_CBET > 0 ? 1 : 0)
+ (PT4_QUERY_SUPPORT__RIVER_B2_RAISE_CBET_MW > 0 ? 1 : 0)
+ (PT4_QUERY_SUPPORT__RIVER_B2_DONKBET > 0 ? 1 : 0)
+ (PT4_QUERY_SUPPORT__RIVER_B2_DONKBET_MW > 0 ? 1 : 0)
+ (PT4_QUERY_SUPPORT__RIVER_B2_FOLD_TO_DONKBET > 0 ? 1 : 0)
+ (PT4_QUERY_SUPPORT__RIVER_B2_FOLD_TO_DONKBET_MW > 0 ? 1 : 0)
+ (PT4_QUERY_SUPPORT__RIVER_B2_RAISE_DONKBET > 0 ? 1 : 0)
+ (PT4_QUERY_SUPPORT__RIVER_B2_RAISE_DONKBET_MW > 0 ? 1 : 0)
+ (PT4_QUERY_SUPPORT__RIVER_B2_FLOAT > 0 ? 1 : 0)
+ (PT4_QUERY_SUPPORT__RIVER_B2_FLOAT_MW > 0 ? 1 : 0)
+ (PT4_QUERY_SUPPORT__RIVER_B2_FOLD_TO_FLOAT > 0 ? 1 : 0)
+ (PT4_QUERY_SUPPORT__RIVER_B2_FOLD_TO_FLOAT_MW > 0 ? 1 : 0)
+ (PT4_QUERY_SUPPORT__RIVER_B2_RAISE_FLOAT > 0 ? 1 : 0)
+ (PT4_QUERY_SUPPORT__RIVER_B2_RAISE_FLOAT_MW > 0 ? 1 : 0)
//  Flop Other stats
+ (PT4_QUERY_SUPPORT__FLOP_FOLD_TO_RAISE > 0 ? 1 : 0)
+ (PT4_QUERY_SUPPORT__FLOP_3B > 0 ? 1 : 0)
+ (PT4_QUERY_SUPPORT__FLOP_FOLD_TO_3B > 0 ? 1 : 0)
+ (PT4_QUERY_SUPPORT__FLOP_4B > 0 ? 1 : 0)
+ (PT4_QUERY_SUPPORT__FLOP_CHECK_RAISE > 0 ? 1 : 0)
//  Turn Other stats
+ (PT4_QUERY_SUPPORT__TURN_FOLD_TO_RAISE > 0 ? 1 : 0)
+ (PT4_QUERY_SUPPORT__TURN_3B > 0 ? 1 : 0)
+ (PT4_QUERY_SUPPORT__TURN_FOLD_TO_3B > 0 ? 1 : 0)
+ (PT4_QUERY_SUPPORT__TURN_4B > 0 ? 1 : 0)
+ (PT4_QUERY_SUPPORT__TURN_CHECK_RAISE > 0 ? 1 : 0)
//  River Other stats
+ (PT4_QUERY_SUPPORT__RIVER_FOLD_TO_RAISE > 0 ? 1 : 0)
+ (PT4_QUERY_SUPPORT__RIVER_3B > 0 ? 1 : 0)
+ (PT4_QUERY_SUPPORT__RIVER_FOLD_TO_3B > 0 ? 1 : 0)
+ (PT4_QUERY_SUPPORT__RIVER_4B > 0 ? 1 : 0)
+ (PT4_QUERY_SUPPORT__RIVER_CHECK_RAISE > 0 ? 1 : 0);

const int k_number_of_pokertracker_stats =  //GENERAL STATS
PT4_QUERY_SUPPORT__ICON
+ PT4_QUERY_SUPPORT__NB_HANDS
+ PT4_QUERY_SUPPORT__VPIP
+ PT4_QUERY_SUPPORT__PFR
+ PT4_QUERY_SUPPORT__RFI
+ PT4_QUERY_SUPPORT__WTSD
+ PT4_QUERY_SUPPORT__WSSD
//PREFLOP STATS
+ PT4_QUERY_SUPPORT__PREFLOP_STEAL_ATTEMPT
+ PT4_QUERY_SUPPORT__PREFLOP_FOLD_TO_STEAL
+ PT4_QUERY_SUPPORT__PREFLOP_3B_VS_STEAL
+ PT4_QUERY_SUPPORT__PREFLOP_FOLD_TO_RESTEAL
+ PT4_QUERY_SUPPORT__PREFLOP_4B_VS_RESTEAL
+ PT4_QUERY_SUPPORT__PREFLOP_CALLED_ANY_RAISE
+ PT4_QUERY_SUPPORT__PREFLOP_FIRST_RAISER
+ PT4_QUERY_SUPPORT__PREFLOP_FOLD_TO_RAISE
+ PT4_QUERY_SUPPORT__PREFLOP_LIMP
+ PT4_QUERY_SUPPORT__PREFLOP_LIMP_FOLD
+ PT4_QUERY_SUPPORT__PREFLOP_LIMP_3B
+ PT4_QUERY_SUPPORT__PREFLOP_3B
+ PT4_QUERY_SUPPORT__PREFLOP_FOLD_TO_3B
+ PT4_QUERY_SUPPORT__PREFLOP_4B
+ PT4_QUERY_SUPPORT__PREFLOP_FOLD_TO_4B
+ PT4_QUERY_SUPPORT__PREFLOP_5B
//  AF
+ PT4_QUERY_SUPPORT__AGGRESSION_FACTOR
//  AFq
+ PT4_QUERY_SUPPORT__AGGRESSION_FREQUENCY
//  LFq
+ PT4_QUERY_SUPPORT__LAYDOWN_FREQUENCY
//  Hero AFq
+ PT4_QUERY_SUPPORT__HERO_AGGRESSION_FREQUENCY
//  Hero LFq
+ PT4_QUERY_SUPPORT__HERO_LAYDOWN_FREQUENCY
// POSTFLOP stats
+ PT4_QUERY_SUPPORT__POSTFLOP_FOLD_TO_3B
//  Street seen
+ PT4_QUERY_SUPPORT__SEEN_PCT
//  Continuation bet B0
//  Flop
+ PT4_QUERY_SUPPORT__FLOP_B0_BET
+ PT4_QUERY_SUPPORT__FLOP_B0_BET_MW
+ PT4_QUERY_SUPPORT__FLOP_B0_FOLD_TO_BET
+ PT4_QUERY_SUPPORT__FLOP_B0_FOLD_TO_BET_MW
+ PT4_QUERY_SUPPORT__FLOP_B0_RAISE_BET
+ PT4_QUERY_SUPPORT__FLOP_B0_RAISE_BET_MW
//  Turn
+ PT4_QUERY_SUPPORT__TURN_B0_CBET
+ PT4_QUERY_SUPPORT__TURN_B0_CBET_MW
+ PT4_QUERY_SUPPORT__TURN_B0_FOLD_TO_CBET
+ PT4_QUERY_SUPPORT__TURN_B0_FOLD_TO_CBET_MW
+ PT4_QUERY_SUPPORT__TURN_B0_RAISE_CBET
+ PT4_QUERY_SUPPORT__TURN_B0_RAISE_CBET_MW
+ PT4_QUERY_SUPPORT__TURN_B0_DONKBET
+ PT4_QUERY_SUPPORT__TURN_B0_DONKBET_MW
+ PT4_QUERY_SUPPORT__TURN_B0_FOLD_TO_DONKBET
+ PT4_QUERY_SUPPORT__TURN_B0_FOLD_TO_DONKBET_MW
+ PT4_QUERY_SUPPORT__TURN_B0_RAISE_DONKBET
+ PT4_QUERY_SUPPORT__TURN_B0_RAISE_DONKBET_MW
+ PT4_QUERY_SUPPORT__TURN_B0_FLOAT
+ PT4_QUERY_SUPPORT__TURN_B0_FLOAT_MW
+ PT4_QUERY_SUPPORT__TURN_B0_FOLD_TO_FLOAT
+ PT4_QUERY_SUPPORT__TURN_B0_FOLD_TO_FLOAT_MW
+ PT4_QUERY_SUPPORT__TURN_B0_RAISE_FLOAT
+ PT4_QUERY_SUPPORT__TURN_B0_RAISE_FLOAT_MW
//  River
+ PT4_QUERY_SUPPORT__RIVER_B0_CBET
+ PT4_QUERY_SUPPORT__RIVER_B0_CBET_MW
+ PT4_QUERY_SUPPORT__RIVER_B0_FOLD_TO_CBET
+ PT4_QUERY_SUPPORT__RIVER_B0_FOLD_TO_CBET_MW
+ PT4_QUERY_SUPPORT__RIVER_B0_RAISE_CBET
+ PT4_QUERY_SUPPORT__RIVER_B0_RAISE_CBET_MW
+ PT4_QUERY_SUPPORT__RIVER_B0_DONKBET
+ PT4_QUERY_SUPPORT__RIVER_B0_DONKBET_MW
+ PT4_QUERY_SUPPORT__RIVER_B0_FOLD_TO_DONKBET
+ PT4_QUERY_SUPPORT__RIVER_B0_FOLD_TO_DONKBET_MW
+ PT4_QUERY_SUPPORT__RIVER_B0_RAISE_DONKBET
+ PT4_QUERY_SUPPORT__RIVER_B0_RAISE_DONKBET_MW
+ PT4_QUERY_SUPPORT__RIVER_B0_FLOAT
+ PT4_QUERY_SUPPORT__RIVER_B0_FLOAT_MW
+ PT4_QUERY_SUPPORT__RIVER_B0_FOLD_TO_FLOAT
+ PT4_QUERY_SUPPORT__RIVER_B0_FOLD_TO_FLOAT_MW
+ PT4_QUERY_SUPPORT__RIVER_B0_RAISE_FLOAT
+ PT4_QUERY_SUPPORT__RIVER_B0_RAISE_FLOAT_MW
//  Continuation bet B1
//  Flop
+ PT4_QUERY_SUPPORT__FLOP_B1_CBET
+ PT4_QUERY_SUPPORT__FLOP_B1_CBET_MW
+ PT4_QUERY_SUPPORT__FLOP_B1_FOLD_TO_CBET
+ PT4_QUERY_SUPPORT__FLOP_B1_FOLD_TO_CBET_MW
+ PT4_QUERY_SUPPORT__FLOP_B1_RAISE_CBET
+ PT4_QUERY_SUPPORT__FLOP_B1_RAISE_CBET_MW
+ PT4_QUERY_SUPPORT__FLOP_B1_DONKBET
+ PT4_QUERY_SUPPORT__FLOP_B1_DONKBET_MW
+ PT4_QUERY_SUPPORT__FLOP_B1_FOLD_TO_DONKBET
+ PT4_QUERY_SUPPORT__FLOP_B1_FOLD_TO_DONKBET_MW
+ PT4_QUERY_SUPPORT__FLOP_B1_RAISE_DONKBET
+ PT4_QUERY_SUPPORT__FLOP_B1_RAISE_DONKBET_MW
+ PT4_QUERY_SUPPORT__FLOP_B1_FLOAT
+ PT4_QUERY_SUPPORT__FLOP_B1_FLOAT_MW
+ PT4_QUERY_SUPPORT__FLOP_B1_FOLD_TO_FLOAT
+ PT4_QUERY_SUPPORT__FLOP_B1_FOLD_TO_FLOAT_MW
+ PT4_QUERY_SUPPORT__FLOP_B1_RAISE_FLOAT
+ PT4_QUERY_SUPPORT__FLOP_B1_RAISE_FLOAT_MW
//  Turn
+ PT4_QUERY_SUPPORT__TURN_B1_CBET
+ PT4_QUERY_SUPPORT__TURN_B1_CBET_MW
+ PT4_QUERY_SUPPORT__TURN_B1_FOLD_TO_CBET
+ PT4_QUERY_SUPPORT__TURN_B1_FOLD_TO_CBET_MW
+ PT4_QUERY_SUPPORT__TURN_B1_RAISE_CBET
+ PT4_QUERY_SUPPORT__TURN_B1_RAISE_CBET_MW
+ PT4_QUERY_SUPPORT__TURN_B1_DONKBET
+ PT4_QUERY_SUPPORT__TURN_B1_DONKBET_MW
+ PT4_QUERY_SUPPORT__TURN_B1_FOLD_TO_DONKBET
+ PT4_QUERY_SUPPORT__TURN_B1_FOLD_TO_DONKBET_MW
+ PT4_QUERY_SUPPORT__TURN_B1_RAISE_DONKBET
+ PT4_QUERY_SUPPORT__TURN_B1_RAISE_DONKBET_MW
+ PT4_QUERY_SUPPORT__TURN_B1_FLOAT
+ PT4_QUERY_SUPPORT__TURN_B1_FLOAT_MW
+ PT4_QUERY_SUPPORT__TURN_B1_FOLD_TO_FLOAT
+ PT4_QUERY_SUPPORT__TURN_B1_FOLD_TO_FLOAT_MW
+ PT4_QUERY_SUPPORT__TURN_B1_RAISE_FLOAT
+ PT4_QUERY_SUPPORT__TURN_B1_RAISE_FLOAT_MW
//  River
+ PT4_QUERY_SUPPORT__RIVER_B1_CBET
+ PT4_QUERY_SUPPORT__RIVER_B1_CBET_MW
+ PT4_QUERY_SUPPORT__RIVER_B1_FOLD_TO_CBET
+ PT4_QUERY_SUPPORT__RIVER_B1_FOLD_TO_CBET_MW
+ PT4_QUERY_SUPPORT__RIVER_B1_RAISE_CBET
+ PT4_QUERY_SUPPORT__RIVER_B1_RAISE_CBET_MW
+ PT4_QUERY_SUPPORT__RIVER_B1_DONKBET
+ PT4_QUERY_SUPPORT__RIVER_B1_DONKBET_MW
+ PT4_QUERY_SUPPORT__RIVER_B1_FOLD_TO_DONKBET
+ PT4_QUERY_SUPPORT__RIVER_B1_FOLD_TO_DONKBET_MW
+ PT4_QUERY_SUPPORT__RIVER_B1_RAISE_DONKBET
+ PT4_QUERY_SUPPORT__RIVER_B1_RAISE_DONKBET_MW
+ PT4_QUERY_SUPPORT__RIVER_B1_FLOAT
+ PT4_QUERY_SUPPORT__RIVER_B1_FLOAT_MW
+ PT4_QUERY_SUPPORT__RIVER_B1_FOLD_TO_FLOAT
+ PT4_QUERY_SUPPORT__RIVER_B1_FOLD_TO_FLOAT_MW
+ PT4_QUERY_SUPPORT__RIVER_B1_RAISE_FLOAT
+ PT4_QUERY_SUPPORT__RIVER_B1_RAISE_FLOAT_MW
//  Continuation bet B2
//  Flop
+ PT4_QUERY_SUPPORT__FLOP_B2_CBET
+ PT4_QUERY_SUPPORT__FLOP_B2_CBET_MW
+ PT4_QUERY_SUPPORT__FLOP_B2_FOLD_TO_CBET
+ PT4_QUERY_SUPPORT__FLOP_B2_FOLD_TO_CBET_MW
+ PT4_QUERY_SUPPORT__FLOP_B2_RAISE_CBET
+ PT4_QUERY_SUPPORT__FLOP_B2_RAISE_CBET_MW
+ PT4_QUERY_SUPPORT__FLOP_B2_DONKBET
+ PT4_QUERY_SUPPORT__FLOP_B2_DONKBET_MW
+ PT4_QUERY_SUPPORT__FLOP_B2_FOLD_TO_DONKBET
+ PT4_QUERY_SUPPORT__FLOP_B2_FOLD_TO_DONKBET_MW
+ PT4_QUERY_SUPPORT__FLOP_B2_RAISE_DONKBET
+ PT4_QUERY_SUPPORT__FLOP_B2_RAISE_DONKBET_MW
+ PT4_QUERY_SUPPORT__FLOP_B2_FLOAT
+ PT4_QUERY_SUPPORT__FLOP_B2_FLOAT_MW
+ PT4_QUERY_SUPPORT__FLOP_B2_FOLD_TO_FLOAT
+ PT4_QUERY_SUPPORT__FLOP_B2_FOLD_TO_FLOAT_MW
+ PT4_QUERY_SUPPORT__FLOP_B2_RAISE_FLOAT
+ PT4_QUERY_SUPPORT__FLOP_B2_RAISE_FLOAT_MW
//  Turn
+ PT4_QUERY_SUPPORT__TURN_B2_CBET
+ PT4_QUERY_SUPPORT__TURN_B2_CBET_MW
+ PT4_QUERY_SUPPORT__TURN_B2_FOLD_TO_CBET
+ PT4_QUERY_SUPPORT__TURN_B2_FOLD_TO_CBET_MW
+ PT4_QUERY_SUPPORT__TURN_B2_RAISE_CBET
+ PT4_QUERY_SUPPORT__TURN_B2_RAISE_CBET_MW
+ PT4_QUERY_SUPPORT__TURN_B2_DONKBET
+ PT4_QUERY_SUPPORT__TURN_B2_DONKBET_MW
+ PT4_QUERY_SUPPORT__TURN_B2_FOLD_TO_DONKBET
+ PT4_QUERY_SUPPORT__TURN_B2_FOLD_TO_DONKBET_MW
+ PT4_QUERY_SUPPORT__TURN_B2_RAISE_DONKBET
+ PT4_QUERY_SUPPORT__TURN_B2_RAISE_DONKBET_MW
+ PT4_QUERY_SUPPORT__TURN_B2_FLOAT
+ PT4_QUERY_SUPPORT__TURN_B2_FLOAT_MW
+ PT4_QUERY_SUPPORT__TURN_B2_FOLD_TO_FLOAT
+ PT4_QUERY_SUPPORT__TURN_B2_FOLD_TO_FLOAT_MW
+ PT4_QUERY_SUPPORT__TURN_B2_RAISE_FLOAT
+ PT4_QUERY_SUPPORT__TURN_B2_RAISE_FLOAT_MW
//  River
+ PT4_QUERY_SUPPORT__RIVER_B2_CBET
+ PT4_QUERY_SUPPORT__RIVER_B2_CBET_MW
+ PT4_QUERY_SUPPORT__RIVER_B2_FOLD_TO_CBET
+ PT4_QUERY_SUPPORT__RIVER_B2_FOLD_TO_CBET_MW
+ PT4_QUERY_SUPPORT__RIVER_B2_RAISE_CBET
+ PT4_QUERY_SUPPORT__RIVER_B2_RAISE_CBET_MW
+ PT4_QUERY_SUPPORT__RIVER_B2_DONKBET
+ PT4_QUERY_SUPPORT__RIVER_B2_DONKBET_MW
+ PT4_QUERY_SUPPORT__RIVER_B2_FOLD_TO_DONKBET
+ PT4_QUERY_SUPPORT__RIVER_B2_FOLD_TO_DONKBET_MW
+ PT4_QUERY_SUPPORT__RIVER_B2_RAISE_DONKBET
+ PT4_QUERY_SUPPORT__RIVER_B2_RAISE_DONKBET_MW
+ PT4_QUERY_SUPPORT__RIVER_B2_FLOAT
+ PT4_QUERY_SUPPORT__RIVER_B2_FLOAT_MW
+ PT4_QUERY_SUPPORT__RIVER_B2_FOLD_TO_FLOAT
+ PT4_QUERY_SUPPORT__RIVER_B2_FOLD_TO_FLOAT_MW
+ PT4_QUERY_SUPPORT__RIVER_B2_RAISE_FLOAT
+ PT4_QUERY_SUPPORT__RIVER_B2_RAISE_FLOAT_MW
//  Flop Other stats
+ PT4_QUERY_SUPPORT__FLOP_FOLD_TO_RAISE
+ PT4_QUERY_SUPPORT__FLOP_3B
+ PT4_QUERY_SUPPORT__FLOP_FOLD_TO_3B
+ PT4_QUERY_SUPPORT__FLOP_4B
+ PT4_QUERY_SUPPORT__FLOP_CHECK_RAISE
//  Turn Other stats
+ PT4_QUERY_SUPPORT__TURN_FOLD_TO_RAISE
+ PT4_QUERY_SUPPORT__TURN_3B
+ PT4_QUERY_SUPPORT__TURN_FOLD_TO_3B
+ PT4_QUERY_SUPPORT__TURN_4B
+ PT4_QUERY_SUPPORT__TURN_CHECK_RAISE
//  River Other stats
+ PT4_QUERY_SUPPORT__RIVER_FOLD_TO_RAISE
+ PT4_QUERY_SUPPORT__RIVER_3B
+ PT4_QUERY_SUPPORT__RIVER_FOLD_TO_3B
+ PT4_QUERY_SUPPORT__RIVER_4B
+ PT4_QUERY_SUPPORT__RIVER_CHECK_RAISE;

// PokerTracker support
enum PT_Groups {
	pt_group_basic = 1,
	pt_group_advanced = 2,
	pt_group_positional = 3
};

enum PT_UpdateTypes {
	pt_updateType_noUpdate = 0,
	pt_updateType_updateBasic = 1,
	pt_updateType_updateAll = 2
};

enum PT_StatTypes {
	pt_statType_Ring = 0,
	pt_statType_Tourney = 1
};

typedef struct t_QueryDefinition {
	int num_queries;
	CString name[MAX_STATS_PER_TYPE];
	CString description_for_editor[MAX_STATS_PER_TYPE];
	CString query;
	int stat_group;
};

typedef struct t_StatDefinition {
	double values[kMaxNumberOfPlayers];
	int opps[kMaxNumberOfPlayers];
	double average;
	int average_opp;
	CString* name;
	CString* description_for_editor;
	int *stat_group;
};

// PokerTracker naming conventions: 
//   http://www.pokertracker.com/guides/PT3/tutorials/using-custom-reports-and-statistics#Naming-conventions
t_QueryDefinition query_definitions[k_number_of_pokertracker_stat_types] =
{
#if PT4_QUERY_SUPPORT__ICON
	// PT4 query to get icon 
	{
		// name
		"icon",
		// description_for_editor
		"Poker Tracker auto-rate icon code",
		// query
		"SELECT val_icon as result \
		 FROM   player \
		 WHERE  id_site = %SITEID% AND \
		        player_name LIKE '%SCREENNAME%'",
		// stat_group
		pt_group_basic
	},
#endif

#if PT4_QUERY_SUPPORT__NB_HANDS
	// PT4 query to get number of hands in the database 
	{
		PT4_QUERY_SUPPORT__NB_HANDS,
		// name
		{"hands"},
	// description_for_editor
		{"Poker Tracker number of hands that are in the database"},
		// query
		"SELECT (case	when ActionOpportunities = 0 then -1 \
				 else cast(ActionCount as real) / ActionOpportunities \
				 end) as result, ActionOpportunities \
		 FROM	(SELECT	count(*) \
						 as ActionCount, \
						count(distinct REPLACE(P.player_name, ' ', '')) \
						 as ActionOpportunities \
				 FROM	player as P, %TYPE%_hand_player_statistics as S \
				 WHERE	S.id_player = P.id_player AND \
						NOT S.flg_hero AND \
						S.cnt_players between " MIN_PLAYERS_AT_TABLE " AND " MAX_PLAYERS_AT_TABLE " AND \
						S.id_gametype = %GAMETYPE% AND \
						P.id_site = %SITEID% AND \
						REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%') foo",
		// stat_group
		pt_group_basic
	},
#endif

#if PT4_QUERY_SUPPORT__VPIP
	// PT4 query to get vpip 
	{
		PT4_QUERY_SUPPORT__VPIP,
		// name
		{"vpip_ep", "vpip_mp", "vpip_lp", "vpip_bp"},
		// description_for_editor
		{"Poker Tracker VP$IP EP", "Poker Tracker VP$IP MP", "Poker Tracker VP$IP LP", "Poker Tracker VP$IP BP"},
		// query
		"SELECT (case	when ActionOpportunities1 = 0 then -1 \
			else cast(ActionCount1 as real) / ActionOpportunities1 \
			end) as result1, ActionOpportunities1, \
			(case	when ActionOpportunities2 = 0 then - 1 \
			else cast(ActionCount2 as real) / ActionOpportunities2 \
			end) as result2, ActionOpportunities2, \
			(case	when ActionOpportunities3 = 0 then - 1 \
			else cast(ActionCount3 as real) / ActionOpportunities3 \
			end) as result3, ActionOpportunities3, \
			(case	when ActionOpportunities4 = 0 then - 1 \
			else cast(ActionCount4 as real) / ActionOpportunities4 \
			end) as result4, ActionOpportunities4 \
			FROM(SELECT	sum(case when l.absolute_position in(" EARLYPOSITIONS ") AND flg_vpip then 1 else 0 end) \
			as ActionCount1, \
			sum(case when l.absolute_position in(" EARLYPOSITIONS ") then 1 else 0 end) \
			as ActionOpportunities1, \
			sum(case when l.absolute_position in(" MIDDLEPOSITIONS ") AND flg_vpip then 1 else 0 end) \
			as ActionCount2, \
			sum(case when l.absolute_position in(" MIDDLEPOSITIONS ") then 1 else 0 end) \
			as ActionOpportunities2, \
			sum(case when l.absolute_position in(" LATEPOSITIONS ")  AND flg_vpip then 1 else 0 end) \
			as ActionCount3, \
			sum(case when l.absolute_position in(" LATEPOSITIONS ") then 1 else 0 end) \
			as ActionOpportunities3, \
			sum(case when l.absolute_position in(" BLINDPOSITIONS ")  AND flg_vpip then 1 else 0 end) \
			as ActionCount4, \
			sum(case when l.absolute_position in(" BLINDPOSITIONS ") then 1 else 0 end) \
			as ActionOpportunities4 \
				 FROM	player as P, %TYPE%_hand_player_statistics as S, lookup_positions l \
				 WHERE	S.id_player = P.id_player AND \
						NOT S.flg_hero AND \
						S.cnt_players between " MIN_PLAYERS_AT_TABLE " AND " MAX_PLAYERS_AT_TABLE " AND \
						S.id_gametype = %GAMETYPE% AND \
						P.id_site = %SITEID% AND \
						REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%' AND \
						S.position = l.position AND \
						S.cnt_players = l.cnt_players) foo",
		// stat_group
		pt_group_basic
	},
#endif

#if PT4_QUERY_SUPPORT__PFR
	// PT4 query to get pre flop raise 
	{
		PT4_QUERY_SUPPORT__PFR,
		// name
		{ "pfr_ep", "pfr_mp", "pfr_lp", "pfr_bp" },
		// description_for_editor
			{ "Poker Tracker PFR EP", "Poker Tracker PFR MP", "Poker Tracker PFR LP", "Poker Tracker PFR BP" },
		// query
		"SELECT (case	when ActionOpportunities1 = 0 then -1 \
				else cast(ActionCount1 as real) / ActionOpportunities1 \
				end) as result1, ActionOpportunities1, \
				(case	when ActionOpportunities2 = 0 then - 1 \
				else cast(ActionCount2 as real) / ActionOpportunities2 \
				end) as result2, ActionOpportunities2, \
				(case	when ActionOpportunities3 = 0 then - 1 \
				else cast(ActionCount3 as real) / ActionOpportunities3 \
				end) as result3, ActionOpportunities3, \
				(case	when ActionOpportunities4 = 0 then - 1 \
				else cast(ActionCount4 as real) / ActionOpportunities4 \
				end) as result4, ActionOpportunities4 \
				FROM(SELECT	sum(case when l.absolute_position in(" EARLYPOSITIONS ") AND cnt_p_raise > 0 then 1 else 0 end) \
							as ActionCount1, \
							sum(case when l.absolute_position in(" EARLYPOSITIONS ") then 1 else 0 end) \
							as ActionOpportunities1, \
							sum(case when l.absolute_position in(" MIDDLEPOSITIONS ") AND cnt_p_raise > 0 then 1 else 0 end) \
							as ActionCount2, \
							sum(case when l.absolute_position in(" MIDDLEPOSITIONS ") then 1 else 0 end) \
							as ActionOpportunities2, \
							sum(case when l.absolute_position in(" LATEPOSITIONS ")  AND cnt_p_raise > 0 then 1 else 0 end) \
							as ActionCount3, \
							sum(case when l.absolute_position in(" LATEPOSITIONS ") then 1 else 0 end) \
							as ActionOpportunities3, \
							sum(case when l.absolute_position in(" BLINDPOSITIONS ")  AND cnt_p_raise > 0 then 1 else 0 end) \
							as ActionCount4, \
							sum(case when l.absolute_position in(" BLINDPOSITIONS ") then 1 else 0 end) \
							as ActionOpportunities4 \
					 FROM	player as P, %TYPE%_hand_player_statistics as S, lookup_positions l \
					 WHERE	S.id_player = P.id_player AND \
							NOT S.flg_hero AND \
							S.cnt_players between " MIN_PLAYERS_AT_TABLE " AND " MAX_PLAYERS_AT_TABLE " AND \
							S.id_gametype = %GAMETYPE% AND \
							P.id_site = %SITEID% AND \
							REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%' AND \
							S.position = l.position AND \
							S.cnt_players = l.cnt_players) foo",
		// stat_group
		pt_group_basic
	},
#endif

#if PT4_QUERY_SUPPORT__RFI
	// PT4 query to get pre-flop raise first in
	{
		PT4_QUERY_SUPPORT__RFI,
		// name
		{ "rfi_ep", "rfi_mp", "rfi_lp", "rfi_bp" },
		// description_for_editor
			{ "Poker Tracker RFI EP", "Poker Tracker RFI MP", "Poker Tracker RFI LP", "Poker Tracker RFI BP" },
		// query
		"SELECT (case	when ActionOpportunities1 = 0 then -1 \
				else cast(ActionCount1 as real) / ActionOpportunities1 \
				end) as result1, ActionOpportunities1, \
				(case	when ActionOpportunities2 = 0 then - 1 \
				else cast(ActionCount2 as real) / ActionOpportunities2 \
				end) as result2, ActionOpportunities2, \
				(case	when ActionOpportunities3 = 0 then - 1 \
				else cast(ActionCount3 as real) / ActionOpportunities3 \
				end) as result3, ActionOpportunities3, \
				(case	when ActionOpportunities4 = 0 then - 1 \
				else cast(ActionCount4 as real) / ActionOpportunities4 \
				end) as result4, ActionOpportunities4 \
				FROM(SELECT	sum(case when l.absolute_position in(" EARLYPOSITIONS ") AND s.flg_p_open_opp AND s.flg_p_first_raise then 1 else 0 end) \
							as ActionCount1, \
							sum(case when l.absolute_position in(" EARLYPOSITIONS ") AND s.flg_p_open_opp then 1 else 0 end) \
							as ActionOpportunities1, \
							sum(case when l.absolute_position in(" MIDDLEPOSITIONS ") AND s.flg_p_open_opp AND s.flg_p_first_raise then 1 else 0 end) \
							as ActionCount2, \
							sum(case when l.absolute_position in(" MIDDLEPOSITIONS ") AND s.flg_p_open_opp then 1 else 0 end) \
							as ActionOpportunities2, \
							sum(case when l.absolute_position in(" LATEPOSITIONS ") AND s.flg_p_open_opp AND s.flg_p_first_raise then 1 else 0 end) \
							as ActionCount3, \
							sum(case when l.absolute_position in(" LATEPOSITIONS ") AND s.flg_p_open_opp then 1 else 0 end) \
							as ActionOpportunities3, \
							sum(case when l.absolute_position in(" BLINDPOSITIONS ") AND s.flg_p_open_opp AND s.flg_p_first_raise then 1 else 0 end) \
							as ActionCount4, \
							sum(case when l.absolute_position in(" BLINDPOSITIONS ") AND s.flg_p_open_opp then 1 else 0 end) \
							as ActionOpportunities4 \
					 FROM	player as P, %TYPE%_hand_player_statistics as S, lookup_positions l \
					 WHERE	S.id_player = P.id_player AND \
							NOT S.flg_hero AND \
						S.cnt_players between " MIN_PLAYERS_AT_TABLE " AND " MAX_PLAYERS_AT_TABLE " AND \
							S.id_gametype = %GAMETYPE% AND \
							P.id_site = %SITEID% AND \
							REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%' AND \
							S.position = l.position AND \
							S.cnt_players = l.cnt_players) foo",
		// stat_group
		pt_group_basic
	},
#endif

#if PT4_QUERY_SUPPORT__WTSD
	// PT4 query to get Went to SD 
{
	PT4_QUERY_SUPPORT__WTSD,
	// name
	{ "wtsd" },
	// description_for_editor
	{ "Poker Tracker went to showdown" },
		// query
		"SELECT (case when ActionOpportunities = 0 then -1 \
				 else cast(ActionCount as real) / ActionOpportunities \
				 end) as result, ActionOpportunities \
		 FROM	(SELECT	sum(case when flg_showdown then 1 else 0 end) \
						 as ActionCount, \
						sum(case when flg_f_saw then 1 else 0 end) \
						 as ActionOpportunities \
				 FROM	player as P, %TYPE%_hand_player_statistics as S \
				 WHERE	S.id_player = P.id_player AND \
						NOT S.flg_hero AND \
						S.cnt_players between " MIN_PLAYERS_AT_TABLE " AND " MAX_PLAYERS_AT_TABLE " AND \
						S.id_gametype = %GAMETYPE% AND \
						P.id_site = %SITEID% AND \
						REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%') foo",
		// stat_group
		pt_group_basic
	},
#endif

#if PT4_QUERY_SUPPORT__WSSD
	// PT4 query to get Won $ At SD 
	{
		PT4_QUERY_SUPPORT__WSSD,
		// name
		{"wssd"},
		// description_for_editor
		{"Poker Tracker won $ at showdown"},
		// query
		"SELECT (case when ActionOpportunities = 0 then -1 \
				 else cast(ActionCount as real) / ActionOpportunities \
				 end) as result, ActionOpportunities \
		 FROM	(SELECT	sum (case when (s.flg_showdown AND s.flg_won_hand) then  1 else  0 end) \
						 as ActionCount, \
						sum((case when(s.flg_showdown) then  1 else  0 end)) \
						 as ActionOpportunities \
				 FROM	player as P, %TYPE%_hand_player_statistics as S \
				 WHERE	S.id_player = P.id_player AND \
						NOT S.flg_hero AND \
						S.cnt_players between " MIN_PLAYERS_AT_TABLE " AND " MAX_PLAYERS_AT_TABLE " AND \
						S.id_gametype = %GAMETYPE% AND \
						P.id_site = %SITEID% AND \
						REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%') foo",
		// stat_group
		pt_group_basic
	},
#endif

#if PT4_QUERY_SUPPORT__PREFLOP_STEAL_ATTEMPT
			// PT4 query to get attempted to steal 
		{
			PT4_QUERY_SUPPORT__PREFLOP_STEAL_ATTEMPT,
			// name
			{ "preflop_steal_attempt_co", "preflop_steal_attempt_bt", "preflop_steal_attempt_sb" },
			// description_for_editor
			{ "Poker Tracker attempt to steal blinds from cutoff", "Poker Tracker attempt to steal blinds from button" , "Poker Tracker attempt to steal blinds from small blind" },
			// query
			"SELECT (case	when ActionOpportunities1 = 0 then -1 \
				else cast(ActionCount1 as real) / ActionOpportunities1 \
				end) as result1, ActionOpportunities1, \
				(case	when ActionOpportunities2 = 0 then - 1 \
				else cast(ActionCount2 as real) / ActionOpportunities2 \
				end) as result2, ActionOpportunities2, \
				(case	when ActionOpportunities3 = 0 then - 1 \
				else cast(ActionCount3 as real) / ActionOpportunities3 \
				end) as result3, ActionOpportunities3 \
				FROM(SELECT	sum(case when l.absolute_position in(1) AND s.flg_steal_att then 1 else 0 end) \
							as ActionCount1, \
							sum(case when l.absolute_position in(1) AND s.flg_steal_opp then 1 else 0 end) \
							as ActionOpportunities1, \
							sum(case when l.absolute_position in(0) AND s.flg_steal_att then 1 else 0 end) \
							as ActionCount2, \
							sum(case when l.absolute_position in(0) AND s.flg_steal_opp then 1 else 0 end) \
							as ActionOpportunities2, \
							sum(case when l.absolute_position in(9) AND s.flg_steal_att then 1 else 0 end) \
							as ActionCount3, \
							sum(case when l.absolute_position in(9) AND s.flg_steal_opp then 1 else 0 end) \
							as ActionOpportunities3 \
					 FROM	player as P, %TYPE%_hand_player_statistics as S, lookup_positions l \
					 WHERE	S.id_player = P.id_player AND \
							NOT S.flg_hero AND \
						S.cnt_players between " MIN_PLAYERS_AT_TABLE " AND " MAX_PLAYERS_AT_TABLE " AND \
							S.id_gametype = %GAMETYPE% AND \
							P.id_site = %SITEID% AND \
							REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%' AND \
							S.position = l.position AND \
							S.cnt_players = l.cnt_players) foo",
			// stat_group
			pt_group_advanced
		},
#endif

#if PT4_QUERY_SUPPORT__PREFLOP_FOLD_TO_STEAL
		// PT4 query to get attempted to steal 
	{
		PT4_QUERY_SUPPORT__PREFLOP_FOLD_TO_STEAL,
		// name
		{ "preflop_fold_to_steal_sb", "preflop_fold_to_steal_bb" },
		// description_for_editor
		{ "Poker Tracker fold to steal as small blind" , "Poker Tracker fold to steal as big blind" },
		// query
		"SELECT (case	when ActionOpportunities1 = 0 then - 1 \
				else cast(ActionCount1 as real) / ActionOpportunities1 \
				end) as result1, ActionOpportunities1, \
				(case	when ActionOpportunities2 = 0 then - 1 \
				else cast(ActionCount2 as real) / ActionOpportunities2 \
				end) as result2, ActionOpportunities2 \
				FROM(SELECT	sum(case when s.flg_sb_steal_fold then 1 else 0 end) \
							as ActionCount1, \
							sum(case when s.flg_blind_def_opp AND flg_blind_s then 1 else 0 end) \
							as ActionOpportunities1, \
							sum(case when s.flg_bb_steal_fold then 1 else 0 end) \
							as ActionCount2, \
							sum(case when s.flg_blind_def_opp AND flg_blind_b then 1 else 0 end) \
							as ActionOpportunities2 \
					 FROM	player as P, %TYPE%_hand_player_statistics as S \
					 WHERE	S.id_player = P.id_player AND \
							NOT S.flg_hero AND \
						S.cnt_players between " MIN_PLAYERS_AT_TABLE " AND " MAX_PLAYERS_AT_TABLE " AND \
							S.id_gametype = %GAMETYPE% AND \
							P.id_site = %SITEID% AND \
							REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%') foo",
							// stat_group
							pt_group_advanced
	},
#endif

#if PT4_QUERY_SUPPORT__PREFLOP_3B_VS_STEAL
	// PT4 query to get 3B vs. steal 
{
	PT4_QUERY_SUPPORT__PREFLOP_3B_VS_STEAL,
	// name
	{ "preflop_3bet_vs_steal_sb", "preflop_3bet_vs_steal_bb" },
	// description_for_editor
	{ "Poker Tracker SB 3bet vs. steal", "Poker Tracker BB 3bet vs. steal" },
	// query
	"SELECT (case when ActionOpportunities1 = 0 then -1 \
				 else cast(ActionCount1 as real) / ActionOpportunities1 \
				 end) as result1, ActionOpportunities1, \
				(case when ActionOpportunities2 = 0 then -1 \
				 else cast(ActionCount2 as real) / ActionOpportunities2 \
				 end) as result2, ActionOpportunities2 \
			FROM (SELECT  sum(case when (flg_blind_s AND flg_blind_def_opp AND flg_p_3bet) then 1 else 0 end) \
						  as ActionCount1, \
						  sum(case when (flg_blind_s AND flg_blind_def_opp AND flg_p_3bet_opp) then 1 else 0 end) \
						  as ActionOpportunities1, \
						  sum(case when (flg_blind_b AND flg_blind_def_opp AND flg_p_3bet) then 1 else 0 end) \
						  as ActionCount2, \
						  sum(case when (flg_blind_b AND flg_blind_def_opp AND flg_p_3bet_opp) then 1 else 0 end) \
						  as ActionOpportunities2 \
				 FROM	player as P, %TYPE%_hand_player_statistics as S \
				 WHERE	S.id_player = P.id_player AND \
						NOT S.flg_hero AND \
						S.cnt_players between " MIN_PLAYERS_AT_TABLE " AND " MAX_PLAYERS_AT_TABLE " AND \
						S.id_gametype = %GAMETYPE% AND \
						P.id_site = %SITEID% AND \
						REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%') foo",
						// stat_group
						pt_group_positional
	},
#endif

#if PT4_QUERY_SUPPORT__PREFLOP_FOLD_TO_RESTEAL
	// PT4 query to get Fold to Resteal 
	{
		PT4_QUERY_SUPPORT__PREFLOP_FOLD_TO_RESTEAL,
		// name
		{ "preflop_fold_to_resteal_co", "preflop_fold_to_resteal_bt", "preflop_fold_to_resteal_sb" },
		// description_for_editor
		{ "Poker Tracker fold to resteal as cut off", "Poker Tracker fold to resteal as button" , "Poker Tracker fold to resteal as small blind" },
		// query
		"SELECT (case when ActionOpportunities1 = 0 then -1 \
				else cast(ActionCount1 as real) / ActionOpportunities1 \
				end) as result1, ActionOpportunities1, \
				(case when ActionOpportunities2 = 0 then -1 \
				else cast(ActionCount2 as real) / ActionOpportunities2 \
				end) as result2, ActionOpportunities2, \
				(case when ActionOpportunities3 = 0 then -1 \
				else cast(ActionCount3 as real) / ActionOpportunities3 \
				end) as result3, ActionOpportunities3 \
		FROM	(SELECT	sum(case when(l.absolute_position in(1) AND s.flg_steal_att AND s.flg_p_3bet_def_opp AND s.enum_p_3bet_action='F') then  1 else  0 end) \
						as ActionCount1, \
						sum((case when(l.absolute_position in(1) AND s.flg_steal_att AND s.flg_p_3bet_def_opp ) then  1 else  0 end)) \
						as ActionOpportunities1, \
						sum(case when(l.absolute_position in(0) AND s.flg_steal_att AND s.flg_p_3bet_def_opp AND s.enum_p_3bet_action = 'F') then  1 else  0 end) \
						as ActionCount2, \
						sum((case when(l.absolute_position in(0) AND s.flg_steal_att AND s.flg_p_3bet_def_opp) then  1 else  0 end)) \
						as ActionOpportunities2, \
						sum(case when(l.absolute_position in(9) AND s.flg_steal_att AND s.flg_p_3bet_def_opp AND s.enum_p_3bet_action='F') then  1 else  0 end) \
						as ActionCount3, \
						sum((case when(l.absolute_position in(9) AND s.flg_steal_att AND s.flg_p_3bet_def_opp ) then  1 else  0 end)) \
						as ActionOpportunities3 \
				FROM	player as P, %TYPE%_hand_player_statistics as S, lookup_positions l \
				WHERE	S.id_player = P.id_player AND \
					NOT S.flg_hero AND \
						S.cnt_players between " MIN_PLAYERS_AT_TABLE " AND " MAX_PLAYERS_AT_TABLE " AND \
					S.id_gametype = %GAMETYPE% AND \
					P.id_site = %SITEID% AND \
					REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%' AND \
					S.position = l.position AND \
					S.cnt_players = l.cnt_players) foo",
					// stat_group
					pt_group_positional
	},
#endif

#if PT4_QUERY_SUPPORT__PREFLOP_4B_VS_RESTEAL
	// PT4 query to get 4b vs. Resteal 
	{
		PT4_QUERY_SUPPORT__PREFLOP_4B_VS_RESTEAL,
		// name
		{ "preflop_4bet_vs_resteal_co", "preflop_4bet_vs_resteal_bt", "preflop_4bet_vs_resteal_sb" },
		// description_for_editor
		{ "Poker Tracker 4bet vs. resteal as cut off", "Poker Tracker 4bet vs. resteal as button" , "Poker Tracker 4bet vs. resteal as small blind" },
		// query
		"SELECT (case when ActionOpportunities1 = 0 then -1 \
				else cast(ActionCount1 as real) / ActionOpportunities1 \
				end) as result1, ActionOpportunities1, \
				(case when ActionOpportunities2 = 0 then -1 \
				else cast(ActionCount2 as real) / ActionOpportunities2 \
				end) as result2, ActionOpportunities2, \
				(case when ActionOpportunities3 = 0 then -1 \
				else cast(ActionCount3 as real) / ActionOpportunities3 \
				end) as result3, ActionOpportunities3 \
		FROM	(SELECT	sum(case when(l.absolute_position in(1) AND s.flg_steal_att AND s.flg_p_3bet_def_opp AND s.enum_p_3bet_action='R') then  1 else  0 end) \
						as ActionCount1, \
						sum((case when(l.absolute_position in(1) AND s.flg_steal_att AND s.flg_p_3bet_def_opp ) then  1 else  0 end)) \
						as ActionOpportunities1, \
						sum(case when(l.absolute_position in(0) AND s.flg_steal_att AND s.flg_p_3bet_def_opp AND s.enum_p_3bet_action = 'R') then  1 else  0 end) \
						as ActionCount2, \
						sum((case when(l.absolute_position in(0) AND s.flg_steal_att AND s.flg_p_3bet_def_opp) then  1 else  0 end)) \
						as ActionOpportunities2, \
						sum(case when(l.absolute_position in(9) AND s.flg_steal_att AND s.flg_p_3bet_def_opp AND s.enum_p_3bet_action='R') then  1 else  0 end) \
						as ActionCount3, \
						sum((case when(l.absolute_position in(9) AND s.flg_steal_att AND s.flg_p_3bet_def_opp ) then  1 else  0 end)) \
						as ActionOpportunities3 \
				FROM	player as P, %TYPE%_hand_player_statistics as S, lookup_positions l \
				WHERE	S.id_player = P.id_player AND \
					NOT S.flg_hero AND \
						S.cnt_players between " MIN_PLAYERS_AT_TABLE " AND " MAX_PLAYERS_AT_TABLE " AND \
					S.id_gametype = %GAMETYPE% AND \
					P.id_site = %SITEID% AND \
					REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%' AND \
					S.position = l.position AND \
					S.cnt_players = l.cnt_players) foo",
					// stat_group
					pt_group_positional
	},
#endif

#if PT4_QUERY_SUPPORT__PREFLOP_CALLED_ANY_RAISE
	// PT4 query to get pre-flop called raise 
	{
		// name
		"preflop_called_raise",		
		// description_for_editor
		"Poker Tracker pre-flop called raise",
		// query
		"SELECT (case when ActionOpportunities = 0 then -1 \
				 else cast(ActionCount as real) / ActionOpportunities \
				 end) as result, ActionOpportunities \
		 FROM	(SELECT	sum(case when ((s.amt_p_2bet_facing > 0 AND NOT(s.flg_p_limp) AND NOT s.flg_p_3bet_def_opp AND NOT flg_p_4bet_def_opp AND cnt_p_call>0) or \
						(s.enum_p_3bet_action='C') or (s.enum_p_4bet_action='C')) then 1 else 0 end) \
						 as ActionCount, \
						sum(case when s.flg_p_3bet_def_opp or s.flg_p_4bet_def_opp or s.amt_p_2bet_facing > 0 then 1 else 0 end) \
						 as ActionOpportunities \
				 FROM	player as P, %TYPE%_hand_player_statistics as S \
				 WHERE	S.id_player = P.id_player AND \
						NOT S.flg_hero AND \
						S.cnt_players between " MIN_PLAYERS_AT_TABLE " AND " MAX_PLAYERS_AT_TABLE " AND \
				 		S.flg_p_face_raise AND \
						S.id_gametype = %GAMETYPE% AND \
						P.id_site = %SITEID% AND \
						REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%') foo",
		// stat_group
		pt_group_advanced
	},
#endif

#if PT4_QUERY_SUPPORT__PREFLOP_FIRST_RAISER
		// PT4 query to get pre-flop first raiser 
	{
		PT4_QUERY_SUPPORT__PREFLOP_FIRST_RAISER,
		// name
		{ "preflop_first_raiser_ep", "preflop_first_raiser_mp", "preflop_first_raiser_lp", "preflop_first_raiser_bp" },
		// description_for_editor
		{ "Poker Tracker pre-flop first raiser EP","Poker Tracker pre-flop first raiser MP","Poker Tracker pre-flop first raiser LP","Poker Tracker pre-flop first raiser BP" },
		// query
		"SELECT (case	when ActionOpportunities1 = 0 then -1 \
				else cast(ActionCount1 as real) / ActionOpportunities1 \
				end) as result1, ActionOpportunities1, \
				(case	when ActionOpportunities2 = 0 then - 1 \
				else cast(ActionCount2 as real) / ActionOpportunities2 \
				end) as result2, ActionOpportunities2, \
				(case	when ActionOpportunities3 = 0 then - 1 \
				else cast(ActionCount3 as real) / ActionOpportunities3 \
				end) as result3, ActionOpportunities3, \
				(case	when ActionOpportunities4 = 0 then - 1 \
				else cast(ActionCount4 as real) / ActionOpportunities4 \
				end) as result4, ActionOpportunities4 \
			FROM(SELECT	sum(case when l.absolute_position in(" EARLYPOSITIONS ") AND NOT flg_p_face_raise AND s.flg_p_first_raise then 1 else 0 end) \
						as ActionCount1, \
						sum(case when l.absolute_position in(" EARLYPOSITIONS ") AND NOT flg_p_face_raise then 1 else 0 end) \
						as ActionOpportunities1, \
						sum(case when l.absolute_position in(" MIDDLEPOSITIONS ") AND NOT flg_p_face_raise AND s.flg_p_first_raise then 1 else 0 end) \
						as ActionCount2, \
						sum(case when l.absolute_position in(" MIDDLEPOSITIONS ") AND NOT flg_p_face_raise then 1 else 0 end) \
						as ActionOpportunities2, \
						sum(case when l.absolute_position in(" LATEPOSITIONS ") AND NOT flg_p_face_raise AND s.flg_p_first_raise then 1 else 0 end) \
						as ActionCount3, \
						sum(case when l.absolute_position in(" LATEPOSITIONS ") AND NOT flg_p_face_raise then 1 else 0 end) \
						as ActionOpportunities3, \
						sum(case when l.absolute_position in(" BLINDPOSITIONS ") AND NOT flg_p_face_raise AND s.flg_p_first_raise then 1 else 0 end) \
						as ActionCount4, \
						sum(case when l.absolute_position in(" BLINDPOSITIONS ") AND NOT flg_p_face_raise then 1 else 0 end) \
						as ActionOpportunities4 \
				FROM	player as P, %TYPE%_hand_player_statistics as S, lookup_positions l \
				WHERE	S.id_player = P.id_player AND \
					NOT S.flg_hero AND \
						S.cnt_players between " MIN_PLAYERS_AT_TABLE " AND " MAX_PLAYERS_AT_TABLE " AND \
					S.id_gametype = %GAMETYPE% AND \
					P.id_site = %SITEID% AND \
					REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%' AND \
					S.position = l.position AND \
					S.cnt_players = l.cnt_players) foo",
		// stat_group
		pt_group_advanced
	},
#endif

#if PT4_QUERY_SUPPORT__PREFLOP_FOLD_TO_RAISE
		// PT4 query to get pre-flop called raise 
	{
		PT4_QUERY_SUPPORT__PREFLOP_FOLD_TO_RAISE,
		// name
		{"preflop_fold_to_raise_ep","preflop_fold_to_raise_mp" ,"preflop_fold_to_raise_lp" ,"preflop_fold_to_raise_bp" },
		// description_for_editor
		{"Poker Tracker pre-flop fold to raise EP", "Poker Tracker pre-flop fold to raise MP" , "Poker Tracker pre-flop fold to raise LP" , "Poker Tracker pre-flop fold to raise BP" },
		// query
		"SELECT (case	when ActionOpportunities1 = 0 then -1 \
				else cast(ActionCount1 as real) / ActionOpportunities1 \
				end) as result1, ActionOpportunities1, \
				(case	when ActionOpportunities2 = 0 then - 1 \
				else cast(ActionCount2 as real) / ActionOpportunities2 \
				end) as result2, ActionOpportunities2, \
				(case	when ActionOpportunities3 = 0 then - 1 \
				else cast(ActionCount3 as real) / ActionOpportunities3 \
				end) as result3, ActionOpportunities3, \
				(case	when ActionOpportunities4 = 0 then - 1 \
				else cast(ActionCount4 as real) / ActionOpportunities4 \
				end) as result4, ActionOpportunities4 \
			FROM(SELECT	sum(case when l.absolute_position in(" EARLYPOSITIONS ") AND cnt_p_call = 0 AND cnt_p_raise = 0 then 1 else 0 end) \
						as ActionCount1, \
						sum(case when l.absolute_position in(" EARLYPOSITIONS ") then 1 else 0 end) \
						as ActionOpportunities1, \
						sum(case when l.absolute_position in(" MIDDLEPOSITIONS ") AND cnt_p_call = 0 AND cnt_p_raise = 0 then 1 else 0 end) \
						as ActionCount2, \
						sum(case when l.absolute_position in(" MIDDLEPOSITIONS ") then 1 else 0 end) \
						as ActionOpportunities2, \
						sum(case when l.absolute_position in(" LATEPOSITIONS ") AND cnt_p_call = 0 AND cnt_p_raise = 0 then 1 else 0 end) \
						as ActionCount3, \
						sum(case when l.absolute_position in(" LATEPOSITIONS ") then 1 else 0 end) \
						as ActionOpportunities3, \
						sum(case when l.absolute_position in(" BLINDPOSITIONS ") AND cnt_p_call = 0 AND cnt_p_raise = 0 then 1 else 0 end) \
						as ActionCount4, \
						sum(case when l.absolute_position in(" BLINDPOSITIONS ") then 1 else 0 end) \
						as ActionOpportunities4 \
				FROM	player as P, %TYPE%_hand_player_statistics as S, lookup_positions l \
				WHERE	S.id_player = P.id_player AND \
					NOT S.flg_hero AND \
						S.cnt_players between " MIN_PLAYERS_AT_TABLE " AND " MAX_PLAYERS_AT_TABLE " AND \
					S.id_gametype = %GAMETYPE% AND \
					P.id_site = %SITEID% AND \
					REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%' AND \
					S.position = l.position AND \
					S.cnt_players = l.cnt_players AND \
					flg_p_face_raise AND s.amt_p_2bet_facing > 0 AND NOT(s.flg_p_limp) AND NOT s.flg_p_3bet_def_opp AND NOT flg_p_4bet_def_opp) foo",
		// stat_group
		pt_group_advanced
	},
#endif

#if PT4_QUERY_SUPPORT__PREFLOP_LIMP
		// PT4 query to get pre-flop called raise 
	{
		PT4_QUERY_SUPPORT__PREFLOP_LIMP,
		// name
		{ "preflop_limp_ep","preflop_limp_mp" ,"preflop_limp_lp" ,"preflop_limp_bp" },
			// description_for_editor
		{ "Poker Tracker pre-flop limp EP", "Poker Tracker pre-flop limp MP" , "Poker Tracker pre-flop limp LP" , "Poker Tracker pre-flop limp BP" },
		// query
		"SELECT (case	when ActionOpportunities1 = 0 then -1 \
				else cast(ActionCount1 as real) / ActionOpportunities1 \
				end) as result1, ActionOpportunities1, \
				(case	when ActionOpportunities2 = 0 then - 1 \
				else cast(ActionCount2 as real) / ActionOpportunities2 \
				end) as result2, ActionOpportunities2, \
				(case	when ActionOpportunities3 = 0 then - 1 \
				else cast(ActionCount3 as real) / ActionOpportunities3 \
				end) as result3, ActionOpportunities3, \
				(case	when ActionOpportunities4 = 0 then - 1 \
				else cast(ActionCount4 as real) / ActionOpportunities4 \
				end) as result4, ActionOpportunities4 \
			FROM(SELECT	sum(case when l.absolute_position in(" EARLYPOSITIONS ") AND flg_p_limp then 1 else 0 end) \
						as ActionCount1, \
						sum(case when l.absolute_position in(" EARLYPOSITIONS ") then 1 else 0 end) \
						as ActionOpportunities1, \
						sum(case when l.absolute_position in(" MIDDLEPOSITIONS ") AND flg_p_limp then 1 else 0 end) \
						as ActionCount2, \
						sum(case when l.absolute_position in(" MIDDLEPOSITIONS ") then 1 else 0 end) \
						as ActionOpportunities2, \
						sum(case when l.absolute_position in(" LATEPOSITIONS ") AND flg_p_limp then 1 else 0 end) \
						as ActionCount3, \
						sum(case when l.absolute_position in(" LATEPOSITIONS ") then 1 else 0 end) \
						as ActionOpportunities3, \
						sum(case when l.absolute_position in(" BLINDPOSITIONS ") AND flg_p_limp then 1 else 0 end) \
						as ActionCount4, \
						sum(case when l.absolute_position in(" BLINDPOSITIONS ") then 1 else 0 end) \
						as ActionOpportunities4 \
				FROM	player as P, %TYPE%_hand_player_statistics as S, lookup_positions l \
				WHERE	S.id_player = P.id_player AND \
					NOT S.flg_hero AND \
						S.cnt_players between " MIN_PLAYERS_AT_TABLE " AND " MAX_PLAYERS_AT_TABLE " AND \
					S.id_gametype = %GAMETYPE% AND \
					P.id_site = %SITEID% AND \
					REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%' AND \
					S.position = l.position AND \
					S.cnt_players = l.cnt_players AND \
					NOT flg_p_face_raise) foo",
		// stat_group
		pt_group_advanced
	},
#endif

#if PT4_QUERY_SUPPORT__PREFLOP_LIMP_FOLD
	// PT4 query to get limped then fold
	{
		PT4_QUERY_SUPPORT__PREFLOP_LIMP_FOLD,
		// name
		{ "preflop_limp_fold_ep","preflop_limp_fold_mp" ,"preflop_limp_fold_lp" ,"preflop_limp_fold_bp" },
		// description_for_editor
		{ "Poker Tracker pre-flop limp then fold EP", "Poker Tracker pre-flop limp then fold MP" , "Poker Tracker pre-flop limp then fold LP" , "Poker Tracker pre-flop limp then fold BP" },
		// query
		"SELECT (case	when ActionOpportunities1 = 0 then -1 \
				else cast(ActionCount1 as real) / ActionOpportunities1 \
				end) as result1, ActionOpportunities1, \
				(case	when ActionOpportunities2 = 0 then - 1 \
				else cast(ActionCount2 as real) / ActionOpportunities2 \
				end) as result2, ActionOpportunities2, \
				(case	when ActionOpportunities3 = 0 then - 1 \
				else cast(ActionCount3 as real) / ActionOpportunities3 \
				end) as result3, ActionOpportunities3, \
				(case	when ActionOpportunities4 = 0 then - 1 \
				else cast(ActionCount4 as real) / ActionOpportunities4 \
				end) as result4, ActionOpportunities4 \
			FROM(SELECT	sum(case when l.absolute_position in(" EARLYPOSITIONS ") AND cnt_p_call = 1 AND cnt_p_raise = 0 then 1 else 0 end) \
						as ActionCount1, \
						sum(case when l.absolute_position in(" EARLYPOSITIONS ") then 1 else 0 end) \
						as ActionOpportunities1, \
						sum(case when l.absolute_position in(" MIDDLEPOSITIONS ") AND cnt_p_call = 1 AND cnt_p_raise = 0 then 1 else 0 end) \
						as ActionCount2, \
						sum(case when l.absolute_position in(" MIDDLEPOSITIONS ") then 1 else 0 end) \
						as ActionOpportunities2, \
						sum(case when l.absolute_position in(" LATEPOSITIONS ") AND cnt_p_call = 1 AND cnt_p_raise = 0 then 1 else 0 end) \
						as ActionCount3, \
						sum(case when l.absolute_position in(" LATEPOSITIONS ") then 1 else 0 end) \
						as ActionOpportunities3, \
						sum(case when l.absolute_position in(" BLINDPOSITIONS ") AND cnt_p_call = 1 AND cnt_p_raise = 0 then 1 else 0 end) \
						as ActionCount4, \
						sum(case when l.absolute_position in(" BLINDPOSITIONS ") then 1 else 0 end) \
						as ActionOpportunities4 \
				FROM	player as P, %TYPE%_hand_player_statistics as S, lookup_positions l \
				WHERE	S.id_player = P.id_player AND \
					NOT S.flg_hero AND \
						S.cnt_players between " MIN_PLAYERS_AT_TABLE " AND " MAX_PLAYERS_AT_TABLE " AND \
					S.id_gametype = %GAMETYPE% AND \
					P.id_site = %SITEID% AND \
					REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%' AND \
					S.position = l.position AND \
					S.cnt_players = l.cnt_players AND \
					flg_p_face_raise AND flg_p_limp) foo",
		// stat_group
		pt_group_advanced
	},
#endif

#if PT4_QUERY_SUPPORT__PREFLOP_LIMP_3B
			// PT4 query to get pre-flop called raise 
		{
			PT4_QUERY_SUPPORT__PREFLOP_LIMP_3B,
			// name
			{ "preflop_limp_3bet_op","preflop_limp_3bet_ip" },
			// description_for_editor
			{ "Poker Tracker pre-flop limp then 3bet OP", "Poker Tracker pre-flop limp then 3bet IP" },
			// query
			"SELECT (case	when ActionOpportunities1 = 0 then -1 \
				else cast(ActionCount1 as real) / ActionOpportunities1 \
				end) as result1, ActionOpportunities1, \
				(case	when ActionOpportunities2 = 0 then - 1 \
				else cast(ActionCount2 as real) / ActionOpportunities2 \
				end) as result2, ActionOpportunities2 \
			FROM(SELECT	sum(case when S.position > S.val_p_raise_aggressor_pos AND flg_p_3bet then 1 else 0 end) \
						as ActionCount1, \
						sum(case when S.position > S.val_p_raise_aggressor_pos AND flg_p_3bet_opp then 1 else 0 end) \
						as ActionOpportunities1, \
						sum(case when S.position < S.val_p_raise_aggressor_pos AND flg_p_3bet then 1 else 0 end) \
						as ActionCount2, \
						sum(case when S.position < S.val_p_raise_aggressor_pos AND flg_p_3bet_opp then 1 else 0 end) \
						as ActionOpportunities2 \
				FROM	player as P, %TYPE%_hand_player_statistics as S, lookup_positions l \
				WHERE	S.id_player = P.id_player AND \
					NOT S.flg_hero AND \
						S.cnt_players between " MIN_PLAYERS_AT_TABLE " AND " MAX_PLAYERS_AT_TABLE " AND \
					S.id_gametype = %GAMETYPE% AND \
					P.id_site = %SITEID% AND \
					REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%' AND \
					S.position = l.position AND \
					S.cnt_players = l.cnt_players AND \
					flg_p_face_raise AND flg_p_limp) foo",
			// stat_group
			pt_group_advanced
		},
#endif

#if PT4_QUERY_SUPPORT__PREFLOP_3B
	// PT4  query to get PREFLOP 3 bet 
	{
		PT4_QUERY_SUPPORT__PREFLOP_3B,
		// name
		{ "preflop_3bet_op","preflop_3bet_ip"},
			// description_for_editor
		{ "Poker Tracker pre-flop 3bet OP", "Poker Tracker pre-flop 3bet IP" },
			// query
			"SELECT (case	when ActionOpportunities1 = 0 then -1 \
				else cast(ActionCount1 as real) / ActionOpportunities1 \
				end) as result1, ActionOpportunities1, \
				(case	when ActionOpportunities2 = 0 then - 1 \
				else cast(ActionCount2 as real) / ActionOpportunities2 \
				end) as result2, ActionOpportunities2 \
			FROM(SELECT	sum(case when S.position > S.val_p_raise_aggressor_pos AND flg_p_3bet then 1 else 0 end) \
						as ActionCount1, \
						sum(case when S.position > S.val_p_raise_aggressor_pos AND flg_p_3bet_opp then 1 else 0 end) \
						as ActionOpportunities1, \
						sum(case when S.position < S.val_p_raise_aggressor_pos AND flg_p_3bet then 1 else 0 end) \
						as ActionCount2, \
						sum(case when S.position < S.val_p_raise_aggressor_pos AND flg_p_3bet_opp then 1 else 0 end) \
						as ActionOpportunities2 \
				FROM	player as P, %TYPE%_hand_player_statistics as S, lookup_positions l \
				WHERE	S.id_player = P.id_player AND \
					NOT S.flg_hero AND \
						S.cnt_players between " MIN_PLAYERS_AT_TABLE " AND " MAX_PLAYERS_AT_TABLE " AND \
					S.id_gametype = %GAMETYPE% AND \
					P.id_site = %SITEID% AND \
					REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%' AND \
					S.position = l.position AND \
					S.cnt_players = l.cnt_players AND \
					flg_p_face_raise AND NOT flg_p_limp) foo",
		// stat_group
		pt_group_advanced
	},
#endif

#if PT4_QUERY_SUPPORT__PREFLOP_FOLD_TO_3B
	// PT4  query to get PREFLOP fold to 3 bet 
	{
		PT4_QUERY_SUPPORT__PREFLOP_FOLD_TO_3B,
		// name
		{ "preflop_fold_to_3bet_op","preflop_fold_to_3bet_ip" },
				// description_for_editor
		{ "Poker Tracker pre-flop fold to 3bet OP", "Poker Tracker pre-flop fold to 3bet IP" },
				// query
				"SELECT (case	when ActionOpportunities1 = 0 then -1 \
				else cast(ActionCount1 as real) / ActionOpportunities1 \
				end) as result1, ActionOpportunities1, \
				(case	when ActionOpportunities2 = 0 then - 1 \
				else cast(ActionCount2 as real) / ActionOpportunities2 \
				end) as result2, ActionOpportunities2 \
			FROM(SELECT	sum(case when S.position > S.val_p_raise_aggressor_pos AND s.enum_p_3bet_action='F' then 1 else 0 end) \
						as ActionCount1, \
						sum(case when S.position > S.val_p_raise_aggressor_pos AND s.flg_p_3bet_def_opp then 1 else 0 end) \
						as ActionOpportunities1, \
						sum(case when S.position < S.val_p_raise_aggressor_pos AND s.enum_p_3bet_action='F' then 1 else 0 end) \
						as ActionCount2, \
						sum(case when S.position < S.val_p_raise_aggressor_pos AND s.flg_p_3bet_def_opp then 1 else 0 end) \
						as ActionOpportunities2 \
				FROM	player as P, %TYPE%_hand_player_statistics as S \
				WHERE	S.id_player = P.id_player AND \
						NOT S.flg_hero AND \
						S.cnt_players between " MIN_PLAYERS_AT_TABLE " AND " MAX_PLAYERS_AT_TABLE " AND \
						S.id_gametype = %GAMETYPE% AND \
						P.id_site = %SITEID% AND \
						REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%' AND \
						S.flg_p_first_raise) foo",
		// stat_group
		pt_group_advanced
	},
#endif

#if PT4_QUERY_SUPPORT__PREFLOP_4B
	// PT4 query to get Preflop 4B 
	{
		PT4_QUERY_SUPPORT__PREFLOP_4B,
		// name
		{ "preflop_4bet_op","preflop_4bet_ip" },
		// description_for_editor
		{ "Poker Tracker pre-flop 4bet OP", "Poker Tracker pre-flop 4bet IP" },
		// query
			"SELECT (case	when ActionOpportunities1 = 0 then -1 \
				else cast(ActionCount1 as real) / ActionOpportunities1 \
				end) as result1, ActionOpportunities1, \
				(case	when ActionOpportunities2 = 0 then - 1 \
				else cast(ActionCount2 as real) / ActionOpportunities2 \
				end) as result2, ActionOpportunities2 \
			FROM(SELECT	sum(case when S.position > S.val_p_raise_aggressor_pos AND flg_p_4bet then 1 else 0 end) \
						as ActionCount1, \
						sum(case when S.position > S.val_p_raise_aggressor_pos AND flg_p_4bet_opp then 1 else 0 end) \
						as ActionOpportunities1, \
						sum(case when S.position < S.val_p_raise_aggressor_pos AND flg_p_4bet then 1 else 0 end) \
						as ActionCount2, \
						sum(case when S.position < S.val_p_raise_aggressor_pos AND flg_p_4bet_opp then 1 else 0 end) \
						as ActionOpportunities2 \
				FROM	player as P, %TYPE%_hand_player_statistics as S, lookup_positions l \
				WHERE	S.id_player = P.id_player AND \
					NOT S.flg_hero AND \
						S.cnt_players between " MIN_PLAYERS_AT_TABLE " AND " MAX_PLAYERS_AT_TABLE " AND \
					S.id_gametype = %GAMETYPE% AND \
					P.id_site = %SITEID% AND \
					REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%' AND \
					S.position = l.position AND \
					S.cnt_players = l.cnt_players AND \
					flg_p_face_raise) foo",
		// stat_group
		pt_group_advanced
	},
#endif



#if PT4_QUERY_SUPPORT__PREFLOP_FOLD_TO_4B
			// PT4  query to get PREFLOP fold to 4 bet 
		{
			PT4_QUERY_SUPPORT__PREFLOP_FOLD_TO_4B,
			// name
			{ "preflop_fold_to_4bet_op","preflop_fold_to_4bet_ip" },
			// description_for_editor
			{ "Poker Tracker pre-flop fold to 4bet OP", "Poker Tracker pre-flop fold to 4bet IP" },
			// query
			"SELECT (case	when ActionOpportunities1 = 0 then -1 \
				else cast(ActionCount1 as real) / ActionOpportunities1 \
				end) as result1, ActionOpportunities1, \
				(case	when ActionOpportunities2 = 0 then - 1 \
				else cast(ActionCount2 as real) / ActionOpportunities2 \
				end) as result2, ActionOpportunities2 \
			FROM(SELECT	sum(case when S.position > S.val_p_raise_aggressor_pos AND s.enum_p_4bet_action='F' then 1 else 0 end) \
						as ActionCount1, \
						sum(case when S.position > S.val_p_raise_aggressor_pos AND s.flg_p_4bet_def_opp then 1 else 0 end) \
						as ActionOpportunities1, \
						sum(case when S.position < S.val_p_raise_aggressor_pos AND s.enum_p_4bet_action='F' then 1 else 0 end) \
						as ActionCount2, \
						sum(case when S.position < S.val_p_raise_aggressor_pos AND s.flg_p_4bet_def_opp then 1 else 0 end) \
						as ActionOpportunities2 \
				FROM	player as P, %TYPE%_hand_player_statistics as S \
				WHERE	S.id_player = P.id_player AND \
						NOT S.flg_hero AND \
						S.cnt_players between " MIN_PLAYERS_AT_TABLE " AND " MAX_PLAYERS_AT_TABLE " AND \
						S.id_gametype = %GAMETYPE% AND \
						P.id_site = %SITEID% AND \
						REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%' AND \
						S.flg_p_first_raise) foo",
			// stat_group
			pt_group_advanced
		},
#endif

#if PT4_QUERY_SUPPORT__PREFLOP_5B
			// PT4 query to get Preflop 5B 
		{
			PT4_QUERY_SUPPORT__PREFLOP_5B,
			// name
			{ "preflop_5bet_op","preflop_5bet_ip" },
			// description_for_editor
			{ "Poker Tracker pre-flop 5bet OP", "Poker Tracker pre-flop 5bet IP" },
			// query
			"SELECT (case	when ActionOpportunities1 = 0 then -1 \
				else cast(ActionCount1 as real) / ActionOpportunities1 \
				end) as result1, ActionOpportunities1, \
				(case	when ActionOpportunities2 = 0 then - 1 \
				else cast(ActionCount2 as real) / ActionOpportunities2 \
				end) as result2, ActionOpportunities2 \
			FROM(SELECT	sum(case when S.position > S.val_p_raise_aggressor_pos AND enum_p_4bet_action = 'R' then 1 else 0 end) \
						as ActionCount1, \
						sum(case when S.position > S.val_p_raise_aggressor_pos AND amt_p_4bet_facing > 0 then 1 else 0 end) \
						as ActionOpportunities1, \
						sum(case when S.position < S.val_p_raise_aggressor_pos AND enum_p_4bet_action = 'R' then 1 else 0 end) \
						as ActionCount2, \
						sum(case when S.position < S.val_p_raise_aggressor_pos AND amt_p_4bet_facing > 0 then 1 else 0 end) \
						as ActionOpportunities2 \
				FROM	player as P, %TYPE%_hand_player_statistics as S, lookup_positions l \
				WHERE	S.id_player = P.id_player AND \
					NOT S.flg_hero AND \
						S.cnt_players between " MIN_PLAYERS_AT_TABLE " AND " MAX_PLAYERS_AT_TABLE " AND \
					S.id_gametype = %GAMETYPE% AND \
					P.id_site = %SITEID% AND \
					REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%' AND \
					S.position = l.position AND \
					S.cnt_players = l.cnt_players AND \
					flg_p_face_raise) foo",
			// stat_group
			pt_group_advanced
		},
#endif

#if PT4_QUERY_SUPPORT__AGGRESSION_FACTOR
	// PT4 query to get flop aggression factor 
	{
		PT4_QUERY_SUPPORT__AGGRESSION_FACTOR,
		// name
		{"flop_af", "turn_af", "river_af", "total_af" },
		// description_for_editor
		{"Poker Tracker flop aggression", "Poker Tracker turn aggression", "Poker Tracker river aggression", "Poker Tracker total aggression" },
		// query
		"SELECT (case when CallsCount1 = 0 then -1 \
				 else cast(AggressionCount1 as real) / CallsCount1 \
				 end) as result1, AggressionCount1+CallsCount1, \
				(case when CallsCount2 = 0 then -1 \
				 else cast(AggressionCount2 as real) / CallsCount2 \
				 end) as result2, AggressionCount2+CallsCount2, \
				(case when CallsCount3 = 0 then -1 \
				 else cast(AggressionCount3 as real) / CallsCount3 \
				 end) as result3, AggressionCount3+CallsCount3, \
				(case when CallsCount4 = 0 then -1 \
				 else cast(AggressionCount4 as real) / CallsCount4 \
				 end) as result4, AggressionCount4+CallsCount4 \
		 FROM	(SELECT	sum(S.cnt_f_raise) + sum(case when S.flg_f_bet then 1 else 0 end) \
						 as AggressionCount1, \
						sum(S.cnt_f_call) \
						 as CallsCount1, \
						sum(S.cnt_t_raise) + sum(case when S.flg_t_bet then 1 else 0 end) \
						 as AggressionCount2, \
						sum(S.cnt_t_call) \
						 as CallsCount2, \
						sum(S.cnt_r_raise) + sum(case when S.flg_r_bet then 1 else 0 end) \
						 as AggressionCount3, \
						sum(S.cnt_r_call) \
						 as CallsCount3, \
						sum(cnt_f_raise) + sum(case when flg_f_bet then 1 else 0 end) \
					   + sum(cnt_t_raise) + sum(case when flg_t_bet then 1 else 0 end) \
                       + sum(cnt_r_raise) + sum(case when flg_r_bet then 1 else 0 end) \
						  as AggressionCount4, \
						 sum(cnt_f_call) \
                       + sum(cnt_t_call) \
                       + sum(cnt_r_call) \
						  as CallsCount4 \
				 FROM	player as P, %TYPE%_hand_player_statistics as S \
				 WHERE	S.id_player = P.id_player AND \
						NOT S.flg_hero AND \
						S.cnt_players between " MIN_PLAYERS_AT_TABLE " AND " MAX_PLAYERS_AT_TABLE " AND \
						S.id_gametype = %GAMETYPE% AND \
						P.id_site = %SITEID% AND \
						REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%') foo",
		// stat_group
		pt_group_advanced
	},
#endif

#if PT4_QUERY_SUPPORT__AGGRESSION_FREQUENCY
	// PT4 query to get flop aggression factor 
	{
		PT4_QUERY_SUPPORT__AGGRESSION_FREQUENCY,
		// name
		{ "preflop_afq", "flop_afq", "turn_afq", "river_afq", "total_afq" },
		// description_for_editor
		{ "Poker Tracker preflop aggression frequency", "Poker Tracker flop aggression frequency", "Poker Tracker turn aggression frequency", "Poker Tracker river aggression frequency", "Poker Tracker total aggression frequency" },
		// query
		"SELECT (case when (AggressionCount1 + PassiveCount1) = 0 then -1 \
				else cast(AggressionCount1 as real) / (AggressionCount1 + PassiveCount1) \
				end) as result1, AggressionCount1 + PassiveCount1, \
				(case when (AggressionCount2 + PassiveCount2) = 0 then -1 \
				else cast(AggressionCount2 as real) / (AggressionCount2 + PassiveCount2) \
				end) as result2, AggressionCount2 + PassiveCount2, \
				(case when(AggressionCount3 + PassiveCount3) = 0 then - 1 \
				else cast(AggressionCount3 as real) / (AggressionCount3 + PassiveCount3) \
				end) as result3, AggressionCount3 + PassiveCount3, \
				(case when(AggressionCount4 + PassiveCount4) = 0 then - 1 \
				else cast(AggressionCount4 as real) / (AggressionCount4 + PassiveCount4) \
				end) as result4, AggressionCount4 + PassiveCount4, \
				(case when(AggressionCount5 + PassiveCount5) = 0 then - 1 \
				else cast(AggressionCount5 as real) / (AggressionCount5 + PassiveCount5) \
				end) as result5, AggressionCount5 + PassiveCount5 \
		 FROM	(SELECT	sum(case when flg_p_face_raise then cnt_p_raise else 0 end) \
						 as AggressionCount1, \
						sum(case when flg_p_face_raise then cnt_p_call else 0 end) \
						 as PassiveCount1, \
						sum(cnt_f_raise) + sum(case when flg_f_bet then 1 else 0 end) \
						 as AggressionCount2, \
						sum(cnt_f_call) + sum(case when flg_f_fold then 1 else 0 end) \
						 as PassiveCount2, \
						sum(cnt_t_raise) + sum(case when flg_t_bet then 1 else 0 end) \
						 as AggressionCount3, \
						sum(cnt_t_call) + sum(case when flg_t_fold then 1 else 0 end) \
						 as PassiveCount3, \
						sum(cnt_r_raise) + sum(case when flg_r_bet then 1 else 0 end) \
						 as AggressionCount4, \
						sum(cnt_r_call) + sum(case when flg_r_fold then 1 else 0 end) \
						 as PassiveCount4, \
						sum(cnt_f_raise) + sum(case when flg_f_bet then 1 else 0 end) \
						+ sum(cnt_t_raise) + sum(case when flg_t_bet then 1 else 0 end) \
						+ sum(cnt_r_raise) + sum(case when flg_r_bet then 1 else 0 end) \
						   as AggressionCount5, \
						  sum(cnt_f_call) + sum(case when flg_f_fold then 1 else 0 end) \
                        + sum(cnt_t_call) + sum(case when flg_t_fold then 1 else 0 end) \
                        + sum(cnt_r_call) + sum(case when flg_r_fold then 1 else 0 end) \
						   as PassiveCount5 \
				 FROM	player as P, %TYPE%_hand_player_statistics as S \
				 WHERE	S.id_player = P.id_player AND \
						NOT S.flg_hero AND \
						S.cnt_players between " MIN_PLAYERS_AT_TABLE " AND " MAX_PLAYERS_AT_TABLE " AND \
						S.id_gametype = %GAMETYPE% AND \
						P.id_site = %SITEID% AND \
						REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%') foo",
						// stat_group
						pt_group_advanced
	},
#endif

#if PT4_QUERY_SUPPORT__LAYDOWN_FREQUENCY
			// PT4 query to get flop laydown factor 
		{
			PT4_QUERY_SUPPORT__LAYDOWN_FREQUENCY,
			// name
			{ "preflop_lfq", "flop_lfq", "turn_lfq", "river_lfq", "total_lfq" },
			// description_for_editor
			{ "Poker Tracker preflop laydown frequency", "Poker Tracker flop laydown frequency", "Poker Tracker turn laydown frequency", "Poker Tracker river laydown frequency", "Poker Tracker total laydown frequency" },
			// query
			"SELECT (case when (LaydownCount1 + PlayCount1) = 0 then -1 \
				else cast(LaydownCount1 as real) / (LaydownCount1 + PlayCount1) \
				end) as result1, LaydownCount1 + PlayCount1, \
				(case when (LaydownCount2 + PlayCount2) = 0 then -1 \
				else cast(LaydownCount2 as real) / (LaydownCount2 + PlayCount2) \
				end) as result2, LaydownCount2 + PlayCount2, \
				(case when(LaydownCount3 + PlayCount3) = 0 then - 1 \
				else cast(LaydownCount3 as real) / (LaydownCount3 + PlayCount3) \
				end) as result3, LaydownCount3 + PlayCount3, \
				(case when(LaydownCount4 + PlayCount4) = 0 then - 1 \
				else cast(LaydownCount4 as real) / (LaydownCount4 + PlayCount4) \
				end) as result4, LaydownCount4 + PlayCount4, \
				(case when(LaydownCount5 + PlayCount5) = 0 then - 1 \
				else cast(LaydownCount5 as real) / (LaydownCount5 + PlayCount5) \
				end) as result5, LaydownCount5 + PlayCount5 \
		 FROM	(SELECT	sum(case when flg_p_face_raise and flg_f_fold then 1 else 0 end) \
						 as LaydownCount1, \
						sum(case when flg_p_face_raise then cnt_p_call + cnt_p_raise else 0 end) \
						 as PlayCount1, \
						sum(case when flg_f_fold then 1 else 0 end) \
						 as LaydownCount2, \
						sum(cnt_f_call) + sum(cnt_f_raise) \
						 as PlayCount2, \
						sum(case when flg_t_fold then 1 else 0 end) \
						 as LaydownCount3, \
						sum(cnt_t_call) + sum(cnt_t_raise) \
						 as PlayCount3, \
						sum(case when flg_r_fold then 1 else 0 end) \
						 as LaydownCount4, \
						sum(cnt_r_call) + sum(cnt_r_raise) \
						 as PlayCount4, \
						sum(case when flg_f_fold then 1 else 0 end) \
						+ sum(case when flg_t_fold then 1 else 0 end) \
						+ sum(case when flg_r_fold then 1 else 0 end) \
						   as LaydownCount5, \
						  sum(cnt_f_call) + sum(cnt_f_raise) \
                        + sum(cnt_t_call) + sum(cnt_t_raise) \
                        + sum(cnt_r_call) + sum(cnt_r_raise) \
						   as PlayCount5 \
				 FROM	player as P, %TYPE%_hand_player_statistics as S \
				 WHERE	S.id_player = P.id_player AND \
						NOT S.flg_hero AND \
						S.cnt_players between " MIN_PLAYERS_AT_TABLE " AND " MAX_PLAYERS_AT_TABLE " AND \
						S.id_gametype = %GAMETYPE% AND \
						P.id_site = %SITEID% AND \
						REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%') foo",
			// stat_group
			pt_group_advanced
		},
#endif

#if PT4_QUERY_SUPPORT__HERO_AGGRESSION_FREQUENCY
		// PT4 query to get hero flop aggression factor 
		{
			PT4_QUERY_SUPPORT__HERO_AGGRESSION_FREQUENCY,
			// name
			{ "preflop_hero_afq", "flop_hero_afq", "turn_hero_afq", "river_hero_afq", "total_hero_afq" },
			// description_for_editor
			{ "Poker Tracker preflop hero aggression frequency", "Poker Tracker flop hero aggression frequency", "Poker Tracker turn hero aggression frequency", "Poker Tracker river hero aggression frequency", "Poker Tracker total hero aggression frequency" },
			// query
			"SELECT (case when (AggressionCount1 + PassiveCount1) = 0 then -1 \
				else cast(AggressionCount1 as real) / (AggressionCount1 + PassiveCount1) \
				end) as result1, AggressionCount1 + PassiveCount1, \
				(case when (AggressionCount2 + PassiveCount2) = 0 then -1 \
				else cast(AggressionCount2 as real) / (AggressionCount2 + PassiveCount2) \
				end) as result2, AggressionCount2 + PassiveCount2, \
				(case when(AggressionCount3 + PassiveCount3) = 0 then - 1 \
				else cast(AggressionCount3 as real) / (AggressionCount3 + PassiveCount3) \
				end) as result3, AggressionCount3 + PassiveCount3, \
				(case when(AggressionCount4 + PassiveCount4) = 0 then - 1 \
				else cast(AggressionCount4 as real) / (AggressionCount4 + PassiveCount4) \
				end) as result4, AggressionCount4 + PassiveCount4, \
				(case when(AggressionCount5 + PassiveCount5) = 0 then - 1 \
				else cast(AggressionCount5 as real) / (AggressionCount5 + PassiveCount5) \
				end) as result5, AggressionCount5 + PassiveCount5 \
		 FROM	(SELECT	sum(case when S.flg_p_face_raise then S.cnt_p_raise else 0 end) \
						 as AggressionCount1, \
						sum(case when S.flg_p_face_raise then S.cnt_p_call else 0 end) \
						 as PassiveCount1, \
						sum(S.cnt_f_raise) + sum(case when S.flg_f_bet then 1 else 0 end) \
						 as AggressionCount2, \
						sum(S.cnt_f_call) + sum(case when S.flg_f_fold then 1 else 0 end) \
						 as PassiveCount2, \
						sum(S.cnt_t_raise) + sum(case when S.flg_t_bet then 1 else 0 end) \
						 as AggressionCount3, \
						sum(S.cnt_t_call) + sum(case when S.flg_t_fold then 1 else 0 end) \
						 as PassiveCount3, \
						sum(S.cnt_r_raise) + sum(case when S.flg_r_bet then 1 else 0 end) \
						 as AggressionCount4, \
						sum(S.cnt_r_call) + sum(case when S.flg_r_fold then 1 else 0 end) \
						 as PassiveCount4, \
						sum(S.cnt_f_raise) + sum(case when S.flg_f_bet then 1 else 0 end) \
						+ sum(S.cnt_t_raise) + sum(case when S.flg_t_bet then 1 else 0 end) \
						+ sum(S.cnt_r_raise) + sum(case when S.flg_r_bet then 1 else 0 end) \
						   as AggressionCount5, \
						  sum(S.cnt_f_call) + sum(case when S.flg_f_fold then 1 else 0 end) \
                        + sum(S.cnt_t_call) + sum(case when S.flg_t_fold then 1 else 0 end) \
                        + sum(S.cnt_r_call) + sum(case when S.flg_r_fold then 1 else 0 end) \
						   as PassiveCount5 \
				 FROM	player as P, %TYPE%_hand_player_statistics as S, %TYPE%_hand_player_statistics as H \
				 WHERE	H.id_player = P.id_player AND \
						S.flg_hero AND \
						S.id_hand = H.id_hand AND \
						NOT H.flg_hero AND \
						H.id_gametype = %GAMETYPE% AND \
						P.id_site = %SITEID% AND \
						REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%') foo",
						// stat_group
						pt_group_advanced
		},
#endif

#if PT4_QUERY_SUPPORT__HERO_LAYDOWN_FREQUENCY
		// PT4 query to get hero flop laydown factor 
		{
			PT4_QUERY_SUPPORT__HERO_LAYDOWN_FREQUENCY,
			// name
			{ "preflop_hero_lfq", "flop_hero_lfq", "turn_hero_lfq", "river_hero_lfq", "total_hero_lfq" },
			// description_for_editor
			{ "Poker Tracker preflop hero laydown frequency", "Poker Tracker flop hero laydown frequency", "Poker Tracker turn hero laydown frequency", "Poker Tracker river hero laydown frequency", "Poker Tracker total hero laydown frequency" },
			// query
			"SELECT (case when (LaydownCount1 + PlayCount1) = 0 then -1 \
				else cast(LaydownCount1 as real) / (LaydownCount1 + PlayCount1) \
				end) as result1, LaydownCount1 + PlayCount1, \
				(case when (LaydownCount2 + PlayCount2) = 0 then -1 \
				else cast(LaydownCount2 as real) / (LaydownCount2 + PlayCount2) \
				end) as result2, LaydownCount2 + PlayCount2, \
				(case when(LaydownCount3 + PlayCount3) = 0 then - 1 \
				else cast(LaydownCount3 as real) / (LaydownCount3 + PlayCount3) \
				end) as result3, LaydownCount3 + PlayCount3, \
				(case when(LaydownCount4 + PlayCount4) = 0 then - 1 \
				else cast(LaydownCount4 as real) / (LaydownCount4 + PlayCount4) \
				end) as result4, LaydownCount4 + PlayCount4, \
				(case when(LaydownCount5 + PlayCount5) = 0 then - 1 \
				else cast(LaydownCount5 as real) / (LaydownCount5 + PlayCount5) \
				end) as result5, LaydownCount5 + PlayCount5 \
		 FROM	(SELECT	sum(case when S.flg_p_face_raise and S.flg_f_fold then 1 else 0 end) \
						 as LaydownCount1, \
						sum(case when S.flg_p_face_raise then S.cnt_p_call + S.cnt_p_raise else 0 end) \
						 as PlayCount1, \
						sum(case when S.flg_f_fold then 1 else 0 end) \
						 as LaydownCount2, \
						sum(S.cnt_f_call) + sum(S.cnt_f_raise) \
						 as PlayCount2, \
						sum(case when S.flg_t_fold then 1 else 0 end) \
						 as LaydownCount3, \
						sum(S.cnt_t_call) + sum(S.cnt_t_raise) \
						 as PlayCount3, \
						sum(case when S.flg_r_fold then 1 else 0 end) \
						 as LaydownCount4, \
						sum(S.cnt_r_call) + sum(S.cnt_r_raise) \
						 as PlayCount4, \
						sum(case when S.flg_f_fold then 1 else 0 end) \
						+ sum(case when S.flg_t_fold then 1 else 0 end) \
						+ sum(case when S.flg_r_fold then 1 else 0 end) \
						   as LaydownCount5, \
						  sum(S.cnt_f_call) + sum(S.cnt_f_raise) \
                        + sum(S.cnt_t_call) + sum(S.cnt_t_raise) \
                        + sum(S.cnt_r_call) + sum(S.cnt_r_raise) \
						   as PlayCount5 \
				 FROM	player as P, %TYPE%_hand_player_statistics as S, %TYPE%_hand_player_statistics as H \
				 WHERE	H.id_player = P.id_player AND \
						S.flg_hero AND \
						S.id_hand = H.id_hand AND \
						NOT H.flg_hero AND \
						H.id_gametype = %GAMETYPE% AND \
						P.id_site = %SITEID% AND \
						REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%') foo",
						// stat_group
						pt_group_advanced
		},
#endif

#if PT4_QUERY_SUPPORT__SEEN_PCT
	// PT4 query to get street seen 
{
	PT4_QUERY_SUPPORT__SEEN_PCT,
	// name
	{"flop_seen", "turn_seen", "river_seen" },
	// description_for_editor
	{"Poker Tracker saw flop","Poker Tracker saw turn","Poker Tracker saw river" },
		// query
		"SELECT (case when ActionOpportunities1 = 0 then -1 \
				 else cast(ActionCount1 as real) / ActionOpportunities1 \
				 end) as result, ActionOpportunities1, \
				(case when ActionOpportunities2 = 0 then - 1 \
				 else cast(ActionCount2 as real) / ActionOpportunities2 \
				 end) as result2, ActionOpportunities2, \
				(case when ActionOpportunities3 = 0 then -1 \
				 else cast(ActionCount3 as real) / ActionOpportunities3 \
				 end) as result3, ActionOpportunities3 \
		 FROM	(SELECT	sum(case when flg_f_saw then 1 else 0 end) \
						 as ActionCount1, \
						count(*) \
						 as ActionOpportunities1, \
						sum(case when flg_t_saw then 1 else 0 end) \
						 as ActionCount2, \
						sum(case when flg_f_saw then 1 else 0 end) \
						 as ActionOpportunities2, \
						sum(case when flg_r_saw then 1 else 0 end) \
						 as ActionCount3, \
						sum(case when flg_t_saw then 1 else 0 end) \
						 as ActionOpportunities3 \
				 FROM	player as P, %TYPE%_hand_player_statistics as S \
				 WHERE	S.id_player = P.id_player AND \
						NOT S.flg_hero AND \
						S.cnt_players between " MIN_PLAYERS_AT_TABLE " AND " MAX_PLAYERS_AT_TABLE " AND \
						S.id_gametype = %GAMETYPE% AND \
						P.id_site = %SITEID% AND \
						REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%') foo",
		// stat_group
		pt_group_advanced
	},
#endif


				//
				// START B0
				//

#if PT4_QUERY_SUPPORT__FLOP_B0_BET
				// PT4  query to get cbet on FLOP 
	{
		PT4_QUERY_SUPPORT__FLOP_B0_BET,
		// name
		{ "flop_b0_bet_op", "flop_b0_bet_ip" },
		// description_for_editor
		{ "Poker Tracker flop b0 bet OP", "Poker Tracker flop b0 bet IP" },
		// query
		"SELECT (case when ActionOpportunities1 = 0 then -1 \
				 else cast(ActionCount1 as real) / ActionOpportunities1 \
				 end) as result1, ActionOpportunities1, \
				(case when ActionOpportunities2 = 0 then -1 \
				 else cast(ActionCount2 as real) / ActionOpportunities2 \
				 end) as result2, ActionOpportunities2 \
		 FROM	(SELECT	sum(case when flg_f_open_opp AND flg_f_first AND flg_f_bet then 1 else 0 end) \
						 as ActionCount1, \
						sum(case when flg_f_open_opp AND flg_f_first then 1 else 0 end) \
						 as ActionOpportunities1, \
						 sum(case when flg_f_open_opp AND flg_f_has_position AND flg_f_bet then 1 else 0 end) \
						 as ActionCount2, \
						 sum(case when flg_f_open_opp AND flg_f_has_position then 1 else 0 end) \
						 as ActionOpportunities2 \
				 FROM	player as P, %TYPE%_hand_player_statistics as S, lookup_actions l, %TYPE%_hand_summary H \
				 WHERE	S.id_player = P.id_player AND \
						H.id_hand = S.id_hand AND \
						length(H.str_aggressors_p) = 1 AND \
						H.cnt_players_f = 2 AND \
						NOT S.flg_hero AND \
						S.cnt_players between " MIN_PLAYERS_AT_TABLE " AND " MAX_PLAYERS_AT_TABLE " AND \
						S.id_gametype = %GAMETYPE% AND \
						P.id_site = %SITEID% AND \
						REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%' AND \
						S.id_action_p = l.id_action) foo",
				// stat_group
				pt_group_advanced
	},
#endif

#if PT4_QUERY_SUPPORT__FLOP_B0_FOLD_TO_BET
				// PT4  query to get FLOP fold to cbet 
	{
		PT4_QUERY_SUPPORT__FLOP_B0_FOLD_TO_BET,
		// name
		{ "flop_b0_fold_to_bet_op", "flop_b0_fold_to_bet_ip" },
		// description_for_editor
		{ "Poker Tracker flop b0 fold to bet OP","Poker Tracker flop b0 fold to bet IP" },
		// query
		"SELECT (case when ActionOpportunities1 = 0 then -1 \
				 else cast(ActionCount1 as real) / ActionOpportunities1 \
				 end) as result1, ActionOpportunities1, \
				(case when ActionOpportunities2 = 0 then -1 \
				 else cast(ActionCount2 as real) / ActionOpportunities2 \
				 end) as result2, ActionOpportunities2 \
		 FROM	(SELECT	sum(case when S.position > S.val_f_bet_aggressor_pos AND (m.action = 'XF' or m.action = 'F') then 1 else 0 end) \
						 as ActionCount1, \
						sum(case when S.position > S.val_f_bet_aggressor_pos then 1 else 0 end) \
						 as ActionOpportunities1, \
						 sum(case when S.position < S.val_f_bet_aggressor_pos AND (m.action = 'XF' or m.action = 'F') then 1 else 0 end) \
						 as ActionCount2, \
						 sum(case when S.position < S.val_f_bet_aggressor_pos then 1 else 0 end) \
						 as ActionOpportunities2 \
				 FROM	player as P, %TYPE%_hand_player_statistics as S, lookup_actions m, %TYPE%_hand_summary H \
				 WHERE	S.id_player = P.id_player AND \
						H.id_hand = S.id_hand AND \
						length(H.str_aggressors_p) = 1 AND \
						H.cnt_players_f = 2 AND \
						NOT S.flg_hero AND \
						S.cnt_players between " MIN_PLAYERS_AT_TABLE " AND " MAX_PLAYERS_AT_TABLE " AND \
						S.id_gametype = %GAMETYPE% AND \
						P.id_site = %SITEID% AND \
						REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%' AND \
						S.id_action_f = m.id_action AND \
						S.val_f_bet_aggressor_pos != -1 AND \
						S.amt_f_raise_facing = 0) foo",
				// stat_group
				pt_group_advanced
	},
#endif

#if PT4_QUERY_SUPPORT__FLOP_B0_RAISE_BET
				// PT4  query to get raise cbet on FLOP 
	{
		PT4_QUERY_SUPPORT__FLOP_B0_RAISE_BET,
		// name
		{ "flop_b0_raise_bet_op", "flop_b0_raise_bet_ip" },
		// description_for_editor
		{ "Poker Tracker flop b0 raise bet OP","Poker Tracker flop b0 raise bet IP" },
		// query
		"SELECT (case when ActionOpportunities1 = 0 then -1 \
				 else cast(ActionCount1 as real) / ActionOpportunities1 \
				 end) as result1, ActionOpportunities1, \
				(case when ActionOpportunities2 = 0 then -1 \
				 else cast(ActionCount2 as real) / ActionOpportunities2 \
				 end) as result2, ActionOpportunities2 \
		 FROM	(SELECT	sum(case when S.position > S.val_f_bet_aggressor_pos AND (substring(m.action from 1 for 1) = 'R' or substring(m.action from 1 for 2) = 'XR') then 1 else 0 end) \
						 as ActionCount1, \
						sum(case when S.position > S.val_f_bet_aggressor_pos then 1 else 0 end) \
						 as ActionOpportunities1, \
						 sum(case when S.position < S.val_f_bet_aggressor_pos AND (substring(m.action from 1 for 1) = 'R' or substring(m.action from 1 for 2) = 'XR') then 1 else 0 end) \
						 as ActionCount2, \
						 sum(case when S.position < S.val_f_bet_aggressor_pos then 1 else 0 end) \
						 as ActionOpportunities2 \
				 FROM	player as P, %TYPE%_hand_player_statistics as S, lookup_actions m, %TYPE%_hand_summary H \
				 WHERE	S.id_player = P.id_player AND \
						H.id_hand = S.id_hand AND \
						length(H.str_aggressors_p) = 1 AND \
						H.cnt_players_f = 2 AND \
						NOT S.flg_hero AND \
						S.cnt_players between " MIN_PLAYERS_AT_TABLE " AND " MAX_PLAYERS_AT_TABLE " AND \
						S.id_gametype = %GAMETYPE% AND \
						P.id_site = %SITEID% AND \
						REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%' AND \
						S.id_action_f = m.id_action AND \
						S.val_f_bet_aggressor_pos != -1 AND \
						S.amt_f_raise_facing = 0) foo",
				// stat_group
				pt_group_advanced
	},
#endif

#if PT4_QUERY_SUPPORT__TURN_B0_CBET
				// PT4  query to get cbet on TURN 
	{
		PT4_QUERY_SUPPORT__TURN_B0_CBET,
		// name
		{ "turn_b0_cbet_op", "turn_b0_cbet_ip" },
		// description_for_editor
		{ "Poker Tracker turn b0 cbet OP", "Poker Tracker turn b0 cbet IP" },
		// query
		"SELECT (case when ActionOpportunities1 = 0 then -1 \
				 else cast(ActionCount1 as real) / ActionOpportunities1 \
				 end) as result1, ActionOpportunities1, \
				(case when ActionOpportunities2 = 0 then -1 \
				 else cast(ActionCount2 as real) / ActionOpportunities2 \
				 end) as result2, ActionOpportunities2 \
		 FROM	(SELECT	sum(case when l.action LIKE '%R' AND flg_t_open_opp AND flg_t_first AND flg_t_bet then 1 else 0 end) \
						 as ActionCount1, \
						sum(case when l.action LIKE '%R' AND flg_t_open_opp AND flg_t_first then 1 else 0 end) \
						 as ActionOpportunities1, \
						sum(case when l.action LIKE '%R' AND flg_t_open_opp AND flg_t_has_position AND flg_t_bet then 1 else 0 end) \
						 as ActionCount2, \
						sum(case when l.action LIKE '%R' AND flg_t_open_opp AND flg_t_has_position then 1 else 0 end) \
						 as ActionOpportunities2 \
				 FROM	player as P, %TYPE%_hand_player_statistics as S, lookup_actions l, %TYPE%_hand_summary H \
				 WHERE	S.id_player = P.id_player AND \
						H.id_hand = S.id_hand AND \
						length(H.str_aggressors_f) = 0 AND \
						H.cnt_players_t = 2 AND \
						NOT S.flg_hero AND \
						S.cnt_players between " MIN_PLAYERS_AT_TABLE " AND " MAX_PLAYERS_AT_TABLE " AND \
						S.id_gametype = %GAMETYPE% AND \
						P.id_site = %SITEID% AND \
						REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%' AND \
						S.id_action_p = l.id_action) foo",
				// stat_group
				pt_group_advanced
	},
#endif

#if PT4_QUERY_SUPPORT__TURN_B0_FOLD_TO_CBET
				// PT4  query to get TURN fold to cbet 
	{
		PT4_QUERY_SUPPORT__TURN_B0_FOLD_TO_CBET,
		// name
		{ "turn_b0_fold_to_cbet_op", "turn_b0_fold_to_cbet_ip" },
		// description_for_editor
		{ "Poker Tracker turn b0 fold to cbet OP","Poker Tracker turn b0 fold to cbet IP" },
		// query
		"SELECT (case when ActionOpportunities1 = 0 then -1 \
				 else cast(ActionCount1 as real) / ActionOpportunities1 \
				 end) as result1, ActionOpportunities1, \
				(case when ActionOpportunities2 = 0 then -1 \
				 else cast(ActionCount2 as real) / ActionOpportunities2 \
				 end) as result2, ActionOpportunities2 \
		 FROM	(SELECT	sum(case when S.position > S.val_t_bet_aggressor_pos AND (m.action = 'XF' or m.action = 'F') then 1 else 0 end) \
						 as ActionCount1, \
						sum(case when S.position > S.val_t_bet_aggressor_pos then 1 else 0 end) \
						 as ActionOpportunities1, \
						 sum(case when S.position < S.val_t_bet_aggressor_pos AND (m.action = 'XF' or m.action = 'F') then 1 else 0 end) \
						 as ActionCount2, \
						 sum(case when S.position < S.val_t_bet_aggressor_pos then 1 else 0 end) \
						 as ActionOpportunities2 \
				 FROM	player as P, %TYPE%_hand_player_statistics as S, lookup_actions l, lookup_actions m, %TYPE%_hand_summary H \
				 WHERE	S.id_player = P.id_player AND \
						H.id_hand = S.id_hand AND \
						length(H.str_aggressors_f) = 0 AND \
						H.cnt_players_t = 2 AND \
						NOT S.flg_hero AND \
						S.cnt_players between " MIN_PLAYERS_AT_TABLE " AND " MAX_PLAYERS_AT_TABLE " AND \
						S.id_gametype = %GAMETYPE% AND \
						P.id_site = %SITEID% AND \
						REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%' AND \
						S.id_action_t = m.id_action AND \
						S.id_action_p = l.id_action AND \
						l.action like '%C' AND \
						S.amt_t_bet_facing > 0 AND \
						S.val_p_raise_aggressor_pos = S.val_t_bet_aggressor_pos) foo",
				// stat_group
				pt_group_advanced
	},
#endif

#if PT4_QUERY_SUPPORT__TURN_B0_RAISE_CBET
				// PT4  query to get raise cbet on TURN 
	{
		PT4_QUERY_SUPPORT__TURN_B0_RAISE_CBET,
		// name
		{ "turn_b0_raise_cbet_op", "turn_b0_raise_cbet_ip" },
		// description_for_editor
		{ "Poker Tracker turn b0 raise cbet OP","Poker Tracker turn b0 raise cbet IP" },
		// query
		"SELECT (case when ActionOpportunities1 = 0 then -1 \
				 else cast(ActionCount1 as real) / ActionOpportunities1 \
				 end) as result1, ActionOpportunities1, \
				(case when ActionOpportunities2 = 0 then -1 \
				 else cast(ActionCount2 as real) / ActionOpportunities2 \
				 end) as result2, ActionOpportunities2 \
		 FROM	(SELECT	sum(case when S.position > S.val_t_bet_aggressor_pos AND (substring(m.action from 1 for 1) = 'R' or substring(m.action from 1 for 2) = 'XR') then 1 else 0 end) \
						 as ActionCount1, \
						sum(case when S.position > S.val_t_bet_aggressor_pos then 1 else 0 end) \
						 as ActionOpportunities1, \
						 sum(case when S.position < S.val_t_bet_aggressor_pos AND (substring(m.action from 1 for 1) = 'R' or substring(m.action from 1 for 2) = 'XR') then 1 else 0 end) \
						 as ActionCount2, \
						 sum(case when S.position < S.val_t_bet_aggressor_pos then 1 else 0 end) \
						 as ActionOpportunities2 \
				 FROM	player as P, %TYPE%_hand_player_statistics as S, lookup_actions l, lookup_actions m, %TYPE%_hand_summary H \
				 WHERE	S.id_player = P.id_player AND \
						H.id_hand = S.id_hand AND \
						length(H.str_aggressors_f) = 0 AND \
						H.cnt_players_t = 2 AND \
						NOT S.flg_hero AND \
						S.cnt_players between " MIN_PLAYERS_AT_TABLE " AND " MAX_PLAYERS_AT_TABLE " AND \
						S.id_gametype = %GAMETYPE% AND \
						P.id_site = %SITEID% AND \
						REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%' AND \
						S.id_action_t = m.id_action AND \
						S.id_action_p = l.id_action AND \
						l.action like '%C' AND \
						S.amt_t_bet_facing > 0 AND \
						S.val_p_raise_aggressor_pos = S.val_t_bet_aggressor_pos) foo",
				// stat_group
				pt_group_advanced
	},
#endif

#if PT4_QUERY_SUPPORT__TURN_B0_DONKBET
				// PT4  query to get TURN donkbet 
	{
		PT4_QUERY_SUPPORT__TURN_B0_DONKBET,
		// name
		{ "turn_b0_donkbet" },
		// description_for_editor
		{ "Poker Tracker turn b0 donkbet" },
		// query
		"SELECT (case when ActionOpportunities = 0 then -1 \
				 else cast(ActionCount as real) / ActionOpportunities \
				 end) as result, ActionOpportunities \
		 FROM	(SELECT	sum(case when flg_t_bet then 1 else 0 end) \
						 as ActionCount, \
						sum(case when true then 1 else 0 end) \
						 as ActionOpportunities \
				 FROM	player as P, %TYPE%_hand_player_statistics as S, lookup_actions l, %TYPE%_hand_summary H \
				 WHERE	S.id_player = P.id_player AND \
						H.id_hand = S.id_hand AND \
						length(H.str_aggressors_f) = 0 AND \
						H.cnt_players_t = 2 AND \
						NOT S.flg_hero AND \
						S.cnt_players between " MIN_PLAYERS_AT_TABLE " AND " MAX_PLAYERS_AT_TABLE " AND \
						S.id_gametype = %GAMETYPE% AND \
						P.id_site = %SITEID% AND \
						REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%' AND \
						l.action LIKE '%C' AND \
						(S.val_p_raise_aggressor_pos != -1 AND S.val_p_raise_aggressor_pos < S.position)  AND \
						S.id_action_p = l.id_action AND \
						S.flg_t_open_opp) foo",
				// stat_group
				pt_group_advanced
	},
#endif

#if PT4_QUERY_SUPPORT__TURN_B0_FOLD_TO_DONKBET
				// PT4  query to get TURN fold to donkbet
	{
		PT4_QUERY_SUPPORT__TURN_B0_FOLD_TO_DONKBET,
		// name
		{ "turn_b0_fold_to_donkbet" },
		// description_for_editor
		{ "Poker Tracker turn b0 fold to donkbet" },
		// query
		"SELECT (case when ActionOpportunities1 = 0 then -1 \
				 else cast(ActionCount1 as real) / ActionOpportunities1 \
				 end) as result1, ActionOpportunities1 \
		 FROM	(SELECT	sum(case when (m.action = 'F' OR m.action = 'XF') then 1 else 0 end) \
						 as ActionCount1, \
						count(*) \
						 as ActionOpportunities1 \
				 FROM	player as P, %TYPE%_hand_player_statistics as S, lookup_actions l, lookup_actions m, %TYPE%_hand_summary H \
				 WHERE	S.id_player = P.id_player AND \
						H.id_hand = S.id_hand AND \
						length(H.str_aggressors_f) = 0 AND \
						H.cnt_players_t = 2 AND \
						NOT S.flg_hero AND \
						S.cnt_players between " MIN_PLAYERS_AT_TABLE " AND " MAX_PLAYERS_AT_TABLE " AND \
						S.id_gametype = %GAMETYPE% AND \
						P.id_site = %SITEID% AND \
						REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%' AND \
						S.id_action_t = m.id_action AND \
						S.id_action_p = l.id_action AND \
						amt_t_bet_facing > 0 AND \
						(flg_p_first_raise OR flg_p_face_raise) AND \
						((S.val_p_raise_aggressor_pos < S.val_t_bet_aggressor_pos AND S.val_p_raise_aggressor_pos != -1) \
						 OR (S.position < S.val_t_bet_aggressor_pos AND S.val_p_raise_aggressor_pos = -1))) foo",
				// stat_group
				pt_group_advanced
	},
#endif

#if PT4_QUERY_SUPPORT__TURN_B0_RAISE_DONKBET
				// PT4  query to get raise donkbet on TURN 
	{
		PT4_QUERY_SUPPORT__TURN_B0_RAISE_DONKBET,
		// name
		{ "turn_b0_raise_donkbet" },
		// description_for_editor
		{ "Poker Tracker turn b0 raise donkbet" },
		// query
		"SELECT (case when ActionOpportunities1 = 0 then -1 \
				 else cast(ActionCount1 as real) / ActionOpportunities1 \
				 end) as result1, ActionOpportunities1 \
		 FROM	(SELECT	sum(case when (m.action = 'R' OR m.action = 'XR') then 1 else 0 end) \
						 as ActionCount1, \
						count(*) \
						 as ActionOpportunities1 \
				 FROM	player as P, %TYPE%_hand_player_statistics as S, lookup_actions l, lookup_actions m, %TYPE%_hand_summary H \
				 WHERE	S.id_player = P.id_player AND \
						H.id_hand = S.id_hand AND \
						length(H.str_aggressors_f) = 0 AND \
						H.cnt_players_t = 2 AND \
						NOT S.flg_hero AND \
						S.cnt_players between " MIN_PLAYERS_AT_TABLE " AND " MAX_PLAYERS_AT_TABLE " AND \
						S.id_gametype = %GAMETYPE% AND \
						P.id_site = %SITEID% AND \
						REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%' AND \
						S.id_action_t = m.id_action AND \
						S.id_action_p = l.id_action AND \
						amt_t_bet_facing > 0 AND \
						(flg_p_first_raise OR flg_p_face_raise) AND \
						((S.val_p_raise_aggressor_pos < S.val_t_bet_aggressor_pos AND S.val_p_raise_aggressor_pos != -1) \
						 OR (S.position < S.val_t_bet_aggressor_pos AND S.val_p_raise_aggressor_pos = -1))) foo",
				// stat_group
				pt_group_advanced
	},
#endif

#if PT4_QUERY_SUPPORT__TURN_B0_FLOAT
				// PT4  query to get turn float 
	{
		PT4_QUERY_SUPPORT__TURN_B0_FLOAT,
		// name
		{ "turn_b0_float" },
		// description_for_editor
		{ "Poker Tracker turn b0 float" },
		// query
		"SELECT (case when ActionOpportunities = 0 then -1 \
				 else cast(ActionCount as real) / ActionOpportunities \
				 end) as result, ActionOpportunities \
		 FROM	(SELECT	sum(case when flg_t_bet then 1 else 0 end) \
						 as ActionCount, \
						sum(case when true then 1 else 0 end) \
						 as ActionOpportunities \
				 FROM	player as P, %TYPE%_hand_player_statistics as S, lookup_actions l, %TYPE%_hand_summary H \
				 WHERE	S.id_player = P.id_player AND \
						H.id_hand = S.id_hand AND \
						length(H.str_aggressors_f) = 0 AND \
						H.cnt_players_t = 2 AND \
						NOT S.flg_hero AND \
						S.cnt_players between " MIN_PLAYERS_AT_TABLE " AND " MAX_PLAYERS_AT_TABLE " AND \
						S.id_gametype = %GAMETYPE% AND \
						P.id_site = %SITEID% AND \
						REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%' AND \
						l.action LIKE '%C' AND \
						S.val_p_raise_aggressor_pos > S.position AND \
						S.val_p_raise_aggressor_pos != -1 AND \
						S.id_action_p = l.id_action AND \
						S.flg_t_open_opp) foo",
				// stat_group
				pt_group_advanced
	},
#endif

#if PT4_QUERY_SUPPORT__TURN_B0_FOLD_TO_FLOAT
				// PT4  query to get TURN fold to float
	{
		PT4_QUERY_SUPPORT__TURN_B0_FOLD_TO_FLOAT,
		// name
		{ "turn_b0_fold_to_float" },
		// description_for_editor
		{ "Poker Tracker turn b0 fold to float" },
		// query
		"SELECT (case when ActionOpportunities1 = 0 then -1 \
				else cast(ActionCount1 as real) / ActionOpportunities1 \
				end) as result1, ActionOpportunities1 \
		FROM	(SELECT	sum(case when (m.action = 'F' OR m.action = 'XF') then 1 else 0 end) \
						as ActionCount1, \
						count(*) \
						as ActionOpportunities1 \
				FROM	player as P, %TYPE%_hand_player_statistics as S, lookup_actions l, lookup_actions m, %TYPE%_hand_summary H \
				WHERE	S.id_player = P.id_player AND \
						H.id_hand = S.id_hand AND \
						length(H.str_aggressors_f) = 0 AND \
						H.cnt_players_t = 2 AND \
					NOT S.flg_hero AND \
						S.cnt_players between " MIN_PLAYERS_AT_TABLE " AND " MAX_PLAYERS_AT_TABLE " AND \
					S.id_gametype = %GAMETYPE% AND \
					P.id_site = %SITEID% AND \
					REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%' AND \
					S.id_action_t = m.id_action AND \
					S.id_action_p = l.id_action AND \
					amt_t_bet_facing > 0 AND \
					(flg_p_first_raise OR flg_p_face_raise) AND \
					((S.val_p_raise_aggressor_pos > S.val_f_bet_aggressor_pos AND S.val_p_raise_aggressor_pos != -1) \
						OR (S.position > S.val_f_bet_aggressor_pos AND S.val_p_raise_aggressor_pos = -1))) foo",
				// stat_group
				pt_group_advanced
	},
#endif

#if PT4_QUERY_SUPPORT__TURN_B0_RAISE_FLOAT
				// PT4  query to get raise float on TURN 
	{
		PT4_QUERY_SUPPORT__TURN_B0_RAISE_FLOAT,
		// name
		{ "turn_b0_raise_float" },
		// description_for_editor
		{ "Poker Tracker turn b0 raise float" },
		// query
		"SELECT (case when ActionOpportunities1 = 0 then -1 \
				else cast(ActionCount1 as real) / ActionOpportunities1 \
				end) as result1, ActionOpportunities1 \
		FROM	(SELECT	sum(case when (m.action = 'R' OR m.action = 'XR') then 1 else 0 end) \
						as ActionCount1, \
						count(*) \
						as ActionOpportunities1 \
				FROM	player as P, %TYPE%_hand_player_statistics as S, lookup_actions l, lookup_actions m, %TYPE%_hand_summary H \
				WHERE	S.id_player = P.id_player AND \
						H.id_hand = S.id_hand AND \
						length(H.str_aggressors_f) = 0 AND \
						H.cnt_players_t = 2 AND \
					NOT S.flg_hero AND \
						S.cnt_players between " MIN_PLAYERS_AT_TABLE " AND " MAX_PLAYERS_AT_TABLE " AND \
					S.id_gametype = %GAMETYPE% AND \
					P.id_site = %SITEID% AND \
					REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%' AND \
					S.id_action_t = m.id_action AND \
					S.id_action_p = l.id_action AND \
					amt_t_bet_facing > 0 AND \
					(flg_p_first_raise OR flg_p_face_raise) AND \
					((S.val_p_raise_aggressor_pos > S.val_f_bet_aggressor_pos AND S.val_p_raise_aggressor_pos != -1) \
						OR (S.position > S.val_f_bet_aggressor_pos AND S.val_p_raise_aggressor_pos = -1))) foo",
				// stat_group
				pt_group_advanced
	},
#endif

#if PT4_QUERY_SUPPORT__RIVER_B0_CBET
				// PT4  query to get cbet on RIVER 
	{
		PT4_QUERY_SUPPORT__RIVER_B0_CBET,
		// name
		{ "river_b0_cbet_op", "river_b0_cbet_ip" },
		// description_for_editor
		{ "Poker Tracker river b0 cbet OP", "Poker Tracker river b0 cbet IP" },
		// query
		"SELECT (case when ActionOpportunities1 = 0 then -1 \
				 else cast(ActionCount1 as real) / ActionOpportunities1 \
				 end) as result1, ActionOpportunities1, \
				(case when ActionOpportunities2 = 0 then -1 \
				 else cast(ActionCount2 as real) / ActionOpportunities2 \
				 end) as result2, ActionOpportunities2 \
		 FROM	(SELECT	sum(case when (l.action LIKE '%B' OR l.action LIKE '%R') AND flg_r_open_opp AND flg_r_first AND flg_r_bet then 1 else 0 end) \
						 as ActionCount1, \
						sum(case when (l.action LIKE '%B' OR l.action LIKE '%R') AND flg_r_open_opp AND flg_r_first then 1 else 0 end) \
						 as ActionOpportunities1, \
						sum(case when (l.action LIKE '%B' OR l.action LIKE '%R') AND flg_r_open_opp AND flg_r_has_position AND flg_r_bet then 1 else 0 end) \
						 as ActionCount2, \
						sum(case when (l.action LIKE '%B' OR l.action LIKE '%R') AND flg_r_open_opp AND flg_r_has_position then 1 else 0 end) \
						 as ActionOpportunities2 \
				 FROM	player as P, %TYPE%_hand_player_statistics as S, lookup_actions l, %TYPE%_hand_summary H \
				 WHERE	S.id_player = P.id_player AND \
						H.id_hand = S.id_hand AND \
						length(H.str_aggressors_t) = 0 AND \
						H.cnt_players_r = 2 AND \
						NOT S.flg_hero AND \
						S.cnt_players between " MIN_PLAYERS_AT_TABLE " AND " MAX_PLAYERS_AT_TABLE " AND \
						S.id_gametype = %GAMETYPE% AND \
						P.id_site = %SITEID% AND \
						REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%' AND \
						S.id_action_f = l.id_action) foo",
				// stat_group
				pt_group_advanced
	},
#endif

#if PT4_QUERY_SUPPORT__RIVER_B0_FOLD_TO_CBET
				// PT4  query to get RIVER fold to cbet 
	{
		PT4_QUERY_SUPPORT__RIVER_B0_FOLD_TO_CBET,
		// name
		{ "river_b0_fold_to_cbet_op", "river_b0_fold_to_cbet_ip" },
		// description_for_editor
		{ "Poker Tracker river b0 fold to cbet OP","Poker Tracker river b0 fold to cbet IP" },
		// query
		"SELECT (case when ActionOpportunities1 = 0 then -1 \
				 else cast(ActionCount1 as real) / ActionOpportunities1 \
				 end) as result1, ActionOpportunities1, \
				(case when ActionOpportunities2 = 0 then -1 \
				 else cast(ActionCount2 as real) / ActionOpportunities2 \
				 end) as result2, ActionOpportunities2 \
		 FROM	(SELECT	sum(case when S.position > S.val_r_bet_aggressor_pos AND (m.action = 'XF' or m.action = 'F') then 1 else 0 end) \
						 as ActionCount1, \
						sum(case when S.position > S.val_r_bet_aggressor_pos then 1 else 0 end) \
						 as ActionOpportunities1, \
						 sum(case when S.position < S.val_r_bet_aggressor_pos AND (m.action = 'XF' or m.action = 'F') then 1 else 0 end) \
						 as ActionCount2, \
						 sum(case when S.position < S.val_r_bet_aggressor_pos then 1 else 0 end) \
						 as ActionOpportunities2 \
				 FROM	player as P, %TYPE%_hand_player_statistics as S, lookup_actions l, lookup_actions m, %TYPE%_hand_summary H \
				 WHERE	S.id_player = P.id_player AND \
						H.id_hand = S.id_hand AND \
						length(H.str_aggressors_t) = 0 AND \
						H.cnt_players_r = 2 AND \
						NOT S.flg_hero AND \
						S.cnt_players between " MIN_PLAYERS_AT_TABLE " AND " MAX_PLAYERS_AT_TABLE " AND \
						S.id_gametype = %GAMETYPE% AND \
						P.id_site = %SITEID% AND \
						REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%' AND \
						S.id_action_r = m.id_action AND \
						S.id_action_f = l.id_action AND \
						l.action like '%C' AND \
						S.amt_r_bet_facing > 0 AND \
						((S.val_f_bet_aggressor_pos = S.val_r_bet_aggressor_pos AND S.val_f_bet_aggressor_pos != -1 AND S.val_f_raise_aggressor_pos = -1) \
						 OR(S.val_f_raise_aggressor_pos = S.val_r_bet_aggressor_pos AND S.val_f_raise_aggressor_pos != -1))) foo",
				// stat_group
				pt_group_advanced
	},
#endif

#if PT4_QUERY_SUPPORT__RIVER_B0_RAISE_CBET
				// PT4  query to get raise cbet on RIVER 
	{
		PT4_QUERY_SUPPORT__RIVER_B0_RAISE_CBET,
		// name
		{ "river_b0_raise_cbet_op", "river_b0_raise_cbet_ip" },
		// description_for_editor
		{ "Poker Tracker river b0 raise cbet OP","Poker Tracker river b0 raise cbet IP" },
		// query
		"SELECT (case when ActionOpportunities1 = 0 then -1 \
				 else cast(ActionCount1 as real) / ActionOpportunities1 \
				 end) as result1, ActionOpportunities1, \
				(case when ActionOpportunities2 = 0 then -1 \
				 else cast(ActionCount2 as real) / ActionOpportunities2 \
				 end) as result2, ActionOpportunities2 \
		 FROM	(SELECT	sum(case when S.position > S.val_r_bet_aggressor_pos AND (substring(m.action from 1 for 1) = 'R' or substring(m.action from 1 for 2) = 'XR') then 1 else 0 end) \
						 as ActionCount1, \
						sum(case when S.position > S.val_r_bet_aggressor_pos then 1 else 0 end) \
						 as ActionOpportunities1, \
						 sum(case when S.position < S.val_r_bet_aggressor_pos AND (substring(m.action from 1 for 1) = 'R' or substring(m.action from 1 for 2) = 'XR') then 1 else 0 end) \
						 as ActionCount2, \
						 sum(case when S.position < S.val_r_bet_aggressor_pos then 1 else 0 end) \
						 as ActionOpportunities2 \
				 FROM	player as P, %TYPE%_hand_player_statistics as S, lookup_actions l, lookup_actions m, %TYPE%_hand_summary H \
				 WHERE	S.id_player = P.id_player AND \
						H.id_hand = S.id_hand AND \
						length(H.str_aggressors_t) = 0 AND \
						H.cnt_players_r = 2 AND \
						NOT S.flg_hero AND \
						S.cnt_players between " MIN_PLAYERS_AT_TABLE " AND " MAX_PLAYERS_AT_TABLE " AND \
						S.id_gametype = %GAMETYPE% AND \
						P.id_site = %SITEID% AND \
						REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%' AND \
						S.id_action_r = m.id_action AND \
						S.id_action_f = l.id_action AND \
						l.action like '%C' AND \
						S.amt_r_bet_facing > 0 AND \
						((S.val_f_bet_aggressor_pos = S.val_r_bet_aggressor_pos AND S.val_f_bet_aggressor_pos != -1 AND S.val_f_raise_aggressor_pos = -1) \
						 OR(S.val_f_raise_aggressor_pos = S.val_r_bet_aggressor_pos AND S.val_f_raise_aggressor_pos != -1))) foo",
				// stat_group
				pt_group_advanced
	},
#endif

#if PT4_QUERY_SUPPORT__RIVER_B0_DONKBET
				// PT4  query to get RIVER donkbet 
	{
		PT4_QUERY_SUPPORT__RIVER_B0_DONKBET,
		// name
		{ "river_b0_donkbet" },
		// description_for_editor
		{ "Poker Tracker river b0 donkbet" },
		// query
		"SELECT (case when ActionOpportunities = 0 then -1 \
				 else cast(ActionCount as real) / ActionOpportunities \
				 end) as result, ActionOpportunities \
		 FROM	(SELECT	sum(case when flg_r_bet then 1 else 0 end) \
						 as ActionCount, \
						sum(case when true then 1 else 0 end) \
						 as ActionOpportunities \
				 FROM	player as P, %TYPE%_hand_player_statistics as S, lookup_actions l, %TYPE%_hand_summary H \
				 WHERE	S.id_player = P.id_player AND \
						H.id_hand = S.id_hand AND \
						length(H.str_aggressors_t) = 0 AND \
						H.cnt_players_r = 2 AND \
						NOT S.flg_hero AND \
						S.cnt_players between " MIN_PLAYERS_AT_TABLE " AND " MAX_PLAYERS_AT_TABLE " AND \
						S.id_gametype = %GAMETYPE% AND \
						P.id_site = %SITEID% AND \
						REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%' AND \
						l.action LIKE '%C' AND \
						((S.val_f_raise_aggressor_pos != -1 AND S.val_f_raise_aggressor_pos < S.position) \
						OR (S.val_f_raise_aggressor_pos = -1 AND S.val_f_bet_aggressor_pos < S.position)) AND \
						S.id_action_f = l.id_action AND \
						S.flg_r_open_opp) foo",
				// stat_group
				pt_group_advanced
	},
#endif

#if PT4_QUERY_SUPPORT__RIVER_B0_FOLD_TO_DONKBET
				// PT4  query to get RIVER fold to donkbet
	{
		PT4_QUERY_SUPPORT__RIVER_B0_FOLD_TO_DONKBET,
		// name
		{ "river_b0_fold_to_donkbet" },
		// description_for_editor
		{ "Poker Tracker river b0 fold to donkbet" },
		// query
		"SELECT (case when ActionOpportunities1 = 0 then -1 \
				 else cast(ActionCount1 as real) / ActionOpportunities1 \
				 end) as result1, ActionOpportunities1 \
		 FROM	(SELECT	sum(case when (m.action = 'F' OR m.action = 'XF') then 1 else 0 end) \
						 as ActionCount1, \
						count(*) \
						 as ActionOpportunities1 \
				 FROM	player as P, %TYPE%_hand_player_statistics as S, lookup_actions l, lookup_actions m, %TYPE%_hand_summary H \
				 WHERE	S.id_player = P.id_player AND \
						H.id_hand = S.id_hand AND \
						length(H.str_aggressors_t) = 0 AND \
						H.cnt_players_r = 2 AND \
						NOT S.flg_hero AND \
						S.cnt_players between " MIN_PLAYERS_AT_TABLE " AND " MAX_PLAYERS_AT_TABLE " AND \
						S.id_gametype = %GAMETYPE% AND \
						P.id_site = %SITEID% AND \
						REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%' AND \
						S.id_action_r = m.id_action AND \
						S.id_action_f = l.id_action AND \
						amt_r_bet_facing > 0 AND \
						(flg_f_bet OR cnt_f_raise > 0 OR cnt_f_call > 0) AND \
						((l.action like '%R' AND S.position < S.val_r_bet_aggressor_pos) \
						 OR(l.action like '%B' AND S.position < S.val_r_bet_aggressor_pos))) foo",
				// stat_group
				pt_group_advanced
	},
#endif

#if PT4_QUERY_SUPPORT__RIVER_B0_RAISE_DONKBET
				// PT4  query to get raise donkbet on RIVER 
	{
		PT4_QUERY_SUPPORT__RIVER_B0_RAISE_DONKBET,
		// name
		{ "river_b0_raise_donkbet" },
		// description_for_editor
		{ "Poker Tracker river b0 raise donkbet" },
		// query
		"SELECT (case when ActionOpportunities1 = 0 then -1 \
				 else cast(ActionCount1 as real) / ActionOpportunities1 \
				 end) as result1, ActionOpportunities1 \
		 FROM	(SELECT	sum(case when (m.action = 'R' OR m.action = 'XR') then 1 else 0 end) \
						 as ActionCount1, \
						count(*) \
						 as ActionOpportunities1 \
				 FROM	player as P, %TYPE%_hand_player_statistics as S, lookup_actions l, lookup_actions m, %TYPE%_hand_summary H \
				 WHERE	S.id_player = P.id_player AND \
						H.id_hand = S.id_hand AND \
						length(H.str_aggressors_t) = 0 AND \
						H.cnt_players_r = 2 AND \
						NOT S.flg_hero AND \
						S.cnt_players between " MIN_PLAYERS_AT_TABLE " AND " MAX_PLAYERS_AT_TABLE " AND \
						S.id_gametype = %GAMETYPE% AND \
						P.id_site = %SITEID% AND \
						REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%' AND \
						S.id_action_r = m.id_action AND \
						S.id_action_f = l.id_action AND \
						amt_r_bet_facing > 0 AND \
						(flg_f_bet OR cnt_f_raise > 0 OR cnt_f_call > 0) AND \
						((l.action like '%R' AND S.position < S.val_r_bet_aggressor_pos) \
						 OR(l.action like '%B' AND S.position < S.val_r_bet_aggressor_pos))) foo",
				// stat_group
				pt_group_advanced
	},
#endif

#if PT4_QUERY_SUPPORT__RIVER_B0_FLOAT
				// PT4  query to get river float 
	{
		PT4_QUERY_SUPPORT__RIVER_B0_FLOAT,
		// name
		{ "river_b0_float" },
		// description_for_editor
		{ "Poker Tracker river b0 float" },
		// query
		"SELECT (case when ActionOpportunities = 0 then -1 \
				 else cast(ActionCount as real) / ActionOpportunities \
				 end) as result, ActionOpportunities \
		 FROM	(SELECT	sum(case when flg_r_bet then 1 else 0 end) \
						 as ActionCount, \
						sum(case when true then 1 else 0 end) \
						 as ActionOpportunities \
				 FROM	player as P, %TYPE%_hand_player_statistics as S, lookup_actions l, %TYPE%_hand_summary H \
				 WHERE	S.id_player = P.id_player AND \
						H.id_hand = S.id_hand AND \
						length(H.str_aggressors_t) = 0 AND \
						H.cnt_players_r = 2 AND \
						NOT S.flg_hero AND \
						S.cnt_players between " MIN_PLAYERS_AT_TABLE " AND " MAX_PLAYERS_AT_TABLE " AND \
						S.id_gametype = %GAMETYPE% AND \
						P.id_site = %SITEID% AND \
						REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%' AND \
						l.action LIKE '%C' AND \
						((S.val_f_raise_aggressor_pos != -1 AND S.val_f_raise_aggressor_pos > S.position) \
						OR (S.val_f_raise_aggressor_pos = -1 AND S.val_f_bet_aggressor_pos > S.position)) AND \
						S.id_action_f = l.id_action AND \
						S.flg_r_open_opp) foo",
				// stat_group
				pt_group_advanced
	},
#endif

#if PT4_QUERY_SUPPORT__RIVER_B0_FOLD_TO_FLOAT
				// PT4  query to get RIVER fold to float
	{
		PT4_QUERY_SUPPORT__RIVER_B0_FOLD_TO_FLOAT,
		// name
		{ "river_b0_fold_to_float" },
		// description_for_editor
		{ "Poker Tracker river b0 fold to float" },
		// query
		"SELECT (case when ActionOpportunities1 = 0 then -1 \
				else cast(ActionCount1 as real) / ActionOpportunities1 \
				end) as result1, ActionOpportunities1 \
		FROM	(SELECT	sum(case when (m.action = 'F' OR m.action = 'XF') then 1 else 0 end) \
						as ActionCount1, \
						count(*) \
						as ActionOpportunities1 \
				FROM	player as P, %TYPE%_hand_player_statistics as S, lookup_actions l, lookup_actions m, %TYPE%_hand_summary H \
				WHERE	S.id_player = P.id_player AND \
						H.id_hand = S.id_hand AND \
						length(H.str_aggressors_t) = 0 AND \
						H.cnt_players_r = 2 AND \
						NOT S.flg_hero AND \
						S.cnt_players between " MIN_PLAYERS_AT_TABLE " AND " MAX_PLAYERS_AT_TABLE " AND \
						S.id_gametype = %GAMETYPE% AND \
						P.id_site = %SITEID% AND \
						REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%' AND \
						S.id_action_r = m.id_action AND \
						S.id_action_f = l.id_action AND \
						amt_r_bet_facing > 0 AND \
						(flg_f_bet OR cnt_f_raise > 0 OR cnt_f_call > 0) AND \
						((l.action like '%R' AND S.position > S.val_r_bet_aggressor_pos) \
						OR(l.action like '%B' AND S.position > S.val_r_bet_aggressor_pos))) foo",
				// stat_group
				pt_group_advanced
	},
#endif

#if PT4_QUERY_SUPPORT__RIVER_B0_RAISE_FLOAT
				// PT4  query to get raise float on RIVER 
	{
		PT4_QUERY_SUPPORT__RIVER_B0_RAISE_FLOAT,
		// name
		{ "river_b0_raise_float" },
		// description_for_editor
		{ "Poker Tracker river b0 raise float" },
		// query
		"SELECT (case when ActionOpportunities1 = 0 then -1 \
				else cast(ActionCount1 as real) / ActionOpportunities1 \
				end) as result1, ActionOpportunities1 \
		FROM	(SELECT	sum(case when (m.action = 'R' OR m.action = 'XR') then 1 else 0 end) \
						as ActionCount1, \
						count(*) \
						as ActionOpportunities1 \
				FROM	player as P, %TYPE%_hand_player_statistics as S, lookup_actions l, lookup_actions m, %TYPE%_hand_summary H \
				WHERE	S.id_player = P.id_player AND \
						H.id_hand = S.id_hand AND \
						length(H.str_aggressors_t) = 0 AND \
						H.cnt_players_r = 2 AND \
						NOT S.flg_hero AND \
						S.cnt_players between " MIN_PLAYERS_AT_TABLE " AND " MAX_PLAYERS_AT_TABLE " AND \
						S.id_gametype = %GAMETYPE% AND \
						P.id_site = %SITEID% AND \
						REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%' AND \
						S.id_action_r = m.id_action AND \
						S.id_action_f = l.id_action AND \
						amt_r_bet_facing > 0 AND \
						(flg_f_bet OR cnt_f_raise > 0 OR cnt_f_call > 0) AND \
						((l.action like '%R' AND S.position > S.val_r_bet_aggressor_pos) \
						OR(l.action like '%B' AND S.position > S.val_r_bet_aggressor_pos))) foo",
				// stat_group
				pt_group_advanced
	},
#endif


#if PT4_QUERY_SUPPORT__FLOP_B0_BET_MW
				// PT4  query to get cbet mw on FLOP 
	{
		PT4_QUERY_SUPPORT__FLOP_B0_BET_MW,
		// name
		{ "flop_b0_bet_mw" },
		// description_for_editor
		{ "Poker Tracker flop b0 bet mw" },
		// query
		"SELECT (case when ActionOpportunities1 = 0 then -1 \
				 else cast(ActionCount1 as real) / ActionOpportunities1 \
				 end) as result1, ActionOpportunities1 \
		 FROM	(SELECT	sum(case when flg_f_open_opp AND flg_f_bet then 1 else 0 end) \
						 as ActionCount1, \
						sum(case when flg_f_open_opp then 1 else 0 end) \
						 as ActionOpportunities1 \
				 FROM	player as P, %TYPE%_hand_player_statistics as S, lookup_actions l, %TYPE%_hand_summary H \
				 WHERE	S.id_player = P.id_player AND \
						H.id_hand = S.id_hand AND \
						length(H.str_aggressors_p) = 1 AND \
						H.cnt_players_f > 2 AND \
						NOT S.flg_hero AND \
						S.cnt_players between " MIN_PLAYERS_AT_TABLE " AND " MAX_PLAYERS_AT_TABLE " AND \
						S.id_gametype = %GAMETYPE% AND \
						P.id_site = %SITEID% AND \
						REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%' AND \
						S.id_action_p = l.id_action) foo",
				// stat_group
				pt_group_advanced
	},
#endif

#if PT4_QUERY_SUPPORT__FLOP_B0_FOLD_TO_BET_MW
				// PT4  query to get FLOP fold to cbet mw 
	{
		PT4_QUERY_SUPPORT__FLOP_B0_FOLD_TO_BET_MW,
		// name
		{ "flop_b0_fold_to_bet_mw" },
		// description_for_editor
		{ "Poker Tracker flop b0 fold to bet mw" },
		// query
		"SELECT (case when ActionOpportunities1 = 0 then -1 \
				 else cast(ActionCount1 as real) / ActionOpportunities1 \
				 end) as result1, ActionOpportunities1 \
		 FROM	(SELECT	sum(case when (m.action = 'XF' or m.action = 'F') then 1 else 0 end) \
						 as ActionCount1, \
						count(*) \
						 as ActionOpportunities1 \
				 FROM	player as P, %TYPE%_hand_player_statistics as S, lookup_actions m, %TYPE%_hand_summary H \
				 WHERE	S.id_player = P.id_player AND \
						H.id_hand = S.id_hand AND \
						length(H.str_aggressors_p) = 1 AND \
						H.cnt_players_f > 2 AND \
						NOT S.flg_hero AND \
						S.cnt_players between " MIN_PLAYERS_AT_TABLE " AND " MAX_PLAYERS_AT_TABLE " AND \
						S.id_gametype = %GAMETYPE% AND \
						P.id_site = %SITEID% AND \
						REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%' AND \
						S.id_action_f = m.id_action AND \
						S.val_f_bet_aggressor_pos != -1 AND \
						S.amt_f_raise_facing = 0) foo",
				// stat_group
				pt_group_advanced
	},
#endif

#if PT4_QUERY_SUPPORT__FLOP_B0_RAISE_BET_MW
				// PT4  query to get raise cbet mw on FLOP 
	{
		PT4_QUERY_SUPPORT__FLOP_B0_RAISE_BET_MW,
		// name
		{ "flop_b0_raise_bet_mw" },
		// description_for_editor
		{ "Poker Tracker flop b0 raise bet mw" },
		// query
		"SELECT (case when ActionOpportunities1 = 0 then -1 \
				 else cast(ActionCount1 as real) / ActionOpportunities1 \
				 end) as result1, ActionOpportunities1 \
		 FROM	(SELECT	sum(case when (substring(m.action from 1 for 1) = 'R' or substring(m.action from 1 for 2) = 'XR') then 1 else 0 end) \
						 as ActionCount1, \
						count(*) \
						 as ActionOpportunities1 \
				 FROM	player as P, %TYPE%_hand_player_statistics as S, lookup_actions m, %TYPE%_hand_summary H \
				 WHERE	S.id_player = P.id_player AND \
						H.id_hand = S.id_hand AND \
						length(H.str_aggressors_p) = 1 AND \
						H.cnt_players_f > 2 AND \
						NOT S.flg_hero AND \
						S.cnt_players between " MIN_PLAYERS_AT_TABLE " AND " MAX_PLAYERS_AT_TABLE " AND \
						S.id_gametype = %GAMETYPE% AND \
						P.id_site = %SITEID% AND \
						REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%' AND \
						S.id_action_f = m.id_action AND \
						S.val_f_bet_aggressor_pos != -1 AND \
						S.amt_f_raise_facing = 0) foo",
				// stat_group
				pt_group_advanced
	},
#endif

#if PT4_QUERY_SUPPORT__TURN_B0_CBET_MW
				// PT4  query to get cbet mw on TURN 
	{
		PT4_QUERY_SUPPORT__TURN_B0_CBET_MW,
		// name
		{ "turn_b0_cbet_mw" },
		// description_for_editor
		{ "Poker Tracker turn b0 cbet mw" },
		// query
		"SELECT (case when ActionOpportunities1 = 0 then -1 \
				 else cast(ActionCount1 as real) / ActionOpportunities1 \
				 end) as result1, ActionOpportunities1 \
		 FROM	(SELECT	sum(case when l.action LIKE '%R' AND flg_t_open_opp AND flg_t_bet then 1 else 0 end) \
						 as ActionCount1, \
						sum(case when l.action LIKE '%R' AND flg_t_open_opp then 1 else 0 end) \
						 as ActionOpportunities1 \
				 FROM	player as P, %TYPE%_hand_player_statistics as S, lookup_actions l, %TYPE%_hand_summary H \
				 WHERE	S.id_player = P.id_player AND \
						H.id_hand = S.id_hand AND \
						length(H.str_aggressors_f) = 0 AND \
						H.cnt_players_t > 2 AND \
						NOT S.flg_hero AND \
						S.cnt_players between " MIN_PLAYERS_AT_TABLE " AND " MAX_PLAYERS_AT_TABLE " AND \
						S.id_gametype = %GAMETYPE% AND \
						P.id_site = %SITEID% AND \
						REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%' AND \
						S.id_action_p = l.id_action) foo",
				// stat_group
				pt_group_advanced
	},
#endif

#if PT4_QUERY_SUPPORT__TURN_B0_FOLD_TO_CBET_MW
				// PT4  query to get TURN fold to cbet mw 
	{
		PT4_QUERY_SUPPORT__TURN_B0_FOLD_TO_CBET_MW,
		// name
		{ "turn_b0_fold_to_cbet_mw" },
		// description_for_editor
		{ "Poker Tracker turn b0 fold to cbet mw" },
		// query
		"SELECT (case when ActionOpportunities1 = 0 then -1 \
				 else cast(ActionCount1 as real) / ActionOpportunities1 \
				 end) as result1, ActionOpportunities1 \
		 FROM	(SELECT	sum(case when (m.action = 'XF' or m.action = 'F') then 1 else 0 end) \
						 as ActionCount1, \
						count(*) \
						 as ActionOpportunities1 \
				 FROM	player as P, %TYPE%_hand_player_statistics as S, lookup_actions l, lookup_actions m, %TYPE%_hand_summary H \
				 WHERE	S.id_player = P.id_player AND \
						H.id_hand = S.id_hand AND \
						length(H.str_aggressors_f) = 0 AND \
						H.cnt_players_t > 2 AND \
						NOT S.flg_hero AND \
						S.cnt_players between " MIN_PLAYERS_AT_TABLE " AND " MAX_PLAYERS_AT_TABLE " AND \
						S.id_gametype = %GAMETYPE% AND \
						P.id_site = %SITEID% AND \
						REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%' AND \
						S.id_action_t = m.id_action AND \
						S.id_action_p = l.id_action AND \
						l.action like '%C' AND \
						S.amt_t_bet_facing > 0 AND \
						S.val_p_raise_aggressor_pos = S.val_t_bet_aggressor_pos) foo",
				// stat_group
				pt_group_advanced
	},
#endif

#if PT4_QUERY_SUPPORT__TURN_B0_RAISE_CBET_MW
				// PT4  query to get raise cbet mw on TURN 
	{
		PT4_QUERY_SUPPORT__TURN_B0_RAISE_CBET_MW,
		// name
		{ "turn_b0_raise_cbet_mw" },
		// description_for_editor
		{ "Poker Tracker turn b0 raise cbet mw" },
		// query
		"SELECT (case when ActionOpportunities1 = 0 then -1 \
				 else cast(ActionCount1 as real) / ActionOpportunities1 \
				 end) as result1, ActionOpportunities1 \
		 FROM	(SELECT	sum(case when (substring(m.action from 1 for 1) = 'R' or substring(m.action from 1 for 2) = 'XR') then 1 else 0 end) \
						 as ActionCount1, \
						count(*) \
						 as ActionOpportunities1 \
				 FROM	player as P, %TYPE%_hand_player_statistics as S, lookup_actions l, lookup_actions m, %TYPE%_hand_summary H \
				 WHERE	S.id_player = P.id_player AND \
						H.id_hand = S.id_hand AND \
						length(H.str_aggressors_f) = 0 AND \
						H.cnt_players_t > 2 AND \
						NOT S.flg_hero AND \
						S.cnt_players between " MIN_PLAYERS_AT_TABLE " AND " MAX_PLAYERS_AT_TABLE " AND \
						S.id_gametype = %GAMETYPE% AND \
						P.id_site = %SITEID% AND \
						REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%' AND \
						S.id_action_t = m.id_action AND \
						S.id_action_p = l.id_action AND \
						l.action like '%C' AND \
						S.amt_t_bet_facing > 0 AND \
						S.val_p_raise_aggressor_pos = S.val_t_bet_aggressor_pos) foo",
				// stat_group
				pt_group_advanced
	},
#endif

#if PT4_QUERY_SUPPORT__TURN_B0_DONKBET_MW
				// PT4  query to get TURN donkbet mw 
	{
		PT4_QUERY_SUPPORT__TURN_B0_DONKBET_MW,
		// name
		{ "turn_b0_donkbet_mw" },
		// description_for_editor
		{ "Poker Tracker turn b0 donkbet mw" },
		// query
		"SELECT (case when ActionOpportunities = 0 then -1 \
				 else cast(ActionCount as real) / ActionOpportunities \
				 end) as result, ActionOpportunities \
		 FROM	(SELECT	sum(case when flg_t_bet then 1 else 0 end) \
						 as ActionCount, \
						sum(case when true then 1 else 0 end) \
						 as ActionOpportunities \
				 FROM	player as P, %TYPE%_hand_player_statistics as S, lookup_actions l, %TYPE%_hand_summary H \
				 WHERE	S.id_player = P.id_player AND \
						H.id_hand = S.id_hand AND \
						length(H.str_aggressors_f) = 0 AND \
						H.cnt_players_t > 2 AND \
						NOT S.flg_hero AND \
						S.cnt_players between " MIN_PLAYERS_AT_TABLE " AND " MAX_PLAYERS_AT_TABLE " AND \
						S.id_gametype = %GAMETYPE% AND \
						P.id_site = %SITEID% AND \
						REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%' AND \
						l.action LIKE '%C' AND \
						S.val_p_raise_aggressor_pos != -1 AND \
						S.val_p_raise_aggressor_pos < S.position AND \
						S.id_action_p = l.id_action AND \
						S.flg_t_open_opp) foo",
				// stat_group
				pt_group_advanced
	},
#endif

#if PT4_QUERY_SUPPORT__TURN_B0_FOLD_TO_DONKBET_MW
				// PT4  query to get TURN fold to donkbet mw
	{
		PT4_QUERY_SUPPORT__TURN_B0_FOLD_TO_DONKBET_MW,
		// name
		{ "turn_b0_fold_to_donkbet_mw_op", "turn_b0_fold_to_donkbet_mw_ip" },
		// description_for_editor
		{ "Poker Tracker turn b0 fold to donkbet mw OP", "Poker Tracker fold to donkbet mw IP" },
		// query
		"SELECT (case when ActionOpportunities1 = 0 then -1 \
				 else cast(ActionCount1 as real) / ActionOpportunities1 \
				 end) as result1, ActionOpportunities1, \
				(case when ActionOpportunities2 = 0 then -1 \
				 else cast(ActionCount2 as real) / ActionOpportunities2 \
				 end) as result2, ActionOpportunities2 \
		 FROM	(SELECT	sum(case when S.position > S.val_t_bet_aggressor_pos AND (m.action = 'F' OR m.action = 'XF') then 1 else 0 end) \
						 as ActionCount1, \
						sum(case when S.position > S.val_t_bet_aggressor_pos then 1 else 0 end) \
						 as ActionOpportunities1, \
						sum(case when S.position < S.val_t_bet_aggressor_pos AND (m.action = 'F' OR m.action = 'XF') then 1 else 0 end) \
						 as ActionCount2, \
						sum(case when S.position < S.val_t_bet_aggressor_pos then 1 else 0 end) \
						 as ActionOpportunities2 \
				 FROM	player as P, %TYPE%_hand_player_statistics as S, lookup_actions l, lookup_actions m, %TYPE%_hand_summary H \
				 WHERE	S.id_player = P.id_player AND \
						H.id_hand = S.id_hand AND \
						length(H.str_aggressors_f) = 0 AND \
						H.cnt_players_t > 2 AND \
						NOT S.flg_hero AND \
						S.cnt_players between " MIN_PLAYERS_AT_TABLE " AND " MAX_PLAYERS_AT_TABLE " AND \
						S.id_gametype = %GAMETYPE% AND \
						P.id_site = %SITEID% AND \
						REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%' AND \
						S.id_action_t = m.id_action AND \
						S.id_action_p = l.id_action AND \
						amt_t_bet_facing > 0 AND \
						(flg_p_first_raise OR flg_p_face_raise) AND \
						((S.val_p_raise_aggressor_pos < S.val_t_bet_aggressor_pos AND S.val_p_raise_aggressor_pos != -1) \
						 OR (S.position < S.val_t_bet_aggressor_pos AND S.val_p_raise_aggressor_pos = -1))) foo",
				// stat_group
				pt_group_advanced
	},
#endif

#if PT4_QUERY_SUPPORT__TURN_B0_RAISE_DONKBET_MW
				// PT4  query to get raise donkbet mw on TURN 
	{
		PT4_QUERY_SUPPORT__TURN_B0_RAISE_DONKBET_MW,
		// name
		{ "turn_b0_raise_donkbet_mw_op", "turn_b0_raise_donkbet_mw_ip" },
		// description_for_editor
		{ "Poker Tracker turn b0 raise donkbet mw OP", "Poker Tracker raise donkbet mw IP" },
		// query
		"SELECT (case when ActionOpportunities1 = 0 then -1 \
				 else cast(ActionCount1 as real) / ActionOpportunities1 \
				 end) as result1, ActionOpportunities1, \
				(case when ActionOpportunities2 = 0 then -1 \
				 else cast(ActionCount2 as real) / ActionOpportunities2 \
				 end) as result2, ActionOpportunities2 \
		 FROM	(SELECT	sum(case when S.position > S.val_t_bet_aggressor_pos AND (m.action = 'R' OR m.action = 'XR') then 1 else 0 end) \
						 as ActionCount1, \
						sum(case when S.position > S.val_t_bet_aggressor_pos then 1 else 0 end) \
						 as ActionOpportunities1, \
						 sum(case when S.position < S.val_t_bet_aggressor_pos AND (m.action = 'R' OR m.action = 'XR') then 1 else 0 end) \
						 as ActionCount2, \
						 sum(case when S.position < S.val_t_bet_aggressor_pos then 1 else 0 end) \
						 as ActionOpportunities2 \
				 FROM	player as P, %TYPE%_hand_player_statistics as S, lookup_actions l, lookup_actions m, %TYPE%_hand_summary H \
				 WHERE	S.id_player = P.id_player AND \
						H.id_hand = S.id_hand AND \
						length(H.str_aggressors_f) = 0 AND \
						H.cnt_players_t > 2 AND \
						NOT S.flg_hero AND \
						S.cnt_players between " MIN_PLAYERS_AT_TABLE " AND " MAX_PLAYERS_AT_TABLE " AND \
						S.id_gametype = %GAMETYPE% AND \
						P.id_site = %SITEID% AND \
						REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%' AND \
						S.id_action_t = m.id_action AND \
						S.id_action_p = l.id_action AND \
						amt_t_bet_facing > 0 AND \
						(flg_p_first_raise OR flg_p_face_raise) AND \
						((S.val_p_raise_aggressor_pos < S.val_t_bet_aggressor_pos AND S.val_p_raise_aggressor_pos != -1) \
						 OR (S.position < S.val_t_bet_aggressor_pos AND S.val_p_raise_aggressor_pos = -1))) foo",
				// stat_group
				pt_group_advanced
	},
#endif

#if PT4_QUERY_SUPPORT__TURN_B0_FLOAT_MW
				// PT4  query to get turn float mw 
	{
		PT4_QUERY_SUPPORT__TURN_B0_FLOAT_MW,
		// name
		{ "turn_b0_float_mw" },
		// description_for_editor
		{ "Poker Tracker turn b0 float mw" },
		// query
		"SELECT (case when ActionOpportunities = 0 then -1 \
				 else cast(ActionCount as real) / ActionOpportunities \
				 end) as result, ActionOpportunities \
		 FROM	(SELECT	sum(case when flg_t_bet then 1 else 0 end) \
						 as ActionCount, \
						sum(case when true then 1 else 0 end) \
						 as ActionOpportunities \
				 FROM	player as P, %TYPE%_hand_player_statistics as S, lookup_actions l, %TYPE%_hand_summary H \
				 WHERE	S.id_player = P.id_player AND \
						H.id_hand = S.id_hand AND \
						length(H.str_aggressors_f) = 0 AND \
						H.cnt_players_t > 2 AND \
						NOT S.flg_hero AND \
						S.cnt_players between " MIN_PLAYERS_AT_TABLE " AND " MAX_PLAYERS_AT_TABLE " AND \
						S.id_gametype = %GAMETYPE% AND \
						P.id_site = %SITEID% AND \
						REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%' AND \
						l.action LIKE '%C' AND \
						S.val_p_raise_aggressor_pos > S.position AND \
						S.val_p_raise_aggressor_pos != -1 AND \
						S.id_action_p = l.id_action AND \
						S.flg_t_open_opp) foo",
				// stat_group
				pt_group_advanced
	},
#endif

#if PT4_QUERY_SUPPORT__TURN_B0_FOLD_TO_FLOAT_MW
				// PT4  query to get TURN fold to float mw
	{
		PT4_QUERY_SUPPORT__TURN_B0_FOLD_TO_FLOAT_MW,
		// name
		{ "turn_b0_fold_to_float_mw_op", "turn_b0_fold_to_float_mw_ip" },
		// description_for_editor
		{ "Poker Tracker turn b0 fold to float mw OP", "Poker Tracker fold to float mw IP" },
		// query
		"SELECT (case when ActionOpportunities1 = 0 then -1 \
				else cast(ActionCount1 as real) / ActionOpportunities1 \
				end) as result1, ActionOpportunities1, \
			(case when ActionOpportunities2 = 0 then -1 \
				else cast(ActionCount2 as real) / ActionOpportunities2 \
				end) as result2, ActionOpportunities2 \
		FROM	(SELECT	sum(case when S.position > S.val_t_bet_aggressor_pos AND (m.action = 'F' OR m.action = 'XF') then 1 else 0 end) \
						as ActionCount1, \
						sum(case when S.position > S.val_t_bet_aggressor_pos then 1 else 0 end) \
						as ActionOpportunities1, \
						sum(case when S.position < S.val_t_bet_aggressor_pos AND (m.action = 'F' OR m.action = 'XF') then 1 else 0 end) \
						as ActionCount2, \
						sum(case when S.position < S.val_t_bet_aggressor_pos then 1 else 0 end) \
						as ActionOpportunities2 \
				FROM	player as P, %TYPE%_hand_player_statistics as S, lookup_actions l, lookup_actions m, %TYPE%_hand_summary H \
				WHERE	S.id_player = P.id_player AND \
						H.id_hand = S.id_hand AND \
						length(H.str_aggressors_f) = 0 AND \
						H.cnt_players_t > 2 AND \
					NOT S.flg_hero AND \
						S.cnt_players between " MIN_PLAYERS_AT_TABLE " AND " MAX_PLAYERS_AT_TABLE " AND \
					S.id_gametype = %GAMETYPE% AND \
					P.id_site = %SITEID% AND \
					REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%' AND \
					S.id_action_t = m.id_action AND \
					S.id_action_p = l.id_action AND \
					amt_t_bet_facing > 0 AND \
					(flg_p_first_raise OR flg_p_face_raise) AND \
					((S.val_p_raise_aggressor_pos > S.val_t_bet_aggressor_pos AND S.val_p_raise_aggressor_pos != -1) \
						OR (S.position > S.val_t_bet_aggressor_pos AND S.val_p_raise_aggressor_pos = -1))) foo",
				// stat_group
				pt_group_advanced
	},
#endif

#if PT4_QUERY_SUPPORT__TURN_B0_RAISE_FLOAT_MW
				// PT4  query to get raise float mw on TURN 
	{
		PT4_QUERY_SUPPORT__TURN_B0_RAISE_FLOAT_MW,
		// name
		{ "turn_b0_raise_float_mw_op", "turn_b0_raise_float_mw_ip" },
		// description_for_editor
		{ "Poker Tracker turn b0 raise float mw OP", "Poker Tracker raise float mw IP" },
		// query
		"SELECT (case when ActionOpportunities1 = 0 then -1 \
				else cast(ActionCount1 as real) / ActionOpportunities1 \
				end) as result1, ActionOpportunities1, \
			(case when ActionOpportunities2 = 0 then -1 \
				else cast(ActionCount2 as real) / ActionOpportunities2 \
				end) as result2, ActionOpportunities2 \
		FROM	(SELECT	sum(case when S.position > S.val_t_bet_aggressor_pos AND (m.action = 'R' OR m.action = 'XR') then 1 else 0 end) \
						as ActionCount1, \
						sum(case when S.position > S.val_t_bet_aggressor_pos then 1 else 0 end) \
						as ActionOpportunities1, \
						sum(case when S.position < S.val_t_bet_aggressor_pos AND (m.action = 'R' OR m.action = 'XR') then 1 else 0 end) \
						as ActionCount2, \
						sum(case when S.position < S.val_t_bet_aggressor_pos then 1 else 0 end) \
						as ActionOpportunities2 \
				FROM	player as P, %TYPE%_hand_player_statistics as S, lookup_actions l, lookup_actions m, %TYPE%_hand_summary H \
				WHERE	S.id_player = P.id_player AND \
						H.id_hand = S.id_hand AND \
						length(H.str_aggressors_f) = 0 AND \
						H.cnt_players_t > 2 AND \
						NOT S.flg_hero AND \
						S.cnt_players between " MIN_PLAYERS_AT_TABLE " AND " MAX_PLAYERS_AT_TABLE " AND \
						S.id_gametype = %GAMETYPE% AND \
						P.id_site = %SITEID% AND \
						REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%' AND \
						S.id_action_t = m.id_action AND \
						S.id_action_f = l.id_action AND \
						amt_t_bet_facing > 0 AND \
						(flg_p_first_raise OR flg_p_face_raise) AND \
						((S.val_p_raise_aggressor_pos > S.val_t_bet_aggressor_pos AND S.val_p_raise_aggressor_pos != -1) \
							OR (S.position > S.val_t_bet_aggressor_pos AND S.val_p_raise_aggressor_pos = -1))) foo",
				// stat_group
				pt_group_advanced
	},
#endif

#if PT4_QUERY_SUPPORT__RIVER_B0_CBET_MW
				// PT4  query to get cbet mw on RIVER 
	{
		PT4_QUERY_SUPPORT__RIVER_B0_CBET_MW,
		// name
		{ "river_b0_cbet_mw" },
		// description_for_editor
		{ "Poker Tracker river b0 cbet mw" },
		// query
		"SELECT (case when ActionOpportunities1 = 0 then -1 \
				 else cast(ActionCount1 as real) / ActionOpportunities1 \
				 end) as result1, ActionOpportunities1 \
		 FROM	(SELECT	sum(case when (l.action LIKE '%B' OR l.action LIKE '%R') AND flg_r_open_opp AND flg_r_bet then 1 else 0 end) \
						 as ActionCount1, \
						sum(case when (l.action LIKE '%B' OR l.action LIKE '%R') AND flg_r_open_opp then 1 else 0 end) \
						 as ActionOpportunities1 \
				 FROM	player as P, %TYPE%_hand_player_statistics as S, lookup_actions l, %TYPE%_hand_summary H \
				 WHERE	S.id_player = P.id_player AND \
						H.id_hand = S.id_hand AND \
						length(H.str_aggressors_t) = 0 AND \
						H.cnt_players_r > 2 AND \
						NOT S.flg_hero AND \
						S.cnt_players between " MIN_PLAYERS_AT_TABLE " AND " MAX_PLAYERS_AT_TABLE " AND \
						S.id_gametype = %GAMETYPE% AND \
						P.id_site = %SITEID% AND \
						REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%' AND \
						S.id_action_f = l.id_action) foo",
				// stat_group
				pt_group_advanced
	},
#endif

#if PT4_QUERY_SUPPORT__RIVER_B0_FOLD_TO_CBET_MW
				// PT4  query to get RIVER fold to cbet mw 
	{
		PT4_QUERY_SUPPORT__RIVER_B0_FOLD_TO_CBET_MW,
		// name
		{ "river_b0_fold_to_cbet_mw" },
		// description_for_editor
		{ "Poker Tracker river b0 fold to cbet mw" },
		// query
		"SELECT (case when ActionOpportunities1 = 0 then -1 \
				 else cast(ActionCount1 as real) / ActionOpportunities1 \
				 end) as result1, ActionOpportunities1 \
		 FROM	(SELECT	sum(case when (m.action = 'XF' or m.action = 'F') then 1 else 0 end) \
						 as ActionCount1, \
						count(*) \
						 as ActionOpportunities1 \
				 FROM	player as P, %TYPE%_hand_player_statistics as S, lookup_actions l, lookup_actions m, %TYPE%_hand_summary H \
				 WHERE	S.id_player = P.id_player AND \
						H.id_hand = S.id_hand AND \
						length(H.str_aggressors_t) = 0 AND \
						H.cnt_players_r > 2 AND \
						NOT S.flg_hero AND \
						S.cnt_players between " MIN_PLAYERS_AT_TABLE " AND " MAX_PLAYERS_AT_TABLE " AND \
						S.id_gametype = %GAMETYPE% AND \
						P.id_site = %SITEID% AND \
						REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%' AND \
						S.id_action_r = m.id_action AND \
						S.id_action_f = l.id_action AND \
						l.action like '%C' AND \
						S.amt_r_bet_facing > 0 AND \
						((S.val_f_bet_aggressor_pos = S.val_r_bet_aggressor_pos AND S.val_f_bet_aggressor_pos != -1 AND S.val_f_raise_aggressor_pos = -1) \
						 OR(S.val_f_raise_aggressor_pos = S.val_r_bet_aggressor_pos AND S.val_f_raise_aggressor_pos != -1))) foo",
				// stat_group
				pt_group_advanced
	},
#endif

#if PT4_QUERY_SUPPORT__RIVER_B0_RAISE_CBET_MW
				// PT4  query to get raise cbet mw on RIVER 
	{
		PT4_QUERY_SUPPORT__RIVER_B0_RAISE_CBET_MW,
		// name
		{ "river_b0_raise_cbet_mw" },
		// description_for_editor
		{ "Poker Tracker river b0 raise cbet mw" },
		// query
		"SELECT (case when ActionOpportunities1 = 0 then -1 \
				 else cast(ActionCount1 as real) / ActionOpportunities1 \
				 end) as result1, ActionOpportunities1 \
		 FROM	(SELECT	sum(case when (substring(m.action from 1 for 1) = 'R' or substring(m.action from 1 for 2) = 'XR') then 1 else 0 end) \
						 as ActionCount1, \
						count(*) \
						 as ActionOpportunities1 \
				 FROM	player as P, %TYPE%_hand_player_statistics as S, lookup_actions l, lookup_actions m, %TYPE%_hand_summary H \
				 WHERE	S.id_player = P.id_player AND \
						H.id_hand = S.id_hand AND \
						length(H.str_aggressors_t) = 0 AND \
						H.cnt_players_r > 2 AND \
						NOT S.flg_hero AND \
						S.cnt_players between " MIN_PLAYERS_AT_TABLE " AND " MAX_PLAYERS_AT_TABLE " AND \
						S.id_gametype = %GAMETYPE% AND \
						P.id_site = %SITEID% AND \
						REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%' AND \
						S.id_action_r = m.id_action AND \
						S.id_action_f = l.id_action AND \
						l.action like '%C' AND \
						S.amt_r_bet_facing > 0 AND \
						((S.val_f_bet_aggressor_pos = S.val_r_bet_aggressor_pos AND S.val_f_bet_aggressor_pos != -1 AND S.val_f_raise_aggressor_pos = -1) \
						 OR(S.val_f_raise_aggressor_pos = S.val_r_bet_aggressor_pos AND S.val_f_raise_aggressor_pos != -1))) foo",
				// stat_group
				pt_group_advanced
	},
#endif

#if PT4_QUERY_SUPPORT__RIVER_B0_DONKBET_MW
				// PT4  query to get RIVER donkbet mw 
	{
		PT4_QUERY_SUPPORT__RIVER_B0_DONKBET_MW,
		// name
		{ "river_b0_donkbet_mw" },
		// description_for_editor
		{ "Poker Tracker river b0 donkbet mw" },
		// query
		"SELECT (case when ActionOpportunities = 0 then -1 \
				 else cast(ActionCount as real) / ActionOpportunities \
				 end) as result, ActionOpportunities \
		 FROM	(SELECT	sum(case when flg_r_bet then 1 else 0 end) \
						 as ActionCount, \
						sum(case when true then 1 else 0 end) \
						 as ActionOpportunities \
				 FROM	player as P, %TYPE%_hand_player_statistics as S, lookup_actions l, %TYPE%_hand_summary H \
				 WHERE	S.id_player = P.id_player AND \
						H.id_hand = S.id_hand AND \
						length(H.str_aggressors_t) = 0 AND \
						H.cnt_players_r > 2 AND \
						NOT S.flg_hero AND \
						S.cnt_players between " MIN_PLAYERS_AT_TABLE " AND " MAX_PLAYERS_AT_TABLE " AND \
						S.id_gametype = %GAMETYPE% AND \
						P.id_site = %SITEID% AND \
						REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%' AND \
						l.action LIKE '%C' AND \
						((S.val_f_raise_aggressor_pos != -1 AND S.val_f_raise_aggressor_pos < S.position) \
						OR (S.val_f_raise_aggressor_pos = -1 AND S.val_f_bet_aggressor_pos < S.position)) AND \
						S.id_action_f = l.id_action AND \
						S.flg_r_open_opp) foo",
				// stat_group
				pt_group_advanced
	},
#endif

#if PT4_QUERY_SUPPORT__RIVER_B0_FOLD_TO_DONKBET_MW
				// PT4  query to get RIVER fold to donkbet mw
	{
		PT4_QUERY_SUPPORT__RIVER_B0_FOLD_TO_DONKBET_MW,
		// name
		{ "river_b0_fold_to_donkbet_mw_op", "river_b0_fold_to_donkbet_mw_ip" },
		// description_for_editor
		{ "Poker Tracker river b0 fold to donkbet mw OP", "Poker Tracker fold to donkbet mw IP" },
		// query
		"SELECT (case when ActionOpportunities1 = 0 then -1 \
				 else cast(ActionCount1 as real) / ActionOpportunities1 \
				 end) as result1, ActionOpportunities1, \
				(case when ActionOpportunities2 = 0 then -1 \
				 else cast(ActionCount2 as real) / ActionOpportunities2 \
				 end) as result2, ActionOpportunities2 \
		 FROM	(SELECT	sum(case when S.position > S.val_r_bet_aggressor_pos AND (m.action = 'F' OR m.action = 'XF') then 1 else 0 end) \
						 as ActionCount1, \
						sum(case when S.position > S.val_r_bet_aggressor_pos then 1 else 0 end) \
						 as ActionOpportunities1, \
						sum(case when S.position < S.val_r_bet_aggressor_pos AND (m.action = 'F' OR m.action = 'XF') then 1 else 0 end) \
						 as ActionCount2, \
						sum(case when S.position < S.val_r_bet_aggressor_pos then 1 else 0 end) \
						 as ActionOpportunities2 \
				 FROM	player as P, %TYPE%_hand_player_statistics as S, lookup_actions l, lookup_actions m, %TYPE%_hand_summary H \
				 WHERE	S.id_player = P.id_player AND \
						H.id_hand = S.id_hand AND \
						length(H.str_aggressors_t) = 0 AND \
						H.cnt_players_r > 2 AND \
						NOT S.flg_hero AND \
						S.cnt_players between " MIN_PLAYERS_AT_TABLE " AND " MAX_PLAYERS_AT_TABLE " AND \
						S.id_gametype = %GAMETYPE% AND \
						P.id_site = %SITEID% AND \
						REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%' AND \
						S.id_action_r = m.id_action AND \
						S.id_action_f = l.id_action AND \
						amt_r_bet_facing > 0 AND \
						(flg_f_bet OR cnt_f_raise > 0 OR cnt_f_call > 0) AND \
						((l.action like '%R' AND S.position < S.val_r_bet_aggressor_pos) \
						 OR(l.action like '%B' AND S.position < S.val_r_bet_aggressor_pos) \
						 OR(l.action like '%C' AND S.val_f_bet_aggressor_pos < S.val_r_bet_aggressor_pos AND S.val_f_bet_aggressor_pos != -1 AND S.val_f_raise_aggressor_pos = -1) \
						 OR(l.action like '%C' AND S.val_f_raise_aggressor_pos < S.val_r_bet_aggressor_pos AND S.val_f_raise_aggressor_pos != -1))) foo",
				// stat_group
				pt_group_advanced
	},
#endif

#if PT4_QUERY_SUPPORT__RIVER_B0_RAISE_DONKBET_MW
				// PT4  query to get raise donkbet mw on RIVER 
	{
		PT4_QUERY_SUPPORT__RIVER_B0_RAISE_DONKBET_MW,
		// name
		{ "river_b0_raise_donkbet_mw_op", "river_b0_raise_donkbet_mw_ip" },
		// description_for_editor
		{ "Poker Tracker river b0 raise donkbet mw OP", "Poker Tracker raise donkbet mw IP" },
		// query
		"SELECT (case when ActionOpportunities1 = 0 then -1 \
				 else cast(ActionCount1 as real) / ActionOpportunities1 \
				 end) as result1, ActionOpportunities1, \
				(case when ActionOpportunities2 = 0 then -1 \
				 else cast(ActionCount2 as real) / ActionOpportunities2 \
				 end) as result2, ActionOpportunities2 \
		 FROM	(SELECT	sum(case when S.position > S.val_r_bet_aggressor_pos AND (m.action = 'R' OR m.action = 'XR') then 1 else 0 end) \
						 as ActionCount1, \
						sum(case when S.position > S.val_r_bet_aggressor_pos then 1 else 0 end) \
						 as ActionOpportunities1, \
						sum(case when S.position < S.val_r_bet_aggressor_pos AND (m.action = 'R' OR m.action = 'XR') then 1 else 0 end) \
						 as ActionCount2, \
						sum(case when S.position < S.val_r_bet_aggressor_pos then 1 else 0 end) \
						 as ActionOpportunities2 \
				 FROM	player as P, %TYPE%_hand_player_statistics as S, lookup_actions l, lookup_actions m, %TYPE%_hand_summary H \
				 WHERE	S.id_player = P.id_player AND \
						H.id_hand = S.id_hand AND \
						length(H.str_aggressors_t) = 0 AND \
						H.cnt_players_r > 2 AND \
						NOT S.flg_hero AND \
						S.cnt_players between " MIN_PLAYERS_AT_TABLE " AND " MAX_PLAYERS_AT_TABLE " AND \
						S.id_gametype = %GAMETYPE% AND \
						P.id_site = %SITEID% AND \
						REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%' AND \
						S.id_action_r = m.id_action AND \
						S.id_action_f = l.id_action AND \
						amt_r_bet_facing > 0 AND \
						(flg_f_bet OR cnt_f_raise > 0 OR cnt_f_call > 0) AND \
						((l.action like '%R' AND S.position < S.val_r_bet_aggressor_pos) \
						 OR(l.action like '%B' AND S.position < S.val_r_bet_aggressor_pos) \
						 OR(l.action like '%C' AND S.val_f_bet_aggressor_pos < S.val_r_bet_aggressor_pos AND S.val_f_bet_aggressor_pos != -1 AND S.val_f_raise_aggressor_pos = -1) \
						 OR(l.action like '%C' AND S.val_f_raise_aggressor_pos < S.val_r_bet_aggressor_pos AND S.val_f_raise_aggressor_pos != -1))) foo",
				// stat_group
				pt_group_advanced
	},
#endif

#if PT4_QUERY_SUPPORT__RIVER_B0_FLOAT_MW
				// PT4  query to get river float mw 
	{
		PT4_QUERY_SUPPORT__RIVER_B0_FLOAT_MW,
		// name
		{ "river_b0_float_mw" },
		// description_for_editor
		{ "Poker Tracker river b0 float mw" },
		// query
		"SELECT (case when ActionOpportunities = 0 then -1 \
				 else cast(ActionCount as real) / ActionOpportunities \
				 end) as result, ActionOpportunities \
		 FROM	(SELECT	sum(case when flg_r_bet then 1 else 0 end) \
						 as ActionCount, \
						sum(case when true then 1 else 0 end) \
						 as ActionOpportunities \
				 FROM	player as P, %TYPE%_hand_player_statistics as S, lookup_actions l, %TYPE%_hand_summary H \
				 WHERE	S.id_player = P.id_player AND \
						H.id_hand = S.id_hand AND \
						length(H.str_aggressors_t) = 0 AND \
						H.cnt_players_r > 2 AND \
						NOT S.flg_hero AND \
						S.cnt_players between " MIN_PLAYERS_AT_TABLE " AND " MAX_PLAYERS_AT_TABLE " AND \
						S.id_gametype = %GAMETYPE% AND \
						P.id_site = %SITEID% AND \
						REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%' AND \
						l.action LIKE '%C' AND \
						((S.val_f_raise_aggressor_pos != -1 AND S.val_f_raise_aggressor_pos > S.position) \
						OR (S.val_f_raise_aggressor_pos = -1 AND S.val_f_bet_aggressor_pos > S.position)) AND \
						S.id_action_f = l.id_action AND \
						S.flg_r_open_opp) foo",
				// stat_group
				pt_group_advanced
	},
#endif

#if PT4_QUERY_SUPPORT__RIVER_B0_FOLD_TO_FLOAT_MW
				// PT4  query to get RIVER fold to float mw
	{
		PT4_QUERY_SUPPORT__RIVER_B0_FOLD_TO_FLOAT_MW,
		// name
		{ "river_b0_fold_to_float_mw_op", "river_b0_fold_to_float_mw_ip" },
		// description_for_editor
		{ "Poker Tracker river b0 fold to float mw OP", "Poker Tracker fold to float mw IP" },
		// query
		"SELECT (case when ActionOpportunities1 = 0 then -1 \
				else cast(ActionCount1 as real) / ActionOpportunities1 \
				end) as result1, ActionOpportunities1, \
			(case when ActionOpportunities2 = 0 then -1 \
				else cast(ActionCount2 as real) / ActionOpportunities2 \
				end) as result2, ActionOpportunities2 \
		FROM	(SELECT	sum(case when S.position > S.val_r_bet_aggressor_pos AND (m.action = 'F' OR m.action = 'XF') then 1 else 0 end) \
						as ActionCount1, \
						sum(case when S.position > S.val_r_bet_aggressor_pos then 1 else 0 end) \
						as ActionOpportunities1, \
						sum(case when S.position < S.val_r_bet_aggressor_pos AND (m.action = 'F' OR m.action = 'XF') then 1 else 0 end) \
						as ActionCount2, \
						sum(case when S.position < S.val_r_bet_aggressor_pos then 1 else 0 end) \
						as ActionOpportunities2 \
				FROM	player as P, %TYPE%_hand_player_statistics as S, lookup_actions l, lookup_actions m, %TYPE%_hand_summary H \
				WHERE	S.id_player = P.id_player AND \
						H.id_hand = S.id_hand AND \
						length(H.str_aggressors_t) = 0 AND \
						H.cnt_players_r > 2 AND \
						NOT S.flg_hero AND \
						S.cnt_players between " MIN_PLAYERS_AT_TABLE " AND " MAX_PLAYERS_AT_TABLE " AND \
						S.id_gametype = %GAMETYPE% AND \
						P.id_site = %SITEID% AND \
						REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%' AND \
						S.id_action_r = m.id_action AND \
						S.id_action_f = l.id_action AND \
						amt_r_bet_facing > 0 AND \
						(flg_f_bet OR cnt_f_raise > 0 OR cnt_f_call > 0) AND \
						((l.action like '%R' AND S.position > S.val_r_bet_aggressor_pos) \
						OR(l.action like '%B' AND S.position > S.val_r_bet_aggressor_pos) \
						OR(l.action like '%C' AND S.val_f_bet_aggressor_pos > S.val_r_bet_aggressor_pos AND S.val_f_bet_aggressor_pos != -1 AND S.val_f_raise_aggressor_pos = -1) \
						OR(l.action like '%C' AND S.val_f_raise_aggressor_pos > S.val_r_bet_aggressor_pos AND S.val_f_raise_aggressor_pos != -1))) foo",
				// stat_group
				pt_group_advanced
	},
#endif

#if PT4_QUERY_SUPPORT__RIVER_B0_RAISE_FLOAT_MW
				// PT4  query to get raise float mw on RIVER 
	{
		PT4_QUERY_SUPPORT__RIVER_B0_RAISE_FLOAT_MW,
		// name
		{ "river_b0_raise_float_mw_op", "river_b0_raise_float_mw_ip" },
		// description_for_editor
		{ "Poker Tracker river b0 raise float mw OP", "Poker Tracker raise float mw IP" },
		// query
		"SELECT (case when ActionOpportunities1 = 0 then -1 \
				else cast(ActionCount1 as real) / ActionOpportunities1 \
				end) as result1, ActionOpportunities1, \
			(case when ActionOpportunities2 = 0 then -1 \
				else cast(ActionCount2 as real) / ActionOpportunities2 \
				end) as result2, ActionOpportunities2 \
		FROM	(SELECT	sum(case when S.position > S.val_r_bet_aggressor_pos AND (m.action = 'R' OR m.action = 'XR') then 1 else 0 end) \
						as ActionCount1, \
						sum(case when S.position > S.val_r_bet_aggressor_pos then 1 else 0 end) \
						as ActionOpportunities1, \
						sum(case when S.position < S.val_r_bet_aggressor_pos AND (m.action = 'R' OR m.action = 'XR') then 1 else 0 end) \
						as ActionCount2, \
						sum(case when S.position < S.val_r_bet_aggressor_pos then 1 else 0 end) \
						as ActionOpportunities2 \
				FROM	player as P, %TYPE%_hand_player_statistics as S, lookup_actions l, lookup_actions m, %TYPE%_hand_summary H \
				WHERE	S.id_player = P.id_player AND \
						H.id_hand = S.id_hand AND \
						length(H.str_aggressors_t) = 0 AND \
						H.cnt_players_r > 2 AND \
						NOT S.flg_hero AND \
						S.cnt_players between " MIN_PLAYERS_AT_TABLE " AND " MAX_PLAYERS_AT_TABLE " AND \
						S.id_gametype = %GAMETYPE% AND \
						P.id_site = %SITEID% AND \
						REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%' AND \
						S.id_action_r = m.id_action AND \
						S.id_action_f = l.id_action AND \
						amt_r_bet_facing > 0 AND \
						(flg_f_bet OR cnt_f_raise > 0 OR cnt_f_call > 0) AND \
						((l.action like '%R' AND S.position > S.val_r_bet_aggressor_pos) \
						OR(l.action like '%B' AND S.position > S.val_r_bet_aggressor_pos) \
						OR(l.action like '%C' AND S.val_f_bet_aggressor_pos > S.val_r_bet_aggressor_pos AND S.val_f_bet_aggressor_pos != -1 AND S.val_f_raise_aggressor_pos = -1) \
						OR(l.action like '%C' AND S.val_f_raise_aggressor_pos > S.val_r_bet_aggressor_pos AND S.val_f_raise_aggressor_pos != -1))) foo",
				// stat_group
				pt_group_advanced
	},
#endif

				//
				// START B1
				//

#if PT4_QUERY_SUPPORT__FLOP_B1_CBET
				// PT4  query to get cbet on FLOP 
	{
		PT4_QUERY_SUPPORT__FLOP_B1_CBET,
		// name
		{ "flop_b1_cbet_op", "flop_b1_cbet_ip" },
		// description_for_editor
		{ "Poker Tracker flop b1 cbet OP", "Poker Tracker flop b1 cbet IP" },
		// query
		"SELECT (case when ActionOpportunities1 = 0 then -1 \
				 else cast(ActionCount1 as real) / ActionOpportunities1 \
				 end) as result1, ActionOpportunities1, \
				(case when ActionOpportunities2 = 0 then -1 \
				 else cast(ActionCount2 as real) / ActionOpportunities2 \
				 end) as result2, ActionOpportunities2 \
		 FROM	(SELECT	sum(case when l.action LIKE '%R' AND flg_f_open_opp AND flg_f_first AND flg_f_bet then 1 else 0 end) \
						 as ActionCount1, \
						sum(case when l.action LIKE '%R' AND flg_f_open_opp AND flg_f_first then 1 else 0 end) \
						 as ActionOpportunities1, \
						 sum(case when l.action LIKE '%R' AND flg_f_open_opp AND flg_f_has_position AND flg_f_bet then 1 else 0 end) \
						 as ActionCount2, \
						 sum(case when l.action LIKE '%R' AND flg_f_open_opp AND flg_f_has_position then 1 else 0 end) \
						 as ActionOpportunities2 \
				 FROM	player as P, %TYPE%_hand_player_statistics as S, lookup_actions l, %TYPE%_hand_summary H \
				 WHERE	S.id_player = P.id_player AND \
						H.id_hand = S.id_hand AND \
						length(H.str_aggressors_p) = 2 AND \
						H.cnt_players_f = 2 AND \
						NOT S.flg_hero AND \
						S.cnt_players between " MIN_PLAYERS_AT_TABLE " AND " MAX_PLAYERS_AT_TABLE " AND \
						S.id_gametype = %GAMETYPE% AND \
						P.id_site = %SITEID% AND \
						REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%' AND \
						S.id_action_p = l.id_action) foo",
				// stat_group
				pt_group_advanced
	},
#endif

#if PT4_QUERY_SUPPORT__FLOP_B1_FOLD_TO_CBET
				// PT4  query to get FLOP fold to cbet 
	{
		PT4_QUERY_SUPPORT__FLOP_B1_FOLD_TO_CBET,
		// name
		{ "flop_b1_fold_to_cbet_op", "flop_b1_fold_to_cbet_ip" },
		// description_for_editor
		{ "Poker Tracker flop b1 fold to cbet OP","Poker Tracker flop b1 fold to cbet IP" },
		// query
		"SELECT (case when ActionOpportunities1 = 0 then -1 \
				 else cast(ActionCount1 as real) / ActionOpportunities1 \
				 end) as result1, ActionOpportunities1, \
				(case when ActionOpportunities2 = 0 then -1 \
				 else cast(ActionCount2 as real) / ActionOpportunities2 \
				 end) as result2, ActionOpportunities2 \
		 FROM	(SELECT	sum(case when S.position > S.val_f_bet_aggressor_pos AND (m.action = 'XF' or m.action = 'F') then 1 else 0 end) \
						 as ActionCount1, \
						sum(case when S.position > S.val_f_bet_aggressor_pos then 1 else 0 end) \
						 as ActionOpportunities1, \
						 sum(case when S.position < S.val_f_bet_aggressor_pos AND (m.action = 'XF' or m.action = 'F') then 1 else 0 end) \
						 as ActionCount2, \
						 sum(case when S.position < S.val_f_bet_aggressor_pos then 1 else 0 end) \
						 as ActionOpportunities2 \
				 FROM	player as P, %TYPE%_hand_player_statistics as S, lookup_actions m, %TYPE%_hand_summary H \
				 WHERE	S.id_player = P.id_player AND \
						H.id_hand = S.id_hand AND \
						length(H.str_aggressors_p) = 2 AND \
						H.cnt_players_f = 2 AND \
						NOT S.flg_hero AND \
						S.cnt_players between " MIN_PLAYERS_AT_TABLE " AND " MAX_PLAYERS_AT_TABLE " AND \
						S.id_gametype = %GAMETYPE% AND \
						P.id_site = %SITEID% AND \
						REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%' AND \
						S.id_action_f = m.id_action AND \
						S.val_p_raise_aggressor_pos = S.val_f_bet_aggressor_pos AND \
						S.val_f_bet_aggressor_pos != -1 AND \
						S.amt_f_raise_facing = 0) foo",
				// stat_group
				pt_group_advanced
	},
#endif

#if PT4_QUERY_SUPPORT__FLOP_B1_RAISE_CBET
				// PT4  query to get raise cbet on FLOP 
	{
		PT4_QUERY_SUPPORT__FLOP_B1_RAISE_CBET,
		// name
		{ "flop_b1_raise_cbet_op", "flop_b1_raise_cbet_ip" },
		// description_for_editor
		{ "Poker Tracker flop b1 raise cbet OP","Poker Tracker flop b1 raise cbet IP" },
		// query
		"SELECT (case when ActionOpportunities1 = 0 then -1 \
				 else cast(ActionCount1 as real) / ActionOpportunities1 \
				 end) as result1, ActionOpportunities1, \
				(case when ActionOpportunities2 = 0 then -1 \
				 else cast(ActionCount2 as real) / ActionOpportunities2 \
				 end) as result2, ActionOpportunities2 \
		 FROM	(SELECT	sum(case when S.position > S.val_f_bet_aggressor_pos AND (substring(m.action from 1 for 1) = 'R' or substring(m.action from 1 for 2) = 'XR') then 1 else 0 end) \
						 as ActionCount1, \
						sum(case when S.position > S.val_f_bet_aggressor_pos then 1 else 0 end) \
						 as ActionOpportunities1, \
						 sum(case when S.position < S.val_f_bet_aggressor_pos AND (substring(m.action from 1 for 1) = 'R' or substring(m.action from 1 for 2) = 'XR') then 1 else 0 end) \
						 as ActionCount2, \
						 sum(case when S.position < S.val_f_bet_aggressor_pos then 1 else 0 end) \
						 as ActionOpportunities2 \
				 FROM	player as P, %TYPE%_hand_player_statistics as S, lookup_actions m, %TYPE%_hand_summary H \
				 WHERE	S.id_player = P.id_player AND \
						H.id_hand = S.id_hand AND \
						length(H.str_aggressors_p) = 2 AND \
						H.cnt_players_f = 2 AND \
						NOT S.flg_hero AND \
						S.cnt_players between " MIN_PLAYERS_AT_TABLE " AND " MAX_PLAYERS_AT_TABLE " AND \
						S.id_gametype = %GAMETYPE% AND \
						P.id_site = %SITEID% AND \
						REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%' AND \
						S.id_action_f = m.id_action AND \
						S.val_p_raise_aggressor_pos = S.val_f_bet_aggressor_pos AND \
						S.val_f_bet_aggressor_pos != -1 AND \
						S.amt_f_raise_facing = 0) foo",
				// stat_group
				pt_group_advanced
	},
#endif

#if PT4_QUERY_SUPPORT__FLOP_B1_DONKBET
				// PT4  query to get FLOP donkbet 
	{
		PT4_QUERY_SUPPORT__FLOP_B1_DONKBET,
		// name
		{ "flop_b1_donkbet" },
		// description_for_editor
		{ "Poker Tracker flop b1 donkbet" },
		// query
		"SELECT (case when ActionOpportunities = 0 then -1 \
				 else cast(ActionCount as real) / ActionOpportunities \
				 end) as result, ActionOpportunities \
		 FROM	(SELECT	sum(case when flg_f_bet then 1 else 0 end) \
						 as ActionCount, \
						sum(case when true then 1 else 0 end) \
						 as ActionOpportunities \
				 FROM	player as P, %TYPE%_hand_player_statistics as S, lookup_actions l, %TYPE%_hand_summary H \
				 WHERE	S.id_player = P.id_player AND \
						H.id_hand = S.id_hand AND \
						length(H.str_aggressors_p) = 2 AND \
						H.cnt_players_f = 2 AND \
						NOT S.flg_hero AND \
						S.cnt_players between " MIN_PLAYERS_AT_TABLE " AND " MAX_PLAYERS_AT_TABLE " AND \
						S.id_gametype = %GAMETYPE% AND \
						P.id_site = %SITEID% AND \
						REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%' AND \
						S.val_p_raise_aggressor_pos < S.position AND \
						S.val_p_raise_aggressor_pos != -1 AND \
						l.action LIKE '%C' AND \
						S.id_action_p = l.id_action AND \
						S.flg_f_open_opp) foo",
				// stat_group
				pt_group_advanced
	},
#endif

#if PT4_QUERY_SUPPORT__FLOP_B1_FOLD_TO_DONKBET
				// PT4  query to get FLOP fold to donkbet
	{
		PT4_QUERY_SUPPORT__FLOP_B1_FOLD_TO_DONKBET,
		// name
		{ "flop_b1_fold_to_donkbet" },
		// description_for_editor
		{ "Poker Tracker flop b1 fold to donkbet" },
		// query
		"SELECT (case when ActionOpportunities1 = 0 then -1 \
				 else cast(ActionCount1 as real) / ActionOpportunities1 \
				 end) as result1, ActionOpportunities1 \
		 FROM	(SELECT	sum(case when (m.action = 'F' OR m.action = 'XF') then 1 else 0 end) \
						 as ActionCount1, \
						count(*) \
						 as ActionOpportunities1 \
				 FROM	player as P, %TYPE%_hand_player_statistics as S, lookup_actions m, %TYPE%_hand_summary H \
				 WHERE	S.id_player = P.id_player AND \
						H.id_hand = S.id_hand AND \
						length(H.str_aggressors_p) = 2 AND \
						H.cnt_players_f = 2 AND \
						NOT S.flg_hero AND \
						S.cnt_players between " MIN_PLAYERS_AT_TABLE " AND " MAX_PLAYERS_AT_TABLE " AND \
						S.id_gametype = %GAMETYPE% AND \
						P.id_site = %SITEID% AND \
						REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%' AND \
						S.id_action_f = m.id_action AND \
						amt_f_bet_facing > 0 AND \
						(flg_p_first_raise OR flg_p_face_raise) AND \
						((S.val_p_raise_aggressor_pos < S.val_f_bet_aggressor_pos AND S.val_p_raise_aggressor_pos != -1) \
						 OR (S.position < S.val_f_bet_aggressor_pos AND S.val_p_raise_aggressor_pos = -1))) foo",
				// stat_group
				pt_group_advanced
	},
#endif

#if PT4_QUERY_SUPPORT__FLOP_B1_RAISE_DONKBET
				// PT4  query to get raise donkbet on FLOP 
	{
		PT4_QUERY_SUPPORT__FLOP_B1_RAISE_DONKBET,
		// name
		{ "flop_b1_raise_donkbet" },
		// description_for_editor
		{ "Poker Tracker flop b1 raise donkbet" },
		// query
		"SELECT (case when ActionOpportunities1 = 0 then -1 \
				 else cast(ActionCount1 as real) / ActionOpportunities1 \
				 end) as result1, ActionOpportunities1 \
		 FROM	(SELECT	sum(case when (m.action = 'R' OR m.action = 'XR') then 1 else 0 end) \
						 as ActionCount1, \
						count(*) \
						 as ActionOpportunities1 \
				 FROM	player as P, %TYPE%_hand_player_statistics as S, lookup_actions m, %TYPE%_hand_summary H \
				 WHERE	S.id_player = P.id_player AND \
						H.id_hand = S.id_hand AND \
						length(H.str_aggressors_p) = 2 AND \
						H.cnt_players_f = 2 AND \
						NOT S.flg_hero AND \
						S.cnt_players between " MIN_PLAYERS_AT_TABLE " AND " MAX_PLAYERS_AT_TABLE " AND \
						S.id_gametype = %GAMETYPE% AND \
						P.id_site = %SITEID% AND \
						REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%' AND \
						S.id_action_f = m.id_action AND \
						amt_f_bet_facing > 0 AND \
						(flg_p_first_raise OR flg_p_face_raise) AND \
						((S.val_p_raise_aggressor_pos < S.val_f_bet_aggressor_pos AND S.val_p_raise_aggressor_pos != -1) \
						 OR (S.position < S.val_f_bet_aggressor_pos AND S.val_p_raise_aggressor_pos = -1))) foo",
				pt_group_advanced
	},
#endif

#if PT4_QUERY_SUPPORT__FLOP_B1_FLOAT
				// PT4  query to get flop float 
	{
		PT4_QUERY_SUPPORT__FLOP_B1_FLOAT,
		// name
		{ "flop_b1_float" },
		// description_for_editor
		{ "Poker Tracker flop b1 float" },
		// query
		"SELECT (case when ActionOpportunities = 0 then -1 \
				 else cast(ActionCount as real) / ActionOpportunities \
				 end) as result, ActionOpportunities \
		 FROM	(SELECT	sum(case when flg_f_bet then 1 else 0 end) \
						 as ActionCount, \
						sum(case when true then 1 else 0 end) \
						 as ActionOpportunities \
				 FROM	player as P, %TYPE%_hand_player_statistics as S, lookup_actions l, %TYPE%_hand_summary H \
				 WHERE	S.id_player = P.id_player AND \
						H.id_hand = S.id_hand AND \
						length(H.str_aggressors_p) = 2 AND \
						H.cnt_players_f = 2 AND \
						NOT S.flg_hero AND \
						S.cnt_players between " MIN_PLAYERS_AT_TABLE " AND " MAX_PLAYERS_AT_TABLE " AND \
						S.id_gametype = %GAMETYPE% AND \
						P.id_site = %SITEID% AND \
						REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%' AND \
						S.val_p_raise_aggressor_pos > S.position AND \
						S.val_p_raise_aggressor_pos != -1 AND \
						l.action LIKE '%C' AND \
						S.id_action_p = l.id_action AND \
						S.flg_f_open_opp) foo",
				// stat_group
				pt_group_advanced
	},
#endif

#if PT4_QUERY_SUPPORT__FLOP_B1_FOLD_TO_FLOAT
				// PT4  query to get FLOP fold to float
	{
		PT4_QUERY_SUPPORT__FLOP_B1_FOLD_TO_FLOAT,
		// name
		{ "flop_b1_fold_to_float" },
		// description_for_editor
		{ "Poker Tracker flop b1 fold to float" },
		// query
		"SELECT (case when ActionOpportunities1 = 0 then -1 \
				 else cast(ActionCount1 as real) / ActionOpportunities1 \
				 end) as result1, ActionOpportunities1 \
		 FROM	(SELECT	sum(case when (m.action = 'F' OR m.action = 'XF') then 1 else 0 end) \
						 as ActionCount1, \
						count(*) \
						 as ActionOpportunities1 \
				 FROM	player as P, %TYPE%_hand_player_statistics as S, lookup_actions m, %TYPE%_hand_summary H \
				 WHERE	S.id_player = P.id_player AND \
						H.id_hand = S.id_hand AND \
						length(H.str_aggressors_p) = 2 AND \
						H.cnt_players_f = 2 AND \
						NOT S.flg_hero AND \
						S.cnt_players between " MIN_PLAYERS_AT_TABLE " AND " MAX_PLAYERS_AT_TABLE " AND \
						S.id_gametype = %GAMETYPE% AND \
						P.id_site = %SITEID% AND \
						REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%' AND \
						S.id_action_f = m.id_action AND \
						amt_f_bet_facing > 0 AND \
						(flg_p_first_raise OR flg_p_face_raise) AND \
						((S.val_p_raise_aggressor_pos > S.val_f_bet_aggressor_pos AND S.val_p_raise_aggressor_pos != -1) \
						 OR (S.position > S.val_f_bet_aggressor_pos AND S.val_p_raise_aggressor_pos = -1))) foo",
				// stat_group
				pt_group_advanced
	},
#endif

#if PT4_QUERY_SUPPORT__FLOP_B1_RAISE_FLOAT
				// PT4  query to get raise float on FLOP 
	{
		PT4_QUERY_SUPPORT__FLOP_B1_RAISE_FLOAT,
		// name
		{ "flop_b1_raise_float" },
		// description_for_editor
		{ "Poker Tracker flop b1 raise float" },
		// query
		"SELECT (case when ActionOpportunities1 = 0 then -1 \
				else cast(ActionCount1 as real) / ActionOpportunities1 \
				end) as result1, ActionOpportunities1 \
		FROM	(SELECT	sum(case when (substring(m.action from 1 for 1) = 'R' OR substring(m.action from 1 for 2) = 'XR') then 1 else 0 end) \
						as ActionCount1, \
						count(*) \
						as ActionOpportunities1 \
				FROM	player as P, %TYPE%_hand_player_statistics as S, lookup_actions m, %TYPE%_hand_summary H \
				WHERE	S.id_player = P.id_player AND \
						H.id_hand = S.id_hand AND \
						length(H.str_aggressors_p) = 2 AND \
						H.cnt_players_f = 2 AND \
						NOT S.flg_hero AND \
						S.cnt_players between " MIN_PLAYERS_AT_TABLE " AND " MAX_PLAYERS_AT_TABLE " AND \
						S.id_gametype = %GAMETYPE% AND \
						P.id_site = %SITEID% AND \
						REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%' AND \
						S.id_action_f = m.id_action AND \
						amt_f_bet_facing > 0 AND \
						(flg_p_first_raise OR flg_p_face_raise) AND \
						((S.val_p_raise_aggressor_pos > S.val_f_bet_aggressor_pos AND S.val_p_raise_aggressor_pos != -1) \
						OR (S.position > S.val_f_bet_aggressor_pos AND S.val_p_raise_aggressor_pos = -1))) foo",
				// stat_group
				pt_group_advanced
	},
#endif

#if PT4_QUERY_SUPPORT__TURN_B1_CBET
				// PT4  query to get cbet on TURN 
	{
		PT4_QUERY_SUPPORT__TURN_B1_CBET,
		// name
		{ "turn_b1_cbet_op", "turn_b1_cbet_ip" },
		// description_for_editor
		{ "Poker Tracker turn b1 cbet OP", "Poker Tracker turn b1 cbet IP" },
		// query
		"SELECT (case when ActionOpportunities1 = 0 then -1 \
				 else cast(ActionCount1 as real) / ActionOpportunities1 \
				 end) as result1, ActionOpportunities1, \
				(case when ActionOpportunities2 = 0 then -1 \
				 else cast(ActionCount2 as real) / ActionOpportunities2 \
				 end) as result2, ActionOpportunities2 \
		 FROM	(SELECT	sum(case when (l.action LIKE '%B' OR l.action LIKE '%R') AND flg_t_open_opp AND flg_t_first AND flg_t_bet then 1 else 0 end) \
						 as ActionCount1, \
						sum(case when (l.action LIKE '%B' OR l.action LIKE '%R') AND flg_t_open_opp AND flg_t_first then 1 else 0 end) \
						 as ActionOpportunities1, \
						sum(case when (l.action LIKE '%B' OR l.action LIKE '%R') AND flg_t_open_opp AND flg_t_has_position AND flg_t_bet then 1 else 0 end) \
						 as ActionCount2, \
						sum(case when (l.action LIKE '%B' OR l.action LIKE '%R') AND flg_t_open_opp AND flg_t_has_position then 1 else 0 end) \
						 as ActionOpportunities2 \
				 FROM	player as P, %TYPE%_hand_player_statistics as S, lookup_actions l, %TYPE%_hand_summary H \
				 WHERE	S.id_player = P.id_player AND \
						H.id_hand = S.id_hand AND \
						length(H.str_aggressors_f) = 1 AND \
						H.cnt_players_t = 2 AND \
						NOT S.flg_hero AND \
						S.cnt_players between " MIN_PLAYERS_AT_TABLE " AND " MAX_PLAYERS_AT_TABLE " AND \
						S.id_gametype = %GAMETYPE% AND \
						P.id_site = %SITEID% AND \
						REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%' AND \
						S.id_action_f = l.id_action) foo",
				// stat_group
				pt_group_advanced
	},
#endif

#if PT4_QUERY_SUPPORT__TURN_B1_FOLD_TO_CBET
				// PT4  query to get TURN fold to cbet 
	{
		PT4_QUERY_SUPPORT__TURN_B1_FOLD_TO_CBET,
		// name
		{ "turn_b1_fold_to_cbet_op", "turn_b1_fold_to_cbet_ip" },
		// description_for_editor
		{ "Poker Tracker turn b1 fold to cbet OP","Poker Tracker turn b1 fold to cbet IP" },
		// query
		"SELECT (case when ActionOpportunities1 = 0 then -1 \
				 else cast(ActionCount1 as real) / ActionOpportunities1 \
				 end) as result1, ActionOpportunities1, \
				(case when ActionOpportunities2 = 0 then -1 \
				 else cast(ActionCount2 as real) / ActionOpportunities2 \
				 end) as result2, ActionOpportunities2 \
		 FROM	(SELECT	sum(case when S.position > S.val_f_bet_aggressor_pos AND (m.action = 'XF' or m.action = 'F') then 1 else 0 end) \
						 as ActionCount1, \
						sum(case when S.position > S.val_f_bet_aggressor_pos then 1 else 0 end) \
						 as ActionOpportunities1, \
						 sum(case when S.position < S.val_f_bet_aggressor_pos AND (m.action = 'XF' or m.action = 'F') then 1 else 0 end) \
						 as ActionCount2, \
						 sum(case when S.position < S.val_f_bet_aggressor_pos then 1 else 0 end) \
						 as ActionOpportunities2 \
				 FROM	player as P, %TYPE%_hand_player_statistics as S, lookup_actions l, lookup_actions m, %TYPE%_hand_summary H \
				 WHERE	S.id_player = P.id_player AND \
						H.id_hand = S.id_hand AND \
						length(H.str_aggressors_f) = 1 AND \
						H.cnt_players_t = 2 AND \
						NOT S.flg_hero AND \
						S.cnt_players between " MIN_PLAYERS_AT_TABLE " AND " MAX_PLAYERS_AT_TABLE " AND \
						S.id_gametype = %GAMETYPE% AND \
						P.id_site = %SITEID% AND \
						REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%' AND \
						S.id_action_t = m.id_action AND \
						S.id_action_f = l.id_action AND \
						l.action like '%C' AND \
						S.amt_t_bet_facing > 0 AND \
						((S.val_f_bet_aggressor_pos = S.val_t_bet_aggressor_pos AND S.val_f_bet_aggressor_pos != -1 AND S.val_f_raise_aggressor_pos = -1) \
						 OR(S.val_f_raise_aggressor_pos = S.val_t_bet_aggressor_pos AND S.val_f_raise_aggressor_pos != -1))) foo",
				// stat_group
				pt_group_advanced
	},
#endif

#if PT4_QUERY_SUPPORT__TURN_B1_RAISE_CBET
				// PT4  query to get raise cbet on TURN 
	{
		PT4_QUERY_SUPPORT__TURN_B1_RAISE_CBET,
		// name
		{ "turn_b1_raise_cbet_op", "turn_b1_raise_cbet_ip" },
		// description_for_editor
		{ "Poker Tracker turn b1 raise cbet OP","Poker Tracker turn b1 raise cbet IP" },
		// query
		"SELECT (case when ActionOpportunities1 = 0 then -1 \
				 else cast(ActionCount1 as real) / ActionOpportunities1 \
				 end) as result1, ActionOpportunities1, \
				(case when ActionOpportunities2 = 0 then -1 \
				 else cast(ActionCount2 as real) / ActionOpportunities2 \
				 end) as result2, ActionOpportunities2 \
		 FROM	(SELECT	sum(case when S.position > S.val_f_bet_aggressor_pos AND (substring(m.action from 1 for 1) = 'R' or substring(m.action from 1 for 2) = 'XR') then 1 else 0 end) \
						 as ActionCount1, \
						sum(case when S.position > S.val_f_bet_aggressor_pos then 1 else 0 end) \
						 as ActionOpportunities1, \
						 sum(case when S.position < S.val_f_bet_aggressor_pos AND (substring(m.action from 1 for 1) = 'R' or substring(m.action from 1 for 2) = 'XR') then 1 else 0 end) \
						 as ActionCount2, \
						 sum(case when S.position < S.val_f_bet_aggressor_pos then 1 else 0 end) \
						 as ActionOpportunities2 \
				 FROM	player as P, %TYPE%_hand_player_statistics as S, lookup_actions l, lookup_actions m, %TYPE%_hand_summary H \
				 WHERE	S.id_player = P.id_player AND \
						H.id_hand = S.id_hand AND \
						length(H.str_aggressors_f) = 1 AND \
						H.cnt_players_t = 2 AND \
						NOT S.flg_hero AND \
						S.cnt_players between " MIN_PLAYERS_AT_TABLE " AND " MAX_PLAYERS_AT_TABLE " AND \
						S.id_gametype = %GAMETYPE% AND \
						P.id_site = %SITEID% AND \
						REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%' AND \
						S.id_action_t = m.id_action AND \
						S.id_action_f = l.id_action AND \
						l.action like '%C' AND \
						S.amt_t_bet_facing > 0 AND \
						((S.val_f_bet_aggressor_pos = S.val_t_bet_aggressor_pos AND S.val_f_bet_aggressor_pos != -1 AND S.val_f_raise_aggressor_pos = -1) \
						 OR(S.val_f_raise_aggressor_pos = S.val_t_bet_aggressor_pos AND S.val_f_raise_aggressor_pos != -1))) foo",
				// stat_group
				pt_group_advanced
	},
#endif

#if PT4_QUERY_SUPPORT__TURN_B1_DONKBET
				// PT4  query to get TURN donkbet 
	{
		PT4_QUERY_SUPPORT__TURN_B1_DONKBET,
		// name
		{ "turn_b1_donkbet" },
		// description_for_editor
		{ "Poker Tracker turn b1 donkbet" },
		// query
		"SELECT (case when ActionOpportunities = 0 then -1 \
				 else cast(ActionCount as real) / ActionOpportunities \
				 end) as result, ActionOpportunities \
		 FROM	(SELECT	sum(case when flg_t_bet then 1 else 0 end) \
						 as ActionCount, \
						sum(case when true then 1 else 0 end) \
						 as ActionOpportunities \
				 FROM	player as P, %TYPE%_hand_player_statistics as S, lookup_actions l, %TYPE%_hand_summary H \
				 WHERE	S.id_player = P.id_player AND \
						H.id_hand = S.id_hand AND \
						length(H.str_aggressors_f) = 1 AND \
						H.cnt_players_t = 2 AND \
						NOT S.flg_hero AND \
						S.cnt_players between " MIN_PLAYERS_AT_TABLE " AND " MAX_PLAYERS_AT_TABLE " AND \
						S.id_gametype = %GAMETYPE% AND \
						P.id_site = %SITEID% AND \
						REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%' AND \
						l.action LIKE '%C' AND \
						((S.val_f_raise_aggressor_pos != -1 AND S.val_f_raise_aggressor_pos < S.position) \
						OR (S.val_f_raise_aggressor_pos = -1 AND S.val_f_bet_aggressor_pos < S.position)) AND \
						S.id_action_f = l.id_action AND \
						S.flg_t_open_opp) foo",
				// stat_group
				pt_group_advanced
	},
#endif

#if PT4_QUERY_SUPPORT__TURN_B1_FOLD_TO_DONKBET
				// PT4  query to get TURN fold to donkbet
	{
		PT4_QUERY_SUPPORT__TURN_B1_FOLD_TO_DONKBET,
		// name
		{ "turn_b1_fold_to_donkbet" },
		// description_for_editor
		{ "Poker Tracker turn b1 fold to donkbet" },
		// query
		"SELECT (case when ActionOpportunities1 = 0 then -1 \
				 else cast(ActionCount1 as real) / ActionOpportunities1 \
				 end) as result1, ActionOpportunities1 \
		 FROM	(SELECT	sum(case when (m.action = 'F' OR m.action = 'XF') then 1 else 0 end) \
						 as ActionCount1, \
						count(*) \
						 as ActionOpportunities1 \
				 FROM	player as P, %TYPE%_hand_player_statistics as S, lookup_actions l, lookup_actions m, %TYPE%_hand_summary H \
				 WHERE	S.id_player = P.id_player AND \
						H.id_hand = S.id_hand AND \
						length(H.str_aggressors_f) = 1 AND \
						H.cnt_players_t = 2 AND \
						NOT S.flg_hero AND \
						S.cnt_players between " MIN_PLAYERS_AT_TABLE " AND " MAX_PLAYERS_AT_TABLE " AND \
						S.id_gametype = %GAMETYPE% AND \
						P.id_site = %SITEID% AND \
						REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%' AND \
						S.id_action_t = m.id_action AND \
						S.id_action_f = l.id_action AND \
						amt_t_bet_facing > 0 AND \
						(flg_f_bet OR cnt_f_raise > 0 OR cnt_f_call > 0) AND \
						((l.action like '%R' AND S.position < S.val_t_bet_aggressor_pos) \
						 OR(l.action like '%B' AND S.position < S.val_t_bet_aggressor_pos))) foo",
				// stat_group
				pt_group_advanced
	},
#endif

#if PT4_QUERY_SUPPORT__TURN_B1_RAISE_DONKBET
				// PT4  query to get raise donkbet on TURN 
	{
		PT4_QUERY_SUPPORT__TURN_B1_RAISE_DONKBET,
		// name
		{ "turn_b1_raise_donkbet" },
		// description_for_editor
		{ "Poker Tracker turn b1 raise donkbet" },
		// query
		"SELECT (case when ActionOpportunities1 = 0 then -1 \
				 else cast(ActionCount1 as real) / ActionOpportunities1 \
				 end) as result1, ActionOpportunities1 \
		 FROM	(SELECT	sum(case when (m.action = 'R' OR m.action = 'XR') then 1 else 0 end) \
						 as ActionCount1, \
						count(*) \
						 as ActionOpportunities1 \
				 FROM	player as P, %TYPE%_hand_player_statistics as S, lookup_actions l, lookup_actions m, %TYPE%_hand_summary H \
				 WHERE	S.id_player = P.id_player AND \
						H.id_hand = S.id_hand AND \
						length(H.str_aggressors_f) = 1 AND \
						H.cnt_players_t = 2 AND \
						NOT S.flg_hero AND \
						S.cnt_players between " MIN_PLAYERS_AT_TABLE " AND " MAX_PLAYERS_AT_TABLE " AND \
						S.id_gametype = %GAMETYPE% AND \
						P.id_site = %SITEID% AND \
						REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%' AND \
						S.id_action_t = m.id_action AND \
						S.id_action_f = l.id_action AND \
						amt_t_bet_facing > 0 AND \
						(flg_f_bet OR cnt_f_raise > 0 OR cnt_f_call > 0) AND \
						((l.action like '%R' AND S.position < S.val_t_bet_aggressor_pos) \
						 OR(l.action like '%B' AND S.position < S.val_t_bet_aggressor_pos))) foo",
				// stat_group
				pt_group_advanced
	},
#endif

#if PT4_QUERY_SUPPORT__TURN_B1_FLOAT
				// PT4  query to get turn float 
	{
		PT4_QUERY_SUPPORT__TURN_B1_FLOAT,
		// name
		{ "turn_b1_float" },
		// description_for_editor
		{ "Poker Tracker turn b1 float" },
		// query
		"SELECT (case when ActionOpportunities = 0 then -1 \
				 else cast(ActionCount as real) / ActionOpportunities \
				 end) as result, ActionOpportunities \
		 FROM	(SELECT	sum(case when flg_t_bet then 1 else 0 end) \
						 as ActionCount, \
						sum(case when true then 1 else 0 end) \
						 as ActionOpportunities \
				 FROM	player as P, %TYPE%_hand_player_statistics as S, lookup_actions l, %TYPE%_hand_summary H \
				 WHERE	S.id_player = P.id_player AND \
						H.id_hand = S.id_hand AND \
						length(H.str_aggressors_f) = 1 AND \
						H.cnt_players_t = 2 AND \
						NOT S.flg_hero AND \
						S.cnt_players between " MIN_PLAYERS_AT_TABLE " AND " MAX_PLAYERS_AT_TABLE " AND \
						S.id_gametype = %GAMETYPE% AND \
						P.id_site = %SITEID% AND \
						REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%' AND \
						l.action LIKE '%C' AND \
						((S.val_f_raise_aggressor_pos != -1 AND S.val_f_raise_aggressor_pos > S.position) \
						OR (S.val_f_raise_aggressor_pos = -1 AND S.val_f_bet_aggressor_pos > S.position)) AND \
						S.id_action_f = l.id_action AND \
						S.flg_t_open_opp) foo",
				// stat_group
				pt_group_advanced
	},
#endif

#if PT4_QUERY_SUPPORT__TURN_B1_FOLD_TO_FLOAT
				// PT4  query to get TURN fold to float
	{
		PT4_QUERY_SUPPORT__TURN_B1_FOLD_TO_FLOAT,
		// name
		{ "turn_b1_fold_to_float" },
		// description_for_editor
		{ "Poker Tracker turn b1 fold to float" },
		// query
		"SELECT (case when ActionOpportunities1 = 0 then -1 \
				else cast(ActionCount1 as real) / ActionOpportunities1 \
				end) as result1, ActionOpportunities1 \
		FROM	(SELECT	sum(case when (m.action = 'F' OR m.action = 'XF') then 1 else 0 end) \
						as ActionCount1, \
						count(*) \
						as ActionOpportunities1 \
				FROM	player as P, %TYPE%_hand_player_statistics as S, lookup_actions l, lookup_actions m, %TYPE%_hand_summary H \
				WHERE	S.id_player = P.id_player AND \
						H.id_hand = S.id_hand AND \
						length(H.str_aggressors_f) = 1 AND \
						H.cnt_players_t = 2 AND \
					NOT S.flg_hero AND \
						S.cnt_players between " MIN_PLAYERS_AT_TABLE " AND " MAX_PLAYERS_AT_TABLE " AND \
					S.id_gametype = %GAMETYPE% AND \
					P.id_site = %SITEID% AND \
					REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%' AND \
					S.id_action_t = m.id_action AND \
					S.id_action_f = l.id_action AND \
					amt_t_bet_facing > 0 AND \
					(flg_f_bet OR cnt_f_raise > 0 OR cnt_f_call > 0) AND \
					((l.action like '%R' AND S.position > S.val_t_bet_aggressor_pos) \
						OR(l.action like '%B' AND S.position > S.val_t_bet_aggressor_pos))) foo",
				// stat_group
				pt_group_advanced
	},
#endif

#if PT4_QUERY_SUPPORT__TURN_B1_RAISE_FLOAT
				// PT4  query to get raise float on TURN 
	{
		PT4_QUERY_SUPPORT__TURN_B1_RAISE_FLOAT,
		// name
		{ "turn_b1_raise_float" },
		// description_for_editor
		{ "Poker Tracker turn b1 raise float" },
		// query
		"SELECT (case when ActionOpportunities1 = 0 then -1 \
				else cast(ActionCount1 as real) / ActionOpportunities1 \
				end) as result1, ActionOpportunities1 \
		FROM	(SELECT	sum(case when (m.action = 'R' OR m.action = 'XR') then 1 else 0 end) \
						as ActionCount1, \
						count(*) \
						as ActionOpportunities1 \
				FROM	player as P, %TYPE%_hand_player_statistics as S, lookup_actions l, lookup_actions m, %TYPE%_hand_summary H \
				WHERE	S.id_player = P.id_player AND \
						H.id_hand = S.id_hand AND \
						length(H.str_aggressors_f) = 1 AND \
						H.cnt_players_t = 2 AND \
					NOT S.flg_hero AND \
						S.cnt_players between " MIN_PLAYERS_AT_TABLE " AND " MAX_PLAYERS_AT_TABLE " AND \
					S.id_gametype = %GAMETYPE% AND \
					P.id_site = %SITEID% AND \
					REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%' AND \
					S.id_action_t = m.id_action AND \
					S.id_action_f = l.id_action AND \
					amt_t_bet_facing > 0 AND \
					(flg_f_bet OR cnt_f_raise > 0 OR cnt_f_call > 0) AND \
					((l.action like '%R' AND S.position > S.val_t_bet_aggressor_pos) \
						OR(l.action like '%B' AND S.position > S.val_t_bet_aggressor_pos))) foo",
				// stat_group
				pt_group_advanced
	},
#endif

#if PT4_QUERY_SUPPORT__RIVER_B1_CBET
				// PT4  query to get cbet on RIVER 
	{
		PT4_QUERY_SUPPORT__RIVER_B1_CBET,
		// name
		{ "river_b1_cbet_op", "river_b1_cbet_ip" },
		// description_for_editor
		{ "Poker Tracker river b1 cbet OP", "Poker Tracker river b1 cbet IP" },
		// query
		"SELECT (case when ActionOpportunities1 = 0 then -1 \
				 else cast(ActionCount1 as real) / ActionOpportunities1 \
				 end) as result1, ActionOpportunities1, \
				(case when ActionOpportunities2 = 0 then -1 \
				 else cast(ActionCount2 as real) / ActionOpportunities2 \
				 end) as result2, ActionOpportunities2 \
		 FROM	(SELECT	sum(case when (l.action LIKE '%B' OR l.action LIKE '%R') AND flg_r_open_opp AND flg_r_first AND flg_r_bet then 1 else 0 end) \
						 as ActionCount1, \
						sum(case when (l.action LIKE '%B' OR l.action LIKE '%R') AND flg_r_open_opp AND flg_r_first then 1 else 0 end) \
						 as ActionOpportunities1, \
						sum(case when (l.action LIKE '%B' OR l.action LIKE '%R') AND flg_r_open_opp AND flg_r_has_position AND flg_r_bet then 1 else 0 end) \
						 as ActionCount2, \
						sum(case when (l.action LIKE '%B' OR l.action LIKE '%R') AND flg_r_open_opp AND flg_r_has_position then 1 else 0 end) \
						 as ActionOpportunities2 \
				 FROM	player as P, %TYPE%_hand_player_statistics as S, lookup_actions l, %TYPE%_hand_summary H \
				 WHERE	S.id_player = P.id_player AND \
						H.id_hand = S.id_hand AND \
						length(H.str_aggressors_t) = 1 AND \
						H.cnt_players_r = 2 AND \
						NOT S.flg_hero AND \
						S.cnt_players between " MIN_PLAYERS_AT_TABLE " AND " MAX_PLAYERS_AT_TABLE " AND \
						S.id_gametype = %GAMETYPE% AND \
						P.id_site = %SITEID% AND \
						REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%' AND \
						S.id_action_t = l.id_action) foo",
				// stat_group
				pt_group_advanced
	},
#endif

#if PT4_QUERY_SUPPORT__RIVER_B1_FOLD_TO_CBET
				// PT4  query to get RIVER fold to cbet 
	{
		PT4_QUERY_SUPPORT__RIVER_B1_FOLD_TO_CBET,
		// name
		{ "river_b1_fold_to_cbet_op", "river_b1_fold_to_cbet_ip" },
		// description_for_editor
		{ "Poker Tracker river b1 fold to cbet OP","Poker Tracker river b1 fold to cbet IP" },
		// query
		"SELECT (case when ActionOpportunities1 = 0 then -1 \
				 else cast(ActionCount1 as real) / ActionOpportunities1 \
				 end) as result1, ActionOpportunities1, \
				(case when ActionOpportunities2 = 0 then -1 \
				 else cast(ActionCount2 as real) / ActionOpportunities2 \
				 end) as result2, ActionOpportunities2 \
		 FROM	(SELECT	sum(case when S.position > S.val_f_bet_aggressor_pos AND (m.action = 'XF' or m.action = 'F') then 1 else 0 end) \
						 as ActionCount1, \
						sum(case when S.position > S.val_f_bet_aggressor_pos then 1 else 0 end) \
						 as ActionOpportunities1, \
						 sum(case when S.position < S.val_f_bet_aggressor_pos AND (m.action = 'XF' or m.action = 'F') then 1 else 0 end) \
						 as ActionCount2, \
						 sum(case when S.position < S.val_f_bet_aggressor_pos then 1 else 0 end) \
						 as ActionOpportunities2 \
				 FROM	player as P, %TYPE%_hand_player_statistics as S, lookup_actions l, lookup_actions m, %TYPE%_hand_summary H \
				 WHERE	S.id_player = P.id_player AND \
						H.id_hand = S.id_hand AND \
						length(H.str_aggressors_t) = 1 AND \
						H.cnt_players_r = 2 AND \
						NOT S.flg_hero AND \
						S.cnt_players between " MIN_PLAYERS_AT_TABLE " AND " MAX_PLAYERS_AT_TABLE " AND \
						S.id_gametype = %GAMETYPE% AND \
						P.id_site = %SITEID% AND \
						REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%' AND \
						S.id_action_r = m.id_action AND \
						S.id_action_t = l.id_action AND \
						l.action like '%C' AND \
						S.amt_r_bet_facing > 0 AND \
						((S.val_t_bet_aggressor_pos = S.val_r_bet_aggressor_pos AND S.val_t_bet_aggressor_pos != -1 AND S.val_t_raise_aggressor_pos = -1) \
						 OR(S.val_t_raise_aggressor_pos = S.val_r_bet_aggressor_pos AND S.val_t_raise_aggressor_pos != -1))) foo",
				// stat_group
				pt_group_advanced
	},
#endif

#if PT4_QUERY_SUPPORT__RIVER_B1_RAISE_CBET
				// PT4  query to get raise cbet on RIVER 
	{
		PT4_QUERY_SUPPORT__RIVER_B1_RAISE_CBET,
		// name
		{ "river_b1_raise_cbet_op", "river_b1_raise_cbet_ip" },
		// description_for_editor
		{ "Poker Tracker river b1 raise cbet OP","Poker Tracker river b1 raise cbet IP" },
		// query
		"SELECT (case when ActionOpportunities1 = 0 then -1 \
				 else cast(ActionCount1 as real) / ActionOpportunities1 \
				 end) as result1, ActionOpportunities1, \
				(case when ActionOpportunities2 = 0 then -1 \
				 else cast(ActionCount2 as real) / ActionOpportunities2 \
				 end) as result2, ActionOpportunities2 \
		 FROM	(SELECT	sum(case when S.position > S.val_f_bet_aggressor_pos AND (substring(m.action from 1 for 1) = 'R' or substring(m.action from 1 for 2) = 'XR') then 1 else 0 end) \
						 as ActionCount1, \
						sum(case when S.position > S.val_f_bet_aggressor_pos then 1 else 0 end) \
						 as ActionOpportunities1, \
						 sum(case when S.position < S.val_f_bet_aggressor_pos AND (substring(m.action from 1 for 1) = 'R' or substring(m.action from 1 for 2) = 'XR') then 1 else 0 end) \
						 as ActionCount2, \
						 sum(case when S.position < S.val_f_bet_aggressor_pos then 1 else 0 end) \
						 as ActionOpportunities2 \
				 FROM	player as P, %TYPE%_hand_player_statistics as S, lookup_actions l, lookup_actions m, %TYPE%_hand_summary H \
				 WHERE	S.id_player = P.id_player AND \
						H.id_hand = S.id_hand AND \
						length(H.str_aggressors_t) = 1 AND \
						H.cnt_players_r = 2 AND \
						NOT S.flg_hero AND \
						S.cnt_players between " MIN_PLAYERS_AT_TABLE " AND " MAX_PLAYERS_AT_TABLE " AND \
						S.id_gametype = %GAMETYPE% AND \
						P.id_site = %SITEID% AND \
						REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%' AND \
						S.id_action_r = m.id_action AND \
						S.id_action_t = l.id_action AND \
						l.action like '%C' AND \
						S.amt_r_bet_facing > 0 AND \
						((S.val_t_bet_aggressor_pos = S.val_r_bet_aggressor_pos AND S.val_t_bet_aggressor_pos != -1 AND S.val_t_raise_aggressor_pos = -1) \
						 OR(S.val_t_raise_aggressor_pos = S.val_r_bet_aggressor_pos AND S.val_t_raise_aggressor_pos != -1))) foo",
				// stat_group
				pt_group_advanced
	},
#endif

#if PT4_QUERY_SUPPORT__RIVER_B1_DONKBET
				// PT4  query to get RIVER donkbet 
	{
		PT4_QUERY_SUPPORT__RIVER_B1_DONKBET,
		// name
		{ "river_b1_donkbet" },
		// description_for_editor
		{ "Poker Tracker river b1 donkbet" },
		// query
		"SELECT (case when ActionOpportunities = 0 then -1 \
				 else cast(ActionCount as real) / ActionOpportunities \
				 end) as result, ActionOpportunities \
		 FROM	(SELECT	sum(case when flg_r_bet then 1 else 0 end) \
						 as ActionCount, \
						sum(case when true then 1 else 0 end) \
						 as ActionOpportunities \
				 FROM	player as P, %TYPE%_hand_player_statistics as S, lookup_actions l, %TYPE%_hand_summary H \
				 WHERE	S.id_player = P.id_player AND \
						H.id_hand = S.id_hand AND \
						length(H.str_aggressors_t) = 1 AND \
						H.cnt_players_r = 2 AND \
						NOT S.flg_hero AND \
						S.cnt_players between " MIN_PLAYERS_AT_TABLE " AND " MAX_PLAYERS_AT_TABLE " AND \
						S.id_gametype = %GAMETYPE% AND \
						P.id_site = %SITEID% AND \
						REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%' AND \
						l.action LIKE '%C' AND \
						((S.val_t_raise_aggressor_pos != -1 AND S.val_t_raise_aggressor_pos < S.position) \
						OR (S.val_t_raise_aggressor_pos = -1 AND S.val_t_bet_aggressor_pos < S.position)) AND \
						S.id_action_t = l.id_action AND \
						S.flg_r_open_opp) foo",
				// stat_group
				pt_group_advanced
	},
#endif

#if PT4_QUERY_SUPPORT__RIVER_B1_FOLD_TO_DONKBET
				// PT4  query to get RIVER fold to donkbet
	{
		PT4_QUERY_SUPPORT__RIVER_B1_FOLD_TO_DONKBET,
		// name
		{ "river_b1_fold_to_donkbet" },
		// description_for_editor
		{ "Poker Tracker river b1 fold to donkbet" },
		// query
		"SELECT (case when ActionOpportunities1 = 0 then -1 \
				 else cast(ActionCount1 as real) / ActionOpportunities1 \
				 end) as result1, ActionOpportunities1 \
		 FROM	(SELECT	sum(case when (m.action = 'F' OR m.action = 'XF') then 1 else 0 end) \
						 as ActionCount1, \
						count(*) \
						 as ActionOpportunities1 \
				 FROM	player as P, %TYPE%_hand_player_statistics as S, lookup_actions l, lookup_actions m, %TYPE%_hand_summary H \
				 WHERE	S.id_player = P.id_player AND \
						H.id_hand = S.id_hand AND \
						length(H.str_aggressors_t) = 1 AND \
						H.cnt_players_r = 2 AND \
						NOT S.flg_hero AND \
						S.cnt_players between " MIN_PLAYERS_AT_TABLE " AND " MAX_PLAYERS_AT_TABLE " AND \
						S.id_gametype = %GAMETYPE% AND \
						P.id_site = %SITEID% AND \
						REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%' AND \
						S.id_action_r = m.id_action AND \
						S.id_action_t = l.id_action AND \
						amt_r_bet_facing > 0 AND \
						(flg_t_bet OR cnt_t_raise > 0 OR cnt_t_call > 0) AND \
						((l.action like '%R' AND S.position < S.val_r_bet_aggressor_pos) \
						 OR(l.action like '%B' AND S.position < S.val_r_bet_aggressor_pos))) foo",
				// stat_group
				pt_group_advanced
	},
#endif

#if PT4_QUERY_SUPPORT__RIVER_B1_RAISE_DONKBET
				// PT4  query to get raise donkbet on RIVER 
	{
		PT4_QUERY_SUPPORT__RIVER_B1_RAISE_DONKBET,
		// name
		{ "river_b1_raise_donkbet" },
		// description_for_editor
		{ "Poker Tracker river b1 raise donkbet" },
		// query
		"SELECT (case when ActionOpportunities1 = 0 then -1 \
				 else cast(ActionCount1 as real) / ActionOpportunities1 \
				 end) as result1, ActionOpportunities1 \
		 FROM	(SELECT	sum(case when (m.action = 'R' OR m.action = 'XR') then 1 else 0 end) \
						 as ActionCount1, \
						count(*) \
						 as ActionOpportunities1 \
				 FROM	player as P, %TYPE%_hand_player_statistics as S, lookup_actions l, lookup_actions m, %TYPE%_hand_summary H \
				 WHERE	S.id_player = P.id_player AND \
						H.id_hand = S.id_hand AND \
						length(H.str_aggressors_t) = 1 AND \
						H.cnt_players_r = 2 AND \
						NOT S.flg_hero AND \
						S.cnt_players between " MIN_PLAYERS_AT_TABLE " AND " MAX_PLAYERS_AT_TABLE " AND \
						S.id_gametype = %GAMETYPE% AND \
						P.id_site = %SITEID% AND \
						REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%' AND \
						S.id_action_r = m.id_action AND \
						S.id_action_t = l.id_action AND \
						amt_r_bet_facing > 0 AND \
						(flg_t_bet OR cnt_t_raise > 0 OR cnt_t_call > 0) AND \
						((l.action like '%R' AND S.position < S.val_r_bet_aggressor_pos) \
						 OR(l.action like '%B' AND S.position < S.val_r_bet_aggressor_pos))) foo",
				// stat_group
				pt_group_advanced
	},
#endif

#if PT4_QUERY_SUPPORT__RIVER_B1_FLOAT
				// PT4  query to get river float 
	{
		PT4_QUERY_SUPPORT__RIVER_B1_FLOAT,
		// name
		{ "river_b1_float" },
		// description_for_editor
		{ "Poker Tracker river b1 float" },
		// query
		"SELECT (case when ActionOpportunities = 0 then -1 \
				 else cast(ActionCount as real) / ActionOpportunities \
				 end) as result, ActionOpportunities \
		 FROM	(SELECT	sum(case when flg_r_bet then 1 else 0 end) \
						 as ActionCount, \
						sum(case when true then 1 else 0 end) \
						 as ActionOpportunities \
				 FROM	player as P, %TYPE%_hand_player_statistics as S, lookup_actions l, %TYPE%_hand_summary H \
				 WHERE	S.id_player = P.id_player AND \
						H.id_hand = S.id_hand AND \
						length(H.str_aggressors_t) = 1 AND \
						H.cnt_players_r = 2 AND \
						NOT S.flg_hero AND \
						S.cnt_players between " MIN_PLAYERS_AT_TABLE " AND " MAX_PLAYERS_AT_TABLE " AND \
						S.id_gametype = %GAMETYPE% AND \
						P.id_site = %SITEID% AND \
						REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%' AND \
						l.action LIKE '%C' AND \
						((S.val_t_raise_aggressor_pos != -1 AND S.val_t_raise_aggressor_pos > S.position) \
						OR (S.val_t_raise_aggressor_pos = -1 AND S.val_t_bet_aggressor_pos > S.position)) AND \
						S.id_action_t = l.id_action AND \
						S.flg_r_open_opp) foo",
				// stat_group
				pt_group_advanced
	},
#endif

#if PT4_QUERY_SUPPORT__RIVER_B1_FOLD_TO_FLOAT
				// PT4  query to get RIVER fold to float
	{
		PT4_QUERY_SUPPORT__RIVER_B1_FOLD_TO_FLOAT,
		// name
		{ "river_b1_fold_to_float" },
		// description_for_editor
		{ "Poker Tracker river b1 fold to float" },
		// query
		"SELECT (case when ActionOpportunities1 = 0 then -1 \
				else cast(ActionCount1 as real) / ActionOpportunities1 \
				end) as result1, ActionOpportunities1 \
		FROM	(SELECT	sum(case when (m.action = 'F' OR m.action = 'XF') then 1 else 0 end) \
						as ActionCount1, \
						count(*) \
						as ActionOpportunities1 \
				FROM	player as P, %TYPE%_hand_player_statistics as S, lookup_actions l, lookup_actions m, %TYPE%_hand_summary H \
				WHERE	S.id_player = P.id_player AND \
						H.id_hand = S.id_hand AND \
						length(H.str_aggressors_t) = 1 AND \
						H.cnt_players_r = 2 AND \
						NOT S.flg_hero AND \
						S.cnt_players between " MIN_PLAYERS_AT_TABLE " AND " MAX_PLAYERS_AT_TABLE " AND \
						S.id_gametype = %GAMETYPE% AND \
						P.id_site = %SITEID% AND \
						REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%' AND \
						S.id_action_r = m.id_action AND \
						S.id_action_t = l.id_action AND \
						amt_r_bet_facing > 0 AND \
						(flg_t_bet OR cnt_t_raise > 0 OR cnt_t_call > 0) AND \
						((l.action like '%R' AND S.position > S.val_r_bet_aggressor_pos) \
						OR(l.action like '%B' AND S.position > S.val_r_bet_aggressor_pos))) foo",
				// stat_group
				pt_group_advanced
	},
#endif

#if PT4_QUERY_SUPPORT__RIVER_B1_RAISE_FLOAT
				// PT4  query to get raise float on RIVER 
	{
		PT4_QUERY_SUPPORT__RIVER_B1_RAISE_FLOAT,
		// name
		{ "river_b1_raise_float" },
		// description_for_editor
		{ "Poker Tracker river b1 raise float" },
		// query
		"SELECT (case when ActionOpportunities1 = 0 then -1 \
				else cast(ActionCount1 as real) / ActionOpportunities1 \
				end) as result1, ActionOpportunities1 \
		FROM	(SELECT	sum(case when (m.action = 'R' OR m.action = 'XR') then 1 else 0 end) \
						as ActionCount1, \
						count(*) \
						as ActionOpportunities1 \
				FROM	player as P, %TYPE%_hand_player_statistics as S, lookup_actions l, lookup_actions m, %TYPE%_hand_summary H \
				WHERE	S.id_player = P.id_player AND \
						H.id_hand = S.id_hand AND \
						length(H.str_aggressors_t) = 1 AND \
						H.cnt_players_r = 2 AND \
						NOT S.flg_hero AND \
						S.cnt_players between " MIN_PLAYERS_AT_TABLE " AND " MAX_PLAYERS_AT_TABLE " AND \
						S.id_gametype = %GAMETYPE% AND \
						P.id_site = %SITEID% AND \
						REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%' AND \
						S.id_action_r = m.id_action AND \
						S.id_action_t = l.id_action AND \
						amt_r_bet_facing > 0 AND \
						(flg_t_bet OR cnt_t_raise > 0 OR cnt_t_call > 0) AND \
						((l.action like '%R' AND S.position > S.val_r_bet_aggressor_pos) \
						OR(l.action like '%B' AND S.position > S.val_r_bet_aggressor_pos))) foo",
				// stat_group
				pt_group_advanced
	},
#endif


#if PT4_QUERY_SUPPORT__FLOP_B1_CBET_MW
				// PT4  query to get cbet mw on FLOP 
	{
		PT4_QUERY_SUPPORT__FLOP_B1_CBET_MW,
		// name
		{ "flop_b1_cbet_mw" },
		// description_for_editor
		{ "Poker Tracker flop b1 cbet mw" },
		// query
		"SELECT (case when ActionOpportunities1 = 0 then -1 \
				 else cast(ActionCount1 as real) / ActionOpportunities1 \
				 end) as result1, ActionOpportunities1 \
		 FROM	(SELECT	sum(case when l.action LIKE '%R' AND flg_f_open_opp AND flg_f_bet then 1 else 0 end) \
						 as ActionCount1, \
						sum(case when l.action LIKE '%R' AND flg_f_open_opp then 1 else 0 end) \
						 as ActionOpportunities1 \
				 FROM	player as P, %TYPE%_hand_player_statistics as S, lookup_actions l, %TYPE%_hand_summary H \
				 WHERE	S.id_player = P.id_player AND \
						H.id_hand = S.id_hand AND \
						length(H.str_aggressors_p) = 2 AND \
						H.cnt_players_f > 2 AND \
						NOT S.flg_hero AND \
						S.cnt_players between " MIN_PLAYERS_AT_TABLE " AND " MAX_PLAYERS_AT_TABLE " AND \
						S.id_gametype = %GAMETYPE% AND \
						P.id_site = %SITEID% AND \
						REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%' AND \
						S.id_action_p = l.id_action) foo",
				// stat_group
				pt_group_advanced
	},
#endif

#if PT4_QUERY_SUPPORT__FLOP_B1_FOLD_TO_CBET_MW
				// PT4  query to get FLOP fold to cbet mw 
	{
		PT4_QUERY_SUPPORT__FLOP_B1_FOLD_TO_CBET_MW,
		// name
		{ "flop_b1_fold_to_cbet_mw" },
		// description_for_editor
		{ "Poker Tracker flop b1 fold to cbet mw" },
		// query
		"SELECT (case when ActionOpportunities1 = 0 then -1 \
				 else cast(ActionCount1 as real) / ActionOpportunities1 \
				 end) as result1, ActionOpportunities1 \
		 FROM	(SELECT	sum(case when (m.action = 'XF' or m.action = 'F') then 1 else 0 end) \
						 as ActionCount1, \
						count(*) \
						 as ActionOpportunities1 \
				 FROM	player as P, %TYPE%_hand_player_statistics as S, lookup_actions m, %TYPE%_hand_summary H \
				 WHERE	S.id_player = P.id_player AND \
						H.id_hand = S.id_hand AND \
						length(H.str_aggressors_p) = 2 AND \
						H.cnt_players_f > 2 AND \
						NOT S.flg_hero AND \
						S.cnt_players between " MIN_PLAYERS_AT_TABLE " AND " MAX_PLAYERS_AT_TABLE " AND \
						S.id_gametype = %GAMETYPE% AND \
						P.id_site = %SITEID% AND \
						REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%' AND \
						S.id_action_f = m.id_action AND \
						S.val_p_raise_aggressor_pos = S.val_f_bet_aggressor_pos AND \
						S.val_f_bet_aggressor_pos != -1 AND \
						S.amt_f_raise_facing = 0) foo",
				// stat_group
				pt_group_advanced
	},
#endif

#if PT4_QUERY_SUPPORT__FLOP_B1_RAISE_CBET_MW
				// PT4  query to get raise cbet mw on FLOP 
	{
		PT4_QUERY_SUPPORT__FLOP_B1_RAISE_CBET_MW,
		// name
		{ "flop_b1_raise_cbet_mw" },
		// description_for_editor
		{ "Poker Tracker flop b1 raise cbet mw" },
		// query
		"SELECT (case when ActionOpportunities1 = 0 then -1 \
				 else cast(ActionCount1 as real) / ActionOpportunities1 \
				 end) as result1, ActionOpportunities1 \
		 FROM	(SELECT	sum(case when (substring(m.action from 1 for 1) = 'R' or substring(m.action from 1 for 2) = 'XR') then 1 else 0 end) \
						 as ActionCount1, \
						count(*) \
						 as ActionOpportunities1 \
				 FROM	player as P, %TYPE%_hand_player_statistics as S, lookup_actions m, %TYPE%_hand_summary H \
				 WHERE	S.id_player = P.id_player AND \
						H.id_hand = S.id_hand AND \
						length(H.str_aggressors_p) = 2 AND \
						H.cnt_players_f > 2 AND \
						NOT S.flg_hero AND \
						S.cnt_players between " MIN_PLAYERS_AT_TABLE " AND " MAX_PLAYERS_AT_TABLE " AND \
						S.id_gametype = %GAMETYPE% AND \
						P.id_site = %SITEID% AND \
						REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%' AND \
						S.id_action_f = m.id_action AND \
						S.val_p_raise_aggressor_pos = S.val_f_bet_aggressor_pos AND \
						S.val_f_bet_aggressor_pos != -1 AND \
						S.amt_f_raise_facing = 0) foo",
				// stat_group
				pt_group_advanced
	},
#endif

#if PT4_QUERY_SUPPORT__FLOP_B1_DONKBET_MW
				// PT4  query to get FLOP donkbet mw 
	{
		PT4_QUERY_SUPPORT__FLOP_B1_DONKBET_MW,
		// name
		{ "flop_b1_donkbet_mw" },
		// description_for_editor
		{ "Poker Tracker flop b1 donkbet mw" },
		// query
		"SELECT (case when ActionOpportunities = 0 then -1 \
				 else cast(ActionCount as real) / ActionOpportunities \
				 end) as result, ActionOpportunities \
		 FROM	(SELECT	sum(case when flg_f_bet then 1 else 0 end) \
						 as ActionCount, \
						sum(case when true then 1 else 0 end) \
						 as ActionOpportunities \
				 FROM	player as P, %TYPE%_hand_player_statistics as S, lookup_actions l, %TYPE%_hand_summary H \
				 WHERE	S.id_player = P.id_player AND \
						H.id_hand = S.id_hand AND \
						length(H.str_aggressors_p) = 2 AND \
						H.cnt_players_f > 2 AND \
						NOT S.flg_hero AND \
						S.cnt_players between " MIN_PLAYERS_AT_TABLE " AND " MAX_PLAYERS_AT_TABLE " AND \
						S.id_gametype = %GAMETYPE% AND \
						P.id_site = %SITEID% AND \
						REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%' AND \
						S.val_p_raise_aggressor_pos < S.position AND \
						S.val_p_raise_aggressor_pos != -1 AND \
						l.action LIKE '%C' AND \
						S.id_action_p = l.id_action AND \
						S.flg_f_open_opp) foo",
				// stat_group
				pt_group_advanced
	},
#endif

#if PT4_QUERY_SUPPORT__FLOP_B1_FOLD_TO_DONKBET_MW
				// PT4  query to get FLOP fold to donkbet mw
	{
		PT4_QUERY_SUPPORT__FLOP_B1_FOLD_TO_DONKBET_MW,
		// name
		{ "flop_b1_fold_to_donkbet_mw_op", "flop_b1_fold_to_donkbet_mw_ip" },
		// description_for_editor
		{ "Poker Tracker flop b1 fold to donkbet mw OP", "Poker Tracker fold to donkbet mw IP" },
		// query
		"SELECT (case when ActionOpportunities1 = 0 then -1 \
				 else cast(ActionCount1 as real) / ActionOpportunities1 \
				 end) as result1, ActionOpportunities1, \
				(case when ActionOpportunities2 = 0 then -1 \
				 else cast(ActionCount2 as real) / ActionOpportunities2 \
				 end) as result2, ActionOpportunities2 \
		 FROM	(SELECT	sum(case when S.position > S.val_f_bet_aggressor_pos AND (m.action = 'F' OR m.action = 'XF') then 1 else 0 end) \
						 as ActionCount1, \
						sum(case when S.position > S.val_f_bet_aggressor_pos then 1 else 0 end) \
						 as ActionOpportunities1, \
						 sum(case when S.position < S.val_f_bet_aggressor_pos AND (m.action = 'F' OR m.action = 'XF') then 1 else 0 end) \
						 as ActionCount2, \
						 sum(case when S.position < S.val_f_bet_aggressor_pos then 1 else 0 end) \
						 as ActionOpportunities2 \
				 FROM	player as P, %TYPE%_hand_player_statistics as S, lookup_actions m, %TYPE%_hand_summary H \
				 WHERE	S.id_player = P.id_player AND \
						H.id_hand = S.id_hand AND \
						length(H.str_aggressors_p) = 2 AND \
						H.cnt_players_f > 2 AND \
						NOT S.flg_hero AND \
						S.cnt_players between " MIN_PLAYERS_AT_TABLE " AND " MAX_PLAYERS_AT_TABLE " AND \
						S.id_gametype = %GAMETYPE% AND \
						P.id_site = %SITEID% AND \
						REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%' AND \
						S.id_action_f = m.id_action AND \
						amt_f_bet_facing > 0 AND \
						(flg_p_first_raise OR flg_p_face_raise) AND \
						((S.val_p_raise_aggressor_pos < S.val_f_bet_aggressor_pos AND S.val_p_raise_aggressor_pos != -1) \
						 OR (S.position < S.val_f_bet_aggressor_pos AND S.val_p_raise_aggressor_pos = -1))) foo",
				// stat_group
				pt_group_advanced
	},
#endif

#if PT4_QUERY_SUPPORT__FLOP_B1_RAISE_DONKBET_MW
				// PT4  query to get raise donkbet mw on FLOP 
	{
		PT4_QUERY_SUPPORT__FLOP_B1_RAISE_DONKBET_MW,
		// name
		{ "flop_b1_raise_donkbet_mw_op", "flop_b1_raise_donkbet_mw_ip" },
		// description_for_editor
		{ "Poker Tracker flop b1 raise donkbet mw OP", "Poker Tracker raise donkbet mw IP" },
		// query
		"SELECT (case when ActionOpportunities1 = 0 then -1 \
				 else cast(ActionCount1 as real) / ActionOpportunities1 \
				 end) as result1, ActionOpportunities1, \
				(case when ActionOpportunities2 = 0 then -1 \
				 else cast(ActionCount2 as real) / ActionOpportunities2 \
				 end) as result2, ActionOpportunities2 \
		 FROM	(SELECT	sum(case when S.position > S.val_f_bet_aggressor_pos AND (m.action = 'R' OR m.action = 'XR') then 1 else 0 end) \
						 as ActionCount1, \
						sum(case when S.position > S.val_f_bet_aggressor_pos then 1 else 0 end) \
						 as ActionOpportunities1, \
						 sum(case when S.position < S.val_f_bet_aggressor_pos AND (m.action = 'R' OR m.action = 'XR') then 1 else 0 end) \
						 as ActionCount2, \
						 sum(case when S.position < S.val_f_bet_aggressor_pos then 1 else 0 end) \
						 as ActionOpportunities2 \
				 FROM	player as P, %TYPE%_hand_player_statistics as S, lookup_actions m, %TYPE%_hand_summary H \
				 WHERE	S.id_player = P.id_player AND \
						H.id_hand = S.id_hand AND \
						length(H.str_aggressors_p) = 2 AND \
						H.cnt_players_f > 2 AND \
						NOT S.flg_hero AND \
						S.cnt_players between " MIN_PLAYERS_AT_TABLE " AND " MAX_PLAYERS_AT_TABLE " AND \
						S.id_gametype = %GAMETYPE% AND \
						P.id_site = %SITEID% AND \
						REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%' AND \
						S.id_action_f = m.id_action AND \
						amt_f_bet_facing > 0 AND \
						(flg_p_first_raise OR flg_p_face_raise) AND \
						((S.val_p_raise_aggressor_pos < S.val_f_bet_aggressor_pos AND S.val_p_raise_aggressor_pos != -1) \
						 OR (S.position < S.val_f_bet_aggressor_pos AND S.val_p_raise_aggressor_pos = -1))) foo",
				pt_group_advanced
	},
#endif

#if PT4_QUERY_SUPPORT__FLOP_B1_FLOAT_MW
				// PT4  query to get flop float mw 
	{
		PT4_QUERY_SUPPORT__FLOP_B1_FLOAT_MW,
		// name
		{ "flop_b1_float_mw" },
		// description_for_editor
		{ "Poker Tracker flop b1 float mw" },
		// query
		"SELECT (case when ActionOpportunities = 0 then -1 \
				 else cast(ActionCount as real) / ActionOpportunities \
				 end) as result, ActionOpportunities \
		 FROM	(SELECT	sum(case when flg_f_bet then 1 else 0 end) \
						 as ActionCount, \
						sum(case when true then 1 else 0 end) \
						 as ActionOpportunities \
				 FROM	player as P, %TYPE%_hand_player_statistics as S, lookup_actions l, %TYPE%_hand_summary H \
				 WHERE	S.id_player = P.id_player AND \
						H.id_hand = S.id_hand AND \
						length(H.str_aggressors_p) = 2 AND \
						H.cnt_players_f > 2 AND \
						NOT S.flg_hero AND \
						S.cnt_players between " MIN_PLAYERS_AT_TABLE " AND " MAX_PLAYERS_AT_TABLE " AND \
						S.id_gametype = %GAMETYPE% AND \
						P.id_site = %SITEID% AND \
						REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%' AND \
						S.val_p_raise_aggressor_pos > S.position AND \
						S.val_p_raise_aggressor_pos != -1 AND \
						l.action LIKE '%C' AND \
						S.id_action_p = l.id_action AND \
						S.flg_f_open_opp) foo",
				// stat_group
				pt_group_advanced
	},
#endif

#if PT4_QUERY_SUPPORT__FLOP_B1_FOLD_TO_FLOAT_MW
				// PT4  query to get FLOP fold to float mw
	{
		PT4_QUERY_SUPPORT__FLOP_B1_FOLD_TO_FLOAT_MW,
		// name
		{ "flop_b1_fold_to_float_mw_op", "flop_b1_fold_to_float_mw_ip" },
		// description_for_editor
		{ "Poker Tracker flop b1 fold to float mw OP", "Poker Tracker fold to float mw IP" },
		// query
		"SELECT (case when ActionOpportunities1 = 0 then -1 \
				 else cast(ActionCount1 as real) / ActionOpportunities1 \
				 end) as result1, ActionOpportunities1, \
				(case when ActionOpportunities2 = 0 then -1 \
				 else cast(ActionCount2 as real) / ActionOpportunities2 \
				 end) as result2, ActionOpportunities2 \
		 FROM	(SELECT	sum(case when S.position > S.val_f_bet_aggressor_pos AND (m.action = 'F' OR m.action = 'XF') then 1 else 0 end) \
						 as ActionCount1, \
						sum(case when S.position > S.val_f_bet_aggressor_pos then 1 else 0 end) \
						 as ActionOpportunities1, \
						 sum(case when S.position < S.val_f_bet_aggressor_pos AND (m.action = 'F' OR m.action = 'XF') then 1 else 0 end) \
						 as ActionCount2, \
						 sum(case when S.position < S.val_f_bet_aggressor_pos then 1 else 0 end) \
						 as ActionOpportunities2 \
				 FROM	player as P, %TYPE%_hand_player_statistics as S, lookup_actions m, %TYPE%_hand_summary H \
				 WHERE	S.id_player = P.id_player AND \
						H.id_hand = S.id_hand AND \
						length(H.str_aggressors_p) = 2 AND \
						H.cnt_players_f > 2 AND \
						NOT S.flg_hero AND \
						S.cnt_players between " MIN_PLAYERS_AT_TABLE " AND " MAX_PLAYERS_AT_TABLE " AND \
						S.id_gametype = %GAMETYPE% AND \
						P.id_site = %SITEID% AND \
						REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%' AND \
						S.id_action_f = m.id_action AND \
						amt_f_bet_facing > 0 AND \
						(flg_p_first_raise OR flg_p_face_raise) AND \
						((S.val_p_raise_aggressor_pos > S.val_f_bet_aggressor_pos AND S.val_p_raise_aggressor_pos != -1) \
						 OR (S.position > S.val_f_bet_aggressor_pos AND S.val_p_raise_aggressor_pos = -1))) foo",
				// stat_group
				pt_group_advanced
	},
#endif

#if PT4_QUERY_SUPPORT__FLOP_B1_RAISE_FLOAT_MW
				// PT4  query to get raise float mw on FLOP 
	{
		PT4_QUERY_SUPPORT__FLOP_B1_RAISE_FLOAT_MW,
		// name
		{ "flop_b1_raise_float_mw_op", "flop_b1_raise_float_mw_ip" },
		// description_for_editor
		{ "Poker Tracker flop b1 raise float mw OP", "Poker Tracker raise float mw IP" },
		// query
		"SELECT (case when ActionOpportunities1 = 0 then -1 \
				else cast(ActionCount1 as real) / ActionOpportunities1 \
				end) as result1, ActionOpportunities1, \
			(case when ActionOpportunities2 = 0 then -1 \
				else cast(ActionCount2 as real) / ActionOpportunities2 \
				end) as result2, ActionOpportunities2 \
		FROM	(SELECT	sum(case when S.position > S.val_f_bet_aggressor_pos AND (substring(m.action from 1 for 1) = 'R' OR substring(m.action from 1 for 2) = 'XR') then 1 else 0 end) \
						as ActionCount1, \
					sum(case when S.position > S.val_f_bet_aggressor_pos then 1 else 0 end) \
						as ActionOpportunities1, \
						sum(case when S.position < S.val_f_bet_aggressor_pos AND (substring(m.action from 1 for 1) = 'R' OR substring(m.action from 1 for 2) = 'XR') then 1 else 0 end) \
						as ActionCount2, \
						sum(case when S.position < S.val_f_bet_aggressor_pos then 1 else 0 end) \
						as ActionOpportunities2 \
				FROM	player as P, %TYPE%_hand_player_statistics as S, lookup_actions m, %TYPE%_hand_summary H \
				WHERE	S.id_player = P.id_player AND \
						H.id_hand = S.id_hand AND \
						length(H.str_aggressors_p) = 2 AND \
						H.cnt_players_f > 2 AND \
						NOT S.flg_hero AND \
						S.cnt_players between " MIN_PLAYERS_AT_TABLE " AND " MAX_PLAYERS_AT_TABLE " AND \
						S.id_gametype = %GAMETYPE% AND \
						P.id_site = %SITEID% AND \
						REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%' AND \
						S.id_action_f = m.id_action AND \
						amt_f_bet_facing > 0 AND \
						(flg_p_first_raise OR flg_p_face_raise) AND \
						((S.val_p_raise_aggressor_pos > S.val_f_bet_aggressor_pos AND S.val_p_raise_aggressor_pos != -1) \
						OR (S.position > S.val_f_bet_aggressor_pos AND S.val_p_raise_aggressor_pos = -1))) foo",
				// stat_group
				pt_group_advanced
	},
#endif

#if PT4_QUERY_SUPPORT__TURN_B1_CBET_MW
				// PT4  query to get cbet mw on TURN 
	{
		PT4_QUERY_SUPPORT__TURN_B1_CBET_MW,
		// name
		{ "turn_b1_cbet_mw" },
		// description_for_editor
		{ "Poker Tracker turn b1 cbet mw" },
		// query
		"SELECT (case when ActionOpportunities1 = 0 then -1 \
				 else cast(ActionCount1 as real) / ActionOpportunities1 \
				 end) as result1, ActionOpportunities1 \
		 FROM	(SELECT	sum(case when (l.action LIKE '%B' OR l.action LIKE '%R') AND flg_t_open_opp AND flg_t_bet then 1 else 0 end) \
						 as ActionCount1, \
						sum(case when (l.action LIKE '%B' OR l.action LIKE '%R') AND flg_t_open_opp then 1 else 0 end) \
						 as ActionOpportunities1 \
				 FROM	player as P, %TYPE%_hand_player_statistics as S, lookup_actions l, %TYPE%_hand_summary H \
				 WHERE	S.id_player = P.id_player AND \
						H.id_hand = S.id_hand AND \
						length(H.str_aggressors_f) = 1 AND \
						H.cnt_players_t > 2 AND \
						NOT S.flg_hero AND \
						S.cnt_players between " MIN_PLAYERS_AT_TABLE " AND " MAX_PLAYERS_AT_TABLE " AND \
						S.id_gametype = %GAMETYPE% AND \
						P.id_site = %SITEID% AND \
						REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%' AND \
						S.id_action_f = l.id_action) foo",
				// stat_group
				pt_group_advanced
	},
#endif

#if PT4_QUERY_SUPPORT__TURN_B1_FOLD_TO_CBET_MW
				// PT4  query to get TURN fold to cbet mw 
	{
		PT4_QUERY_SUPPORT__TURN_B1_FOLD_TO_CBET_MW,
		// name
		{ "turn_b1_fold_to_cbet_mw" },
		// description_for_editor
		{ "Poker Tracker turn b1 fold to cbet mw" },
		// query
		"SELECT (case when ActionOpportunities1 = 0 then -1 \
				 else cast(ActionCount1 as real) / ActionOpportunities1 \
				 end) as result1, ActionOpportunities1 \
		 FROM	(SELECT	sum(case when (m.action = 'XF' or m.action = 'F') then 1 else 0 end) \
						 as ActionCount1, \
						count(*) \
						 as ActionOpportunities1 \
				 FROM	player as P, %TYPE%_hand_player_statistics as S, lookup_actions l, lookup_actions m, %TYPE%_hand_summary H \
				 WHERE	S.id_player = P.id_player AND \
						H.id_hand = S.id_hand AND \
						length(H.str_aggressors_f) = 1 AND \
						H.cnt_players_t > 2 AND \
						NOT S.flg_hero AND \
						S.cnt_players between " MIN_PLAYERS_AT_TABLE " AND " MAX_PLAYERS_AT_TABLE " AND \
						S.id_gametype = %GAMETYPE% AND \
						P.id_site = %SITEID% AND \
						REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%' AND \
						S.id_action_t = m.id_action AND \
						S.id_action_f = l.id_action AND \
						l.action like '%C' AND \
						S.amt_t_bet_facing > 0 AND \
						((S.val_f_bet_aggressor_pos = S.val_t_bet_aggressor_pos AND S.val_f_bet_aggressor_pos != -1 AND S.val_f_raise_aggressor_pos = -1) \
						 OR(S.val_f_raise_aggressor_pos = S.val_t_bet_aggressor_pos AND S.val_f_raise_aggressor_pos != -1))) foo",
				// stat_group
				pt_group_advanced
	},
#endif

#if PT4_QUERY_SUPPORT__TURN_B1_RAISE_CBET_MW
				// PT4  query to get raise cbet mw on TURN 
	{
		PT4_QUERY_SUPPORT__TURN_B1_RAISE_CBET_MW,
		// name
		{ "turn_b1_raise_cbet_mw" },
		// description_for_editor
		{ "Poker Tracker turn b1 raise cbet mw" },
		// query
		"SELECT (case when ActionOpportunities1 = 0 then -1 \
				 else cast(ActionCount1 as real) / ActionOpportunities1 \
				 end) as result1, ActionOpportunities1 \
		 FROM	(SELECT	sum(case when (substring(m.action from 1 for 1) = 'R' or substring(m.action from 1 for 2) = 'XR') then 1 else 0 end) \
						 as ActionCount1, \
						count(*) \
						 as ActionOpportunities1 \
				 FROM	player as P, %TYPE%_hand_player_statistics as S, lookup_actions l, lookup_actions m, %TYPE%_hand_summary H \
				 WHERE	S.id_player = P.id_player AND \
						H.id_hand = S.id_hand AND \
						length(H.str_aggressors_f) = 1 AND \
						H.cnt_players_t > 2 AND \
						NOT S.flg_hero AND \
						S.cnt_players between " MIN_PLAYERS_AT_TABLE " AND " MAX_PLAYERS_AT_TABLE " AND \
						S.id_gametype = %GAMETYPE% AND \
						P.id_site = %SITEID% AND \
						REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%' AND \
						S.id_action_t = m.id_action AND \
						S.id_action_f = l.id_action AND \
						l.action like '%C' AND \
						S.amt_t_bet_facing > 0 AND \
						((S.val_f_bet_aggressor_pos = S.val_t_bet_aggressor_pos AND S.val_f_bet_aggressor_pos != -1 AND S.val_f_raise_aggressor_pos = -1) \
						 OR(S.val_f_raise_aggressor_pos = S.val_t_bet_aggressor_pos AND S.val_f_raise_aggressor_pos != -1))) foo",
				// stat_group
				pt_group_advanced
	},
#endif

#if PT4_QUERY_SUPPORT__TURN_B1_DONKBET_MW
				// PT4  query to get TURN donkbet mw 
	{
		PT4_QUERY_SUPPORT__TURN_B1_DONKBET_MW,
		// name
		{ "turn_b1_donkbet_mw" },
		// description_for_editor
		{ "Poker Tracker turn b1 donkbet mw" },
		// query
		"SELECT (case when ActionOpportunities = 0 then -1 \
				 else cast(ActionCount as real) / ActionOpportunities \
				 end) as result, ActionOpportunities \
		 FROM	(SELECT	sum(case when flg_t_bet then 1 else 0 end) \
						 as ActionCount, \
						sum(case when true then 1 else 0 end) \
						 as ActionOpportunities \
				 FROM	player as P, %TYPE%_hand_player_statistics as S, lookup_actions l, %TYPE%_hand_summary H \
				 WHERE	S.id_player = P.id_player AND \
						H.id_hand = S.id_hand AND \
						length(H.str_aggressors_f) = 1 AND \
						H.cnt_players_t > 2 AND \
						NOT S.flg_hero AND \
						S.cnt_players between " MIN_PLAYERS_AT_TABLE " AND " MAX_PLAYERS_AT_TABLE " AND \
						S.id_gametype = %GAMETYPE% AND \
						P.id_site = %SITEID% AND \
						REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%' AND \
						l.action LIKE '%C' AND \
						((S.val_f_raise_aggressor_pos != -1 AND S.val_f_raise_aggressor_pos < S.position) \
						OR (S.val_f_raise_aggressor_pos = -1 AND S.val_f_bet_aggressor_pos < S.position)) AND \
						S.id_action_f = l.id_action AND \
						S.flg_t_open_opp) foo",
				// stat_group
				pt_group_advanced
	},
#endif

#if PT4_QUERY_SUPPORT__TURN_B1_FOLD_TO_DONKBET_MW
				// PT4  query to get TURN fold to donkbet mw
	{
		PT4_QUERY_SUPPORT__TURN_B1_FOLD_TO_DONKBET_MW,
		// name
		{ "turn_b1_fold_to_donkbet_mw_op", "turn_b1_fold_to_donkbet_mw_ip" },
		// description_for_editor
		{ "Poker Tracker turn b1 fold to donkbet mw OP", "Poker Tracker fold to donkbet mw IP" },
		// query
		"SELECT (case when ActionOpportunities1 = 0 then -1 \
				 else cast(ActionCount1 as real) / ActionOpportunities1 \
				 end) as result1, ActionOpportunities1, \
				(case when ActionOpportunities2 = 0 then -1 \
				 else cast(ActionCount2 as real) / ActionOpportunities2 \
				 end) as result2, ActionOpportunities2 \
		 FROM	(SELECT	sum(case when S.position > S.val_t_bet_aggressor_pos AND (m.action = 'F' OR m.action = 'XF') then 1 else 0 end) \
						 as ActionCount1, \
						sum(case when S.position > S.val_t_bet_aggressor_pos then 1 else 0 end) \
						 as ActionOpportunities1, \
						sum(case when S.position < S.val_t_bet_aggressor_pos AND (m.action = 'F' OR m.action = 'XF') then 1 else 0 end) \
						 as ActionCount2, \
						sum(case when S.position < S.val_t_bet_aggressor_pos then 1 else 0 end) \
						 as ActionOpportunities2 \
				 FROM	player as P, %TYPE%_hand_player_statistics as S, lookup_actions l, lookup_actions m, %TYPE%_hand_summary H \
				 WHERE	S.id_player = P.id_player AND \
						H.id_hand = S.id_hand AND \
						length(H.str_aggressors_f) = 1 AND \
						H.cnt_players_t > 2 AND \
						NOT S.flg_hero AND \
						S.cnt_players between " MIN_PLAYERS_AT_TABLE " AND " MAX_PLAYERS_AT_TABLE " AND \
						S.id_gametype = %GAMETYPE% AND \
						P.id_site = %SITEID% AND \
						REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%' AND \
						S.id_action_t = m.id_action AND \
						S.id_action_f = l.id_action AND \
						amt_t_bet_facing > 0 AND \
						(flg_f_bet OR cnt_f_raise > 0 OR cnt_f_call > 0) AND \
						((l.action like '%R' AND S.position < S.val_t_bet_aggressor_pos) \
						 OR(l.action like '%B' AND S.position < S.val_t_bet_aggressor_pos) \
						 OR(l.action like '%C' AND S.val_f_bet_aggressor_pos < S.val_t_bet_aggressor_pos AND S.val_f_bet_aggressor_pos != -1 AND S.val_f_raise_aggressor_pos = -1) \
						 OR(l.action like '%C' AND S.val_f_raise_aggressor_pos < S.val_t_bet_aggressor_pos AND S.val_f_raise_aggressor_pos != -1))) foo",
				// stat_group
				pt_group_advanced
	},
#endif

#if PT4_QUERY_SUPPORT__TURN_B1_RAISE_DONKBET_MW
				// PT4  query to get raise donkbet mw on TURN 
	{
		PT4_QUERY_SUPPORT__TURN_B1_RAISE_DONKBET_MW,
		// name
		{ "turn_b1_raise_donkbet_mw_op", "turn_b1_raise_donkbet_mw_ip" },
		// description_for_editor
		{ "Poker Tracker turn b1 raise donkbet mw OP", "Poker Tracker raise donkbet mw IP" },
		// query
		"SELECT (case when ActionOpportunities1 = 0 then -1 \
				 else cast(ActionCount1 as real) / ActionOpportunities1 \
				 end) as result1, ActionOpportunities1, \
				(case when ActionOpportunities2 = 0 then -1 \
				 else cast(ActionCount2 as real) / ActionOpportunities2 \
				 end) as result2, ActionOpportunities2 \
		 FROM	(SELECT	sum(case when S.position > S.val_t_bet_aggressor_pos AND (m.action = 'R' OR m.action = 'XR') then 1 else 0 end) \
						 as ActionCount1, \
						sum(case when S.position > S.val_t_bet_aggressor_pos then 1 else 0 end) \
						 as ActionOpportunities1, \
						 sum(case when S.position < S.val_t_bet_aggressor_pos AND (m.action = 'R' OR m.action = 'XR') then 1 else 0 end) \
						 as ActionCount2, \
						 sum(case when S.position < S.val_t_bet_aggressor_pos then 1 else 0 end) \
						 as ActionOpportunities2 \
				 FROM	player as P, %TYPE%_hand_player_statistics as S, lookup_actions l, lookup_actions m, %TYPE%_hand_summary H \
				 WHERE	S.id_player = P.id_player AND \
						H.id_hand = S.id_hand AND \
						length(H.str_aggressors_f) = 1 AND \
						H.cnt_players_t > 2 AND \
						NOT S.flg_hero AND \
						S.cnt_players between " MIN_PLAYERS_AT_TABLE " AND " MAX_PLAYERS_AT_TABLE " AND \
						S.id_gametype = %GAMETYPE% AND \
						P.id_site = %SITEID% AND \
						REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%' AND \
						S.id_action_t = m.id_action AND \
						S.id_action_f = l.id_action AND \
						amt_t_bet_facing > 0 AND \
						(flg_f_bet OR cnt_f_raise > 0 OR cnt_f_call > 0) AND \
						((l.action like '%R' AND S.position < S.val_t_bet_aggressor_pos) \
						 OR(l.action like '%B' AND S.position < S.val_t_bet_aggressor_pos) \
						 OR(l.action like '%C' AND S.val_f_bet_aggressor_pos < S.val_t_bet_aggressor_pos AND S.val_f_bet_aggressor_pos != -1 AND S.val_f_raise_aggressor_pos = -1) \
						 OR(l.action like '%C' AND S.val_f_raise_aggressor_pos < S.val_t_bet_aggressor_pos AND S.val_f_raise_aggressor_pos != -1))) foo",
				// stat_group
				pt_group_advanced
	},
#endif

#if PT4_QUERY_SUPPORT__TURN_B1_FLOAT_MW
				// PT4  query to get turn float mw 
	{
		PT4_QUERY_SUPPORT__TURN_B1_FLOAT_MW,
		// name
		{ "turn_b1_float_mw" },
		// description_for_editor
		{ "Poker Tracker turn b1 float mw" },
		// query
		"SELECT (case when ActionOpportunities = 0 then -1 \
				 else cast(ActionCount as real) / ActionOpportunities \
				 end) as result, ActionOpportunities \
		 FROM	(SELECT	sum(case when flg_t_bet then 1 else 0 end) \
						 as ActionCount, \
						sum(case when true then 1 else 0 end) \
						 as ActionOpportunities \
				 FROM	player as P, %TYPE%_hand_player_statistics as S, lookup_actions l, %TYPE%_hand_summary H \
				 WHERE	S.id_player = P.id_player AND \
						H.id_hand = S.id_hand AND \
						length(H.str_aggressors_f) = 1 AND \
						H.cnt_players_t > 2 AND \
						NOT S.flg_hero AND \
						S.cnt_players between " MIN_PLAYERS_AT_TABLE " AND " MAX_PLAYERS_AT_TABLE " AND \
						S.id_gametype = %GAMETYPE% AND \
						P.id_site = %SITEID% AND \
						REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%' AND \
						l.action LIKE '%C' AND \
						((S.val_f_raise_aggressor_pos != -1 AND S.val_f_raise_aggressor_pos > S.position) \
						OR (S.val_f_raise_aggressor_pos = -1 AND S.val_f_bet_aggressor_pos > S.position)) AND \
						S.id_action_f = l.id_action AND \
						S.flg_t_open_opp) foo",
				// stat_group
				pt_group_advanced
	},
#endif

#if PT4_QUERY_SUPPORT__TURN_B1_FOLD_TO_FLOAT_MW
				// PT4  query to get TURN fold to float mw
	{
		PT4_QUERY_SUPPORT__TURN_B1_FOLD_TO_FLOAT_MW,
		// name
		{ "turn_b1_fold_to_float_mw_op", "turn_b1_fold_to_float_mw_ip" },
		// description_for_editor
		{ "Poker Tracker turn b1 fold to float mw OP", "Poker Tracker fold to float mw IP" },
		// query
		"SELECT (case when ActionOpportunities1 = 0 then -1 \
				else cast(ActionCount1 as real) / ActionOpportunities1 \
				end) as result1, ActionOpportunities1, \
			(case when ActionOpportunities2 = 0 then -1 \
				else cast(ActionCount2 as real) / ActionOpportunities2 \
				end) as result2, ActionOpportunities2 \
		FROM	(SELECT	sum(case when S.position > S.val_t_bet_aggressor_pos AND (m.action = 'F' OR m.action = 'XF') then 1 else 0 end) \
						as ActionCount1, \
						sum(case when S.position > S.val_t_bet_aggressor_pos then 1 else 0 end) \
						as ActionOpportunities1, \
						sum(case when S.position < S.val_t_bet_aggressor_pos AND (m.action = 'F' OR m.action = 'XF') then 1 else 0 end) \
						as ActionCount2, \
						sum(case when S.position < S.val_t_bet_aggressor_pos then 1 else 0 end) \
						as ActionOpportunities2 \
				FROM	player as P, %TYPE%_hand_player_statistics as S, lookup_actions l, lookup_actions m, %TYPE%_hand_summary H \
				WHERE	S.id_player = P.id_player AND \
						H.id_hand = S.id_hand AND \
						length(H.str_aggressors_f) = 1 AND \
						H.cnt_players_t > 2 AND \
					NOT S.flg_hero AND \
						S.cnt_players between " MIN_PLAYERS_AT_TABLE " AND " MAX_PLAYERS_AT_TABLE " AND \
					S.id_gametype = %GAMETYPE% AND \
					P.id_site = %SITEID% AND \
					REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%' AND \
					S.id_action_t = m.id_action AND \
					S.id_action_f = l.id_action AND \
					amt_t_bet_facing > 0 AND \
					(flg_f_bet OR cnt_f_raise > 0 OR cnt_f_call > 0) AND \
					((l.action like '%R' AND S.position > S.val_t_bet_aggressor_pos) \
						OR(l.action like '%B' AND S.position > S.val_t_bet_aggressor_pos) \
						OR(l.action like '%C' AND S.val_f_bet_aggressor_pos > S.val_t_bet_aggressor_pos AND S.val_f_bet_aggressor_pos != -1 AND S.val_f_raise_aggressor_pos = -1) \
						OR(l.action like '%C' AND S.val_f_raise_aggressor_pos > S.val_t_bet_aggressor_pos AND S.val_f_raise_aggressor_pos != -1))) foo",
				// stat_group
				pt_group_advanced
	},
#endif

#if PT4_QUERY_SUPPORT__TURN_B1_RAISE_FLOAT_MW
				// PT4  query to get raise float mw on TURN 
	{
		PT4_QUERY_SUPPORT__TURN_B1_RAISE_FLOAT_MW,
		// name
		{ "turn_b1_raise_float_mw_op", "turn_b1_raise_float_mw_ip" },
		// description_for_editor
		{ "Poker Tracker turn b1 raise float mw OP", "Poker Tracker raise float mw IP" },
		// query
		"SELECT (case when ActionOpportunities1 = 0 then -1 \
				else cast(ActionCount1 as real) / ActionOpportunities1 \
				end) as result1, ActionOpportunities1, \
			(case when ActionOpportunities2 = 0 then -1 \
				else cast(ActionCount2 as real) / ActionOpportunities2 \
				end) as result2, ActionOpportunities2 \
		FROM	(SELECT	sum(case when S.position > S.val_t_bet_aggressor_pos AND (m.action = 'R' OR m.action = 'XR') then 1 else 0 end) \
						as ActionCount1, \
						sum(case when S.position > S.val_t_bet_aggressor_pos then 1 else 0 end) \
						as ActionOpportunities1, \
						sum(case when S.position < S.val_t_bet_aggressor_pos AND (m.action = 'R' OR m.action = 'XR') then 1 else 0 end) \
						as ActionCount2, \
						sum(case when S.position < S.val_t_bet_aggressor_pos then 1 else 0 end) \
						as ActionOpportunities2 \
				FROM	player as P, %TYPE%_hand_player_statistics as S, lookup_actions l, lookup_actions m, %TYPE%_hand_summary H \
				WHERE	S.id_player = P.id_player AND \
						H.id_hand = S.id_hand AND \
						length(H.str_aggressors_f) = 1 AND \
						H.cnt_players_t > 2 AND \
						NOT S.flg_hero AND \
						S.cnt_players between " MIN_PLAYERS_AT_TABLE " AND " MAX_PLAYERS_AT_TABLE " AND \
						S.id_gametype = %GAMETYPE% AND \
						P.id_site = %SITEID% AND \
						REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%' AND \
						S.id_action_t = m.id_action AND \
						S.id_action_f = l.id_action AND \
						amt_t_bet_facing > 0 AND \
						(flg_f_bet OR cnt_f_raise > 0 OR cnt_f_call > 0) AND \
						((l.action like '%R' AND S.position > S.val_t_bet_aggressor_pos) \
						OR(l.action like '%B' AND S.position > S.val_t_bet_aggressor_pos) \
						OR(l.action like '%C' AND S.val_f_bet_aggressor_pos > S.val_t_bet_aggressor_pos AND S.val_f_bet_aggressor_pos != -1 AND S.val_f_raise_aggressor_pos = -1) \
						OR(l.action like '%C' AND S.val_f_raise_aggressor_pos > S.val_t_bet_aggressor_pos AND S.val_f_raise_aggressor_pos != -1))) foo",
				// stat_group
				pt_group_advanced
	},
#endif

#if PT4_QUERY_SUPPORT__RIVER_B1_CBET_MW
				// PT4  query to get cbet mw on RIVER 
	{
		PT4_QUERY_SUPPORT__RIVER_B1_CBET_MW,
		// name
		{ "river_b1_cbet_mw" },
		// description_for_editor
		{ "Poker Tracker river b1 cbet mw" },
		// query
		"SELECT (case when ActionOpportunities1 = 0 then -1 \
				 else cast(ActionCount1 as real) / ActionOpportunities1 \
				 end) as result1, ActionOpportunities1 \
		 FROM	(SELECT	sum(case when (l.action LIKE '%B' OR l.action LIKE '%R') AND flg_r_open_opp AND flg_r_bet then 1 else 0 end) \
						 as ActionCount1, \
						sum(case when (l.action LIKE '%B' OR l.action LIKE '%R') AND flg_r_open_opp then 1 else 0 end) \
						 as ActionOpportunities1 \
				 FROM	player as P, %TYPE%_hand_player_statistics as S, lookup_actions l, %TYPE%_hand_summary H \
				 WHERE	S.id_player = P.id_player AND \
						H.id_hand = S.id_hand AND \
						length(H.str_aggressors_t) = 1 AND \
						H.cnt_players_r > 2 AND \
						NOT S.flg_hero AND \
						S.cnt_players between " MIN_PLAYERS_AT_TABLE " AND " MAX_PLAYERS_AT_TABLE " AND \
						S.id_gametype = %GAMETYPE% AND \
						P.id_site = %SITEID% AND \
						REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%' AND \
						S.id_action_t = l.id_action) foo",
				// stat_group
				pt_group_advanced
	},
#endif

#if PT4_QUERY_SUPPORT__RIVER_B1_FOLD_TO_CBET_MW
				// PT4  query to get RIVER fold to cbet mw 
	{
		PT4_QUERY_SUPPORT__RIVER_B1_FOLD_TO_CBET_MW,
		// name
		{ "river_b1_fold_to_cbet_mw" },
		// description_for_editor
		{ "Poker Tracker river b1 fold to cbet mw" },
		// query
		"SELECT (case when ActionOpportunities1 = 0 then -1 \
				 else cast(ActionCount1 as real) / ActionOpportunities1 \
				 end) as result1, ActionOpportunities1 \
		 FROM	(SELECT	sum(case when (m.action = 'XF' or m.action = 'F') then 1 else 0 end) \
						 as ActionCount1, \
						count(*) \
						 as ActionOpportunities1 \
				 FROM	player as P, %TYPE%_hand_player_statistics as S, lookup_actions l, lookup_actions m, %TYPE%_hand_summary H \
				 WHERE	S.id_player = P.id_player AND \
						H.id_hand = S.id_hand AND \
						length(H.str_aggressors_t) = 1 AND \
						H.cnt_players_r > 2 AND \
						NOT S.flg_hero AND \
						S.cnt_players between " MIN_PLAYERS_AT_TABLE " AND " MAX_PLAYERS_AT_TABLE " AND \
						S.id_gametype = %GAMETYPE% AND \
						P.id_site = %SITEID% AND \
						REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%' AND \
						S.id_action_r = m.id_action AND \
						S.id_action_t = l.id_action AND \
						l.action like '%C' AND \
						S.amt_r_bet_facing > 0 AND \
						((S.val_t_bet_aggressor_pos = S.val_r_bet_aggressor_pos AND S.val_t_bet_aggressor_pos != -1 AND S.val_t_raise_aggressor_pos = -1) \
						 OR(S.val_t_raise_aggressor_pos = S.val_r_bet_aggressor_pos AND S.val_t_raise_aggressor_pos != -1))) foo",
				// stat_group
				pt_group_advanced
	},
#endif

#if PT4_QUERY_SUPPORT__RIVER_B1_RAISE_CBET_MW
				// PT4  query to get raise cbet mw on RIVER 
	{
		PT4_QUERY_SUPPORT__RIVER_B1_RAISE_CBET_MW,
		// name
		{ "river_b1_raise_cbet_mw" },
		// description_for_editor
		{ "Poker Tracker river b1 raise cbet mw" },
		// query
		"SELECT (case when ActionOpportunities1 = 0 then -1 \
				 else cast(ActionCount1 as real) / ActionOpportunities1 \
				 end) as result1, ActionOpportunities1 \
		 FROM	(SELECT	sum(case when (substring(m.action from 1 for 1) = 'R' or substring(m.action from 1 for 2) = 'XR') then 1 else 0 end) \
						 as ActionCount1, \
						count(*) \
						 as ActionOpportunities1 \
				 FROM	player as P, %TYPE%_hand_player_statistics as S, lookup_actions l, lookup_actions m, %TYPE%_hand_summary H \
				 WHERE	S.id_player = P.id_player AND \
						H.id_hand = S.id_hand AND \
						length(H.str_aggressors_t) = 1 AND \
						H.cnt_players_r > 2 AND \
						NOT S.flg_hero AND \
						S.cnt_players between " MIN_PLAYERS_AT_TABLE " AND " MAX_PLAYERS_AT_TABLE " AND \
						S.id_gametype = %GAMETYPE% AND \
						P.id_site = %SITEID% AND \
						REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%' AND \
						S.id_action_r = m.id_action AND \
						S.id_action_t = l.id_action AND \
						l.action like '%C' AND \
						S.amt_r_bet_facing > 0 AND \
						((S.val_t_bet_aggressor_pos = S.val_r_bet_aggressor_pos AND S.val_t_bet_aggressor_pos != -1 AND S.val_t_raise_aggressor_pos = -1) \
						 OR(S.val_t_raise_aggressor_pos = S.val_r_bet_aggressor_pos AND S.val_t_raise_aggressor_pos != -1))) foo",
				// stat_group
				pt_group_advanced
	},
#endif

#if PT4_QUERY_SUPPORT__RIVER_B1_DONKBET_MW
				// PT4  query to get RIVER donkbet mw 
	{
		PT4_QUERY_SUPPORT__RIVER_B1_DONKBET_MW,
		// name
		{ "river_b1_donkbet_mw" },
		// description_for_editor
		{ "Poker Tracker river b1 donkbet mw" },
		// query
		"SELECT (case when ActionOpportunities = 0 then -1 \
				 else cast(ActionCount as real) / ActionOpportunities \
				 end) as result, ActionOpportunities \
		 FROM	(SELECT	sum(case when flg_r_bet then 1 else 0 end) \
						 as ActionCount, \
						sum(case when true then 1 else 0 end) \
						 as ActionOpportunities \
				 FROM	player as P, %TYPE%_hand_player_statistics as S, lookup_actions l, %TYPE%_hand_summary H \
				 WHERE	S.id_player = P.id_player AND \
						H.id_hand = S.id_hand AND \
						length(H.str_aggressors_t) = 1 AND \
						H.cnt_players_r > 2 AND \
						NOT S.flg_hero AND \
						S.cnt_players between " MIN_PLAYERS_AT_TABLE " AND " MAX_PLAYERS_AT_TABLE " AND \
						S.id_gametype = %GAMETYPE% AND \
						P.id_site = %SITEID% AND \
						REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%' AND \
						l.action LIKE '%C' AND \
						((S.val_t_raise_aggressor_pos != -1 AND S.val_t_raise_aggressor_pos < S.position) \
						OR (S.val_t_raise_aggressor_pos = -1 AND S.val_t_bet_aggressor_pos < S.position)) AND \
						S.id_action_t = l.id_action AND \
						S.flg_r_open_opp) foo",
				// stat_group
				pt_group_advanced
	},
#endif

#if PT4_QUERY_SUPPORT__RIVER_B1_FOLD_TO_DONKBET_MW
				// PT4  query to get RIVER fold to donkbet mw
	{
		PT4_QUERY_SUPPORT__RIVER_B1_FOLD_TO_DONKBET_MW,
		// name
		{ "river_b1_fold_to_donkbet_mw_op", "river_b1_fold_to_donkbet_mw_ip" },
		// description_for_editor
		{ "Poker Tracker river b1 fold to donkbet mw OP", "Poker Tracker fold to donkbet mw IP" },
		// query
		"SELECT (case when ActionOpportunities1 = 0 then -1 \
				 else cast(ActionCount1 as real) / ActionOpportunities1 \
				 end) as result1, ActionOpportunities1, \
				(case when ActionOpportunities2 = 0 then -1 \
				 else cast(ActionCount2 as real) / ActionOpportunities2 \
				 end) as result2, ActionOpportunities2 \
		 FROM	(SELECT	sum(case when S.position > S.val_r_bet_aggressor_pos AND (m.action = 'F' OR m.action = 'XF') then 1 else 0 end) \
						 as ActionCount1, \
						sum(case when S.position > S.val_r_bet_aggressor_pos then 1 else 0 end) \
						 as ActionOpportunities1, \
						sum(case when S.position < S.val_r_bet_aggressor_pos AND (m.action = 'F' OR m.action = 'XF') then 1 else 0 end) \
						 as ActionCount2, \
						sum(case when S.position < S.val_r_bet_aggressor_pos then 1 else 0 end) \
						 as ActionOpportunities2 \
				 FROM	player as P, %TYPE%_hand_player_statistics as S, lookup_actions l, lookup_actions m, %TYPE%_hand_summary H \
				 WHERE	S.id_player = P.id_player AND \
						H.id_hand = S.id_hand AND \
						length(H.str_aggressors_t) = 1 AND \
						H.cnt_players_r > 2 AND \
						NOT S.flg_hero AND \
						S.cnt_players between " MIN_PLAYERS_AT_TABLE " AND " MAX_PLAYERS_AT_TABLE " AND \
						S.id_gametype = %GAMETYPE% AND \
						P.id_site = %SITEID% AND \
						REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%' AND \
						S.id_action_r = m.id_action AND \
						S.id_action_t = l.id_action AND \
						amt_r_bet_facing > 0 AND \
						(flg_t_bet OR cnt_t_raise > 0 OR cnt_t_call > 0) AND \
						((l.action like '%R' AND S.position < S.val_r_bet_aggressor_pos) \
						 OR(l.action like '%B' AND S.position < S.val_r_bet_aggressor_pos) \
						 OR(l.action like '%C' AND S.val_t_bet_aggressor_pos < S.val_r_bet_aggressor_pos AND S.val_t_bet_aggressor_pos != -1 AND S.val_t_raise_aggressor_pos = -1) \
						 OR(l.action like '%C' AND S.val_t_raise_aggressor_pos < S.val_r_bet_aggressor_pos AND S.val_t_raise_aggressor_pos != -1))) foo",
				// stat_group
				pt_group_advanced
	},
#endif

#if PT4_QUERY_SUPPORT__RIVER_B1_RAISE_DONKBET_MW
				// PT4  query to get raise donkbet mw on RIVER 
	{
		PT4_QUERY_SUPPORT__RIVER_B1_RAISE_DONKBET_MW,
		// name
		{ "river_b1_raise_donkbet_mw_op", "river_b1_raise_donkbet_mw_ip" },
		// description_for_editor
		{ "Poker Tracker river b1 raise donkbet mw OP", "Poker Tracker raise donkbet mw IP" },
		// query
		"SELECT (case when ActionOpportunities1 = 0 then -1 \
				 else cast(ActionCount1 as real) / ActionOpportunities1 \
				 end) as result1, ActionOpportunities1, \
				(case when ActionOpportunities2 = 0 then -1 \
				 else cast(ActionCount2 as real) / ActionOpportunities2 \
				 end) as result2, ActionOpportunities2 \
		 FROM	(SELECT	sum(case when S.position > S.val_r_bet_aggressor_pos AND (m.action = 'R' OR m.action = 'XR') then 1 else 0 end) \
						 as ActionCount1, \
						sum(case when S.position > S.val_r_bet_aggressor_pos then 1 else 0 end) \
						 as ActionOpportunities1, \
						sum(case when S.position < S.val_r_bet_aggressor_pos AND (m.action = 'R' OR m.action = 'XR') then 1 else 0 end) \
						 as ActionCount2, \
						sum(case when S.position < S.val_r_bet_aggressor_pos then 1 else 0 end) \
						 as ActionOpportunities2 \
				 FROM	player as P, %TYPE%_hand_player_statistics as S, lookup_actions l, lookup_actions m, %TYPE%_hand_summary H \
				 WHERE	S.id_player = P.id_player AND \
						H.id_hand = S.id_hand AND \
						length(H.str_aggressors_t) = 1 AND \
						H.cnt_players_r > 2 AND \
						NOT S.flg_hero AND \
						S.cnt_players between " MIN_PLAYERS_AT_TABLE " AND " MAX_PLAYERS_AT_TABLE " AND \
						S.id_gametype = %GAMETYPE% AND \
						P.id_site = %SITEID% AND \
						REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%' AND \
						S.id_action_r = m.id_action AND \
						S.id_action_t = l.id_action AND \
						amt_r_bet_facing > 0 AND \
						(flg_t_bet OR cnt_t_raise > 0 OR cnt_t_call > 0) AND \
						((l.action like '%R' AND S.position < S.val_r_bet_aggressor_pos) \
						 OR(l.action like '%B' AND S.position < S.val_r_bet_aggressor_pos) \
						 OR(l.action like '%C' AND S.val_t_bet_aggressor_pos < S.val_r_bet_aggressor_pos AND S.val_t_bet_aggressor_pos != -1 AND S.val_t_raise_aggressor_pos = -1) \
						 OR(l.action like '%C' AND S.val_t_raise_aggressor_pos < S.val_r_bet_aggressor_pos AND S.val_t_raise_aggressor_pos != -1))) foo",
				// stat_group
				pt_group_advanced
	},
#endif

#if PT4_QUERY_SUPPORT__RIVER_B1_FLOAT_MW
				// PT4  query to get river float mw 
	{
		PT4_QUERY_SUPPORT__RIVER_B1_FLOAT_MW,
		// name
		{ "river_b1_float_mw" },
		// description_for_editor
		{ "Poker Tracker river b1 float mw" },
		// query
		"SELECT (case when ActionOpportunities = 0 then -1 \
				 else cast(ActionCount as real) / ActionOpportunities \
				 end) as result, ActionOpportunities \
		 FROM	(SELECT	sum(case when flg_r_bet then 1 else 0 end) \
						 as ActionCount, \
						sum(case when true then 1 else 0 end) \
						 as ActionOpportunities \
				 FROM	player as P, %TYPE%_hand_player_statistics as S, lookup_actions l, %TYPE%_hand_summary H \
				 WHERE	S.id_player = P.id_player AND \
						H.id_hand = S.id_hand AND \
						length(H.str_aggressors_t) = 1 AND \
						H.cnt_players_r > 2 AND \
						NOT S.flg_hero AND \
						S.cnt_players between " MIN_PLAYERS_AT_TABLE " AND " MAX_PLAYERS_AT_TABLE " AND \
						S.id_gametype = %GAMETYPE% AND \
						P.id_site = %SITEID% AND \
						REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%' AND \
						l.action LIKE '%C' AND \
						((S.val_t_raise_aggressor_pos != -1 AND S.val_t_raise_aggressor_pos > S.position) \
						OR (S.val_t_raise_aggressor_pos = -1 AND S.val_t_bet_aggressor_pos > S.position)) AND \
						S.id_action_t = l.id_action AND \
						S.flg_r_open_opp) foo",
				// stat_group
				pt_group_advanced
	},
#endif

#if PT4_QUERY_SUPPORT__RIVER_B1_FOLD_TO_FLOAT_MW
				// PT4  query to get RIVER fold to float mw
	{
		PT4_QUERY_SUPPORT__RIVER_B1_FOLD_TO_FLOAT_MW,
		// name
		{ "river_b1_fold_to_float_mw_op", "river_b1_fold_to_float_mw_ip" },
		// description_for_editor
		{ "Poker Tracker river b1 fold to float mw OP", "Poker Tracker fold to float mw IP" },
		// query
		"SELECT (case when ActionOpportunities1 = 0 then -1 \
				else cast(ActionCount1 as real) / ActionOpportunities1 \
				end) as result1, ActionOpportunities1, \
			(case when ActionOpportunities2 = 0 then -1 \
				else cast(ActionCount2 as real) / ActionOpportunities2 \
				end) as result2, ActionOpportunities2 \
		FROM	(SELECT	sum(case when S.position > S.val_r_bet_aggressor_pos AND (m.action = 'F' OR m.action = 'XF') then 1 else 0 end) \
						as ActionCount1, \
						sum(case when S.position > S.val_r_bet_aggressor_pos then 1 else 0 end) \
						as ActionOpportunities1, \
						sum(case when S.position < S.val_r_bet_aggressor_pos AND (m.action = 'F' OR m.action = 'XF') then 1 else 0 end) \
						as ActionCount2, \
						sum(case when S.position < S.val_r_bet_aggressor_pos then 1 else 0 end) \
						as ActionOpportunities2 \
				FROM	player as P, %TYPE%_hand_player_statistics as S, lookup_actions l, lookup_actions m, %TYPE%_hand_summary H \
				WHERE	S.id_player = P.id_player AND \
						H.id_hand = S.id_hand AND \
						length(H.str_aggressors_t) = 1 AND \
						H.cnt_players_r > 2 AND \
						NOT S.flg_hero AND \
						S.cnt_players between " MIN_PLAYERS_AT_TABLE " AND " MAX_PLAYERS_AT_TABLE " AND \
						S.id_gametype = %GAMETYPE% AND \
						P.id_site = %SITEID% AND \
						REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%' AND \
						S.id_action_r = m.id_action AND \
						S.id_action_t = l.id_action AND \
						amt_r_bet_facing > 0 AND \
						(flg_t_bet OR cnt_t_raise > 0 OR cnt_t_call > 0) AND \
						((l.action like '%R' AND S.position > S.val_r_bet_aggressor_pos) \
						OR(l.action like '%B' AND S.position > S.val_r_bet_aggressor_pos) \
						OR(l.action like '%C' AND S.val_t_bet_aggressor_pos > S.val_r_bet_aggressor_pos AND S.val_t_bet_aggressor_pos != -1 AND S.val_t_raise_aggressor_pos = -1) \
						OR(l.action like '%C' AND S.val_t_raise_aggressor_pos > S.val_r_bet_aggressor_pos AND S.val_t_raise_aggressor_pos != -1))) foo",
				// stat_group
				pt_group_advanced
	},
#endif

#if PT4_QUERY_SUPPORT__RIVER_B1_RAISE_FLOAT_MW
				// PT4  query to get raise float mw on RIVER 
	{
		PT4_QUERY_SUPPORT__RIVER_B1_RAISE_FLOAT_MW,
		// name
		{ "river_b1_raise_float_mw_op", "river_b1_raise_float_mw_ip" },
		// description_for_editor
		{ "Poker Tracker river b1 raise float mw OP", "Poker Tracker raise float mw IP" },
		// query
		"SELECT (case when ActionOpportunities1 = 0 then -1 \
				else cast(ActionCount1 as real) / ActionOpportunities1 \
				end) as result1, ActionOpportunities1, \
			(case when ActionOpportunities2 = 0 then -1 \
				else cast(ActionCount2 as real) / ActionOpportunities2 \
				end) as result2, ActionOpportunities2 \
		FROM	(SELECT	sum(case when S.position > S.val_r_bet_aggressor_pos AND (m.action = 'R' OR m.action = 'XR') then 1 else 0 end) \
						as ActionCount1, \
						sum(case when S.position > S.val_r_bet_aggressor_pos then 1 else 0 end) \
						as ActionOpportunities1, \
						sum(case when S.position < S.val_r_bet_aggressor_pos AND (m.action = 'R' OR m.action = 'XR') then 1 else 0 end) \
						as ActionCount2, \
						sum(case when S.position < S.val_r_bet_aggressor_pos then 1 else 0 end) \
						as ActionOpportunities2 \
				FROM	player as P, %TYPE%_hand_player_statistics as S, lookup_actions l, lookup_actions m, %TYPE%_hand_summary H \
				WHERE	S.id_player = P.id_player AND \
						H.id_hand = S.id_hand AND \
						length(H.str_aggressors_t) = 1 AND \
						H.cnt_players_r > 2 AND \
						NOT S.flg_hero AND \
						S.cnt_players between " MIN_PLAYERS_AT_TABLE " AND " MAX_PLAYERS_AT_TABLE " AND \
						S.id_gametype = %GAMETYPE% AND \
						P.id_site = %SITEID% AND \
						REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%' AND \
						S.id_action_r = m.id_action AND \
						S.id_action_t = l.id_action AND \
						amt_r_bet_facing > 0 AND \
						(flg_t_bet OR cnt_t_raise > 0 OR cnt_t_call > 0) AND \
						((l.action like '%R' AND S.position > S.val_r_bet_aggressor_pos) \
						OR(l.action like '%B' AND S.position > S.val_r_bet_aggressor_pos) \
						OR(l.action like '%C' AND S.val_t_bet_aggressor_pos > S.val_r_bet_aggressor_pos AND S.val_t_bet_aggressor_pos != -1 AND S.val_t_raise_aggressor_pos = -1) \
						OR(l.action like '%C' AND S.val_t_raise_aggressor_pos > S.val_r_bet_aggressor_pos AND S.val_t_raise_aggressor_pos != -1))) foo",
				// stat_group
				pt_group_advanced
	},
#endif

				//
				// START B2+
				//

#if PT4_QUERY_SUPPORT__FLOP_B2_CBET
				// PT4  query to get cbet on FLOP 
	{
		PT4_QUERY_SUPPORT__FLOP_B2_CBET,
		// name
		{ "flop_b2_cbet_op", "flop_b2_cbet_ip" },
		// description_for_editor
		{ "Poker Tracker flop b2 cbet OP", "Poker Tracker flop b2 cbet IP" },
		// query
		"SELECT (case when ActionOpportunities1 = 0 then -1 \
				 else cast(ActionCount1 as real) / ActionOpportunities1 \
				 end) as result1, ActionOpportunities1, \
				(case when ActionOpportunities2 = 0 then -1 \
				 else cast(ActionCount2 as real) / ActionOpportunities2 \
				 end) as result2, ActionOpportunities2 \
		 FROM	(SELECT	sum(case when l.action LIKE '%R' AND flg_f_open_opp AND flg_f_first AND flg_f_bet then 1 else 0 end) \
						 as ActionCount1, \
						sum(case when l.action LIKE '%R' AND flg_f_open_opp AND flg_f_first then 1 else 0 end) \
						 as ActionOpportunities1, \
						 sum(case when l.action LIKE '%R' AND flg_f_open_opp AND flg_f_has_position AND flg_f_bet then 1 else 0 end) \
						 as ActionCount2, \
						 sum(case when l.action LIKE '%R' AND flg_f_open_opp AND flg_f_has_position then 1 else 0 end) \
						 as ActionOpportunities2 \
				 FROM	player as P, %TYPE%_hand_player_statistics as S, lookup_actions l, %TYPE%_hand_summary H \
				 WHERE	S.id_player = P.id_player AND \
						H.id_hand = S.id_hand AND \
						length(H.str_aggressors_p) >= 3 AND \
						H.cnt_players_f = 2 AND \
						NOT S.flg_hero AND \
						S.cnt_players between " MIN_PLAYERS_AT_TABLE " AND " MAX_PLAYERS_AT_TABLE " AND \
						S.id_gametype = %GAMETYPE% AND \
						P.id_site = %SITEID% AND \
						REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%' AND \
						S.id_action_p = l.id_action) foo",
				// stat_group
				pt_group_advanced
	},
#endif

#if PT4_QUERY_SUPPORT__FLOP_B2_FOLD_TO_CBET
				// PT4  query to get FLOP fold to cbet 
	{
		PT4_QUERY_SUPPORT__FLOP_B2_FOLD_TO_CBET,
		// name
		{ "flop_b2_fold_to_cbet_op", "flop_b2_fold_to_cbet_ip" },
		// description_for_editor
		{ "Poker Tracker flop b2 fold to cbet OP","Poker Tracker flop b2 fold to cbet IP" },
		// query
		"SELECT (case when ActionOpportunities1 = 0 then -1 \
				 else cast(ActionCount1 as real) / ActionOpportunities1 \
				 end) as result1, ActionOpportunities1, \
				(case when ActionOpportunities2 = 0 then -1 \
				 else cast(ActionCount2 as real) / ActionOpportunities2 \
				 end) as result2, ActionOpportunities2 \
		 FROM	(SELECT	sum(case when S.position > S.val_f_bet_aggressor_pos AND (m.action = 'XF' or m.action = 'F') then 1 else 0 end) \
						 as ActionCount1, \
						sum(case when S.position > S.val_f_bet_aggressor_pos then 1 else 0 end) \
						 as ActionOpportunities1, \
						 sum(case when S.position < S.val_f_bet_aggressor_pos AND (m.action = 'XF' or m.action = 'F') then 1 else 0 end) \
						 as ActionCount2, \
						 sum(case when S.position < S.val_f_bet_aggressor_pos then 1 else 0 end) \
						 as ActionOpportunities2 \
				 FROM	player as P, %TYPE%_hand_player_statistics as S, lookup_actions m, %TYPE%_hand_summary H \
				 WHERE	S.id_player = P.id_player AND \
						H.id_hand = S.id_hand AND \
						length(H.str_aggressors_p) >= 3 AND \
						H.cnt_players_f = 2 AND \
						NOT S.flg_hero AND \
						S.cnt_players between " MIN_PLAYERS_AT_TABLE " AND " MAX_PLAYERS_AT_TABLE " AND \
						S.id_gametype = %GAMETYPE% AND \
						P.id_site = %SITEID% AND \
						REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%' AND \
						S.id_action_f = m.id_action AND \
						S.val_p_raise_aggressor_pos = S.val_f_bet_aggressor_pos AND \
						S.val_f_bet_aggressor_pos != -1 AND \
						S.amt_f_raise_facing = 0) foo",
				// stat_group
				pt_group_advanced
	},
#endif

#if PT4_QUERY_SUPPORT__FLOP_B2_RAISE_CBET
				// PT4  query to get raise cbet on FLOP 
	{
		PT4_QUERY_SUPPORT__FLOP_B2_RAISE_CBET,
		// name
		{ "flop_b2_raise_cbet_op", "flop_b2_raise_cbet_ip" },
		// description_for_editor
		{ "Poker Tracker flop b2 raise cbet OP","Poker Tracker flop b2 raise cbet IP" },
		// query
		"SELECT (case when ActionOpportunities1 = 0 then -1 \
				 else cast(ActionCount1 as real) / ActionOpportunities1 \
				 end) as result1, ActionOpportunities1, \
				(case when ActionOpportunities2 = 0 then -1 \
				 else cast(ActionCount2 as real) / ActionOpportunities2 \
				 end) as result2, ActionOpportunities2 \
		 FROM	(SELECT	sum(case when S.position > S.val_f_bet_aggressor_pos AND (substring(m.action from 1 for 1) = 'R' or substring(m.action from 1 for 2) = 'XR') then 1 else 0 end) \
						 as ActionCount1, \
						sum(case when S.position > S.val_f_bet_aggressor_pos then 1 else 0 end) \
						 as ActionOpportunities1, \
						 sum(case when S.position < S.val_f_bet_aggressor_pos AND (substring(m.action from 1 for 1) = 'R' or substring(m.action from 1 for 2) = 'XR') then 1 else 0 end) \
						 as ActionCount2, \
						 sum(case when S.position < S.val_f_bet_aggressor_pos then 1 else 0 end) \
						 as ActionOpportunities2 \
				 FROM	player as P, %TYPE%_hand_player_statistics as S, lookup_actions m, %TYPE%_hand_summary H \
				 WHERE	S.id_player = P.id_player AND \
						H.id_hand = S.id_hand AND \
						length(H.str_aggressors_p) >= 3 AND \
						H.cnt_players_f = 2 AND \
						NOT S.flg_hero AND \
						S.cnt_players between " MIN_PLAYERS_AT_TABLE " AND " MAX_PLAYERS_AT_TABLE " AND \
						S.id_gametype = %GAMETYPE% AND \
						P.id_site = %SITEID% AND \
						REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%' AND \
						S.id_action_f = m.id_action AND \
						S.val_p_raise_aggressor_pos = S.val_f_bet_aggressor_pos AND \
						S.val_f_bet_aggressor_pos != -1 AND \
						S.amt_f_raise_facing = 0) foo",
				// stat_group
				pt_group_advanced
	},
#endif

#if PT4_QUERY_SUPPORT__FLOP_B2_DONKBET
				// PT4  query to get FLOP donkbet 
	{
		PT4_QUERY_SUPPORT__FLOP_B2_DONKBET,
		// name
		{ "flop_b2_donkbet" },
		// description_for_editor
		{ "Poker Tracker flop b2 donkbet" },
		// query
		"SELECT (case when ActionOpportunities = 0 then -1 \
				 else cast(ActionCount as real) / ActionOpportunities \
				 end) as result, ActionOpportunities \
		 FROM	(SELECT	sum(case when flg_f_bet then 1 else 0 end) \
						 as ActionCount, \
						sum(case when true then 1 else 0 end) \
						 as ActionOpportunities \
				 FROM	player as P, %TYPE%_hand_player_statistics as S, lookup_actions l, %TYPE%_hand_summary H \
				 WHERE	S.id_player = P.id_player AND \
						H.id_hand = S.id_hand AND \
						length(H.str_aggressors_p) >= 3 AND \
						H.cnt_players_f = 2 AND \
						NOT S.flg_hero AND \
						S.cnt_players between " MIN_PLAYERS_AT_TABLE " AND " MAX_PLAYERS_AT_TABLE " AND \
						S.id_gametype = %GAMETYPE% AND \
						P.id_site = %SITEID% AND \
						REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%' AND \
						S.val_p_raise_aggressor_pos < S.position AND \
						S.val_p_raise_aggressor_pos != -1 AND \
						l.action LIKE '%C' AND \
						S.id_action_p = l.id_action AND \
						S.flg_f_open_opp) foo",
				// stat_group
				pt_group_advanced
	},
#endif

#if PT4_QUERY_SUPPORT__FLOP_B2_FOLD_TO_DONKBET
				// PT4  query to get FLOP fold to donkbet
	{
		PT4_QUERY_SUPPORT__FLOP_B2_FOLD_TO_DONKBET,
		// name
		{ "flop_b2_fold_to_donkbet" },
		// description_for_editor
		{ "Poker Tracker flop b2 fold to donkbet" },
		// query
		"SELECT (case when ActionOpportunities1 = 0 then -1 \
				 else cast(ActionCount1 as real) / ActionOpportunities1 \
				 end) as result1, ActionOpportunities1 \
		 FROM	(SELECT	sum(case when (m.action = 'F' OR m.action = 'XF') then 1 else 0 end) \
						 as ActionCount1, \
						count(*) \
						 as ActionOpportunities1 \
				 FROM	player as P, %TYPE%_hand_player_statistics as S, lookup_actions m, %TYPE%_hand_summary H \
				 WHERE	S.id_player = P.id_player AND \
						H.id_hand = S.id_hand AND \
						length(H.str_aggressors_p) >= 3 AND \
						H.cnt_players_f = 2 AND \
						NOT S.flg_hero AND \
						S.cnt_players between " MIN_PLAYERS_AT_TABLE " AND " MAX_PLAYERS_AT_TABLE " AND \
						S.id_gametype = %GAMETYPE% AND \
						P.id_site = %SITEID% AND \
						REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%' AND \
						S.id_action_f = m.id_action AND \
						amt_f_bet_facing > 0 AND \
						(flg_p_first_raise OR flg_p_face_raise) AND \
						((S.val_p_raise_aggressor_pos < S.val_f_bet_aggressor_pos AND S.val_p_raise_aggressor_pos != -1) \
						 OR (S.position < S.val_f_bet_aggressor_pos AND S.val_p_raise_aggressor_pos = -1))) foo",
				// stat_group
				pt_group_advanced
	},
#endif

#if PT4_QUERY_SUPPORT__FLOP_B2_RAISE_DONKBET
				// PT4  query to get raise donkbet on FLOP 
	{
		PT4_QUERY_SUPPORT__FLOP_B2_RAISE_DONKBET,
		// name
		{ "flop_b2_raise_donkbet" },
		// description_for_editor
		{ "Poker Tracker flop b2 raise donkbet" },
		// query
		"SELECT (case when ActionOpportunities1 = 0 then -1 \
				 else cast(ActionCount1 as real) / ActionOpportunities1 \
				 end) as result1, ActionOpportunities1 \
		 FROM	(SELECT	sum(case when (m.action = 'R' OR m.action = 'XR') then 1 else 0 end) \
						 as ActionCount1, \
						count(*) \
						 as ActionOpportunities1 \
				 FROM	player as P, %TYPE%_hand_player_statistics as S, lookup_actions m, %TYPE%_hand_summary H \
				 WHERE	S.id_player = P.id_player AND \
						H.id_hand = S.id_hand AND \
						length(H.str_aggressors_p) >= 3 AND \
						H.cnt_players_f = 2 AND \
						NOT S.flg_hero AND \
						S.cnt_players between " MIN_PLAYERS_AT_TABLE " AND " MAX_PLAYERS_AT_TABLE " AND \
						S.id_gametype = %GAMETYPE% AND \
						P.id_site = %SITEID% AND \
						REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%' AND \
						S.id_action_f = m.id_action AND \
						amt_f_bet_facing > 0 AND \
						(flg_p_first_raise OR flg_p_face_raise) AND \
						((S.val_p_raise_aggressor_pos < S.val_f_bet_aggressor_pos AND S.val_p_raise_aggressor_pos != -1) \
						 OR (S.position < S.val_f_bet_aggressor_pos AND S.val_p_raise_aggressor_pos = -1))) foo",
				pt_group_advanced
	},
#endif

#if PT4_QUERY_SUPPORT__FLOP_B2_FLOAT
				// PT4  query to get flop float 
	{
		PT4_QUERY_SUPPORT__FLOP_B2_FLOAT,
		// name
		{ "flop_b2_float" },
		// description_for_editor
		{ "Poker Tracker flop b2 float" },
		// query
		"SELECT (case when ActionOpportunities = 0 then -1 \
				 else cast(ActionCount as real) / ActionOpportunities \
				 end) as result, ActionOpportunities \
		 FROM	(SELECT	sum(case when flg_f_bet then 1 else 0 end) \
						 as ActionCount, \
						sum(case when true then 1 else 0 end) \
						 as ActionOpportunities \
				 FROM	player as P, %TYPE%_hand_player_statistics as S, lookup_actions l, %TYPE%_hand_summary H \
				 WHERE	S.id_player = P.id_player AND \
						H.id_hand = S.id_hand AND \
						length(H.str_aggressors_p) >= 3 AND \
						H.cnt_players_f = 2 AND \
						NOT S.flg_hero AND \
						S.cnt_players between " MIN_PLAYERS_AT_TABLE " AND " MAX_PLAYERS_AT_TABLE " AND \
						S.id_gametype = %GAMETYPE% AND \
						P.id_site = %SITEID% AND \
						REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%' AND \
						S.val_p_raise_aggressor_pos > S.position AND \
						S.val_p_raise_aggressor_pos != -1 AND \
						l.action LIKE '%C' AND \
						S.id_action_p = l.id_action AND \
						S.flg_f_open_opp) foo",
				// stat_group
				pt_group_advanced
	},
#endif

#if PT4_QUERY_SUPPORT__FLOP_B2_FOLD_TO_FLOAT
				// PT4  query to get FLOP fold to float
	{
		PT4_QUERY_SUPPORT__FLOP_B2_FOLD_TO_FLOAT,
		// name
		{ "flop_b2_fold_to_float" },
		// description_for_editor
		{ "Poker Tracker flop b2 fold to float" },
		// query
		"SELECT (case when ActionOpportunities1 = 0 then -1 \
				 else cast(ActionCount1 as real) / ActionOpportunities1 \
				 end) as result1, ActionOpportunities1 \
		 FROM	(SELECT	sum(case when (m.action = 'F' OR m.action = 'XF') then 1 else 0 end) \
						 as ActionCount1, \
						count(*) \
						 as ActionOpportunities1 \
				 FROM	player as P, %TYPE%_hand_player_statistics as S, lookup_actions m, %TYPE%_hand_summary H \
				 WHERE	S.id_player = P.id_player AND \
						H.id_hand = S.id_hand AND \
						length(H.str_aggressors_p) >= 3 AND \
						H.cnt_players_f = 2 AND \
						NOT S.flg_hero AND \
						S.cnt_players between " MIN_PLAYERS_AT_TABLE " AND " MAX_PLAYERS_AT_TABLE " AND \
						S.id_gametype = %GAMETYPE% AND \
						P.id_site = %SITEID% AND \
						REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%' AND \
						S.id_action_f = m.id_action AND \
						amt_f_bet_facing > 0 AND \
						(flg_p_first_raise OR flg_p_face_raise) AND \
						((S.val_p_raise_aggressor_pos > S.val_f_bet_aggressor_pos AND S.val_p_raise_aggressor_pos != -1) \
						 OR (S.position > S.val_f_bet_aggressor_pos AND S.val_p_raise_aggressor_pos = -1))) foo",
				// stat_group
				pt_group_advanced
	},
#endif

#if PT4_QUERY_SUPPORT__FLOP_B2_RAISE_FLOAT
				// PT4  query to get raise float on FLOP 
	{
		PT4_QUERY_SUPPORT__FLOP_B2_RAISE_FLOAT,
		// name
		{ "flop_b2_raise_float" },
		// description_for_editor
		{ "Poker Tracker flop b2 raise float" },
		// query
		"SELECT (case when ActionOpportunities1 = 0 then -1 \
				else cast(ActionCount1 as real) / ActionOpportunities1 \
				end) as result1, ActionOpportunities1 \
		FROM	(SELECT	sum(case when (substring(m.action from 1 for 1) = 'R' OR substring(m.action from 1 for 2) = 'XR') then 1 else 0 end) \
						as ActionCount1, \
						count(*) \
						as ActionOpportunities1 \
				FROM	player as P, %TYPE%_hand_player_statistics as S, lookup_actions m, %TYPE%_hand_summary H \
				WHERE	S.id_player = P.id_player AND \
						H.id_hand = S.id_hand AND \
						length(H.str_aggressors_p) >= 3 AND \
						H.cnt_players_f = 2 AND \
						NOT S.flg_hero AND \
						S.cnt_players between " MIN_PLAYERS_AT_TABLE " AND " MAX_PLAYERS_AT_TABLE " AND \
						S.id_gametype = %GAMETYPE% AND \
						P.id_site = %SITEID% AND \
						REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%' AND \
						S.id_action_f = m.id_action AND \
						amt_f_bet_facing > 0 AND \
						(flg_p_first_raise OR flg_p_face_raise) AND \
						((S.val_p_raise_aggressor_pos > S.val_f_bet_aggressor_pos AND S.val_p_raise_aggressor_pos != -1) \
						OR (S.position > S.val_f_bet_aggressor_pos AND S.val_p_raise_aggressor_pos = -1))) foo",
				// stat_group
				pt_group_advanced
	},
#endif

#if PT4_QUERY_SUPPORT__TURN_B2_CBET
				// PT4  query to get cbet on TURN 
	{
		PT4_QUERY_SUPPORT__TURN_B2_CBET,
		// name
		{ "turn_b2_cbet_op", "turn_b2_cbet_ip" },
		// description_for_editor
		{ "Poker Tracker turn b2 cbet OP", "Poker Tracker turn b2 cbet IP" },
		// query
		"SELECT (case when ActionOpportunities1 = 0 then -1 \
				 else cast(ActionCount1 as real) / ActionOpportunities1 \
				 end) as result1, ActionOpportunities1, \
				(case when ActionOpportunities2 = 0 then -1 \
				 else cast(ActionCount2 as real) / ActionOpportunities2 \
				 end) as result2, ActionOpportunities2 \
		 FROM	(SELECT	sum(case when (l.action LIKE '%B' OR l.action LIKE '%R') AND flg_t_open_opp AND flg_t_first AND flg_t_bet then 1 else 0 end) \
						 as ActionCount1, \
						sum(case when (l.action LIKE '%B' OR l.action LIKE '%R') AND flg_t_open_opp AND flg_t_first then 1 else 0 end) \
						 as ActionOpportunities1, \
						sum(case when (l.action LIKE '%B' OR l.action LIKE '%R') AND flg_t_open_opp AND flg_t_has_position AND flg_t_bet then 1 else 0 end) \
						 as ActionCount2, \
						sum(case when (l.action LIKE '%B' OR l.action LIKE '%R') AND flg_t_open_opp AND flg_t_has_position then 1 else 0 end) \
						 as ActionOpportunities2 \
				 FROM	player as P, %TYPE%_hand_player_statistics as S, lookup_actions l, %TYPE%_hand_summary H \
				 WHERE	S.id_player = P.id_player AND \
						H.id_hand = S.id_hand AND \
						length(H.str_aggressors_f) >= 2 AND \
						H.cnt_players_t = 2 AND \
						NOT S.flg_hero AND \
						S.cnt_players between " MIN_PLAYERS_AT_TABLE " AND " MAX_PLAYERS_AT_TABLE " AND \
						S.id_gametype = %GAMETYPE% AND \
						P.id_site = %SITEID% AND \
						REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%' AND \
						S.id_action_f = l.id_action) foo",
				// stat_group
				pt_group_advanced
	},
#endif

#if PT4_QUERY_SUPPORT__TURN_B2_FOLD_TO_CBET
				// PT4  query to get TURN fold to cbet 
	{
		PT4_QUERY_SUPPORT__TURN_B2_FOLD_TO_CBET,
		// name
		{ "turn_b2_fold_to_cbet_op", "turn_b2_fold_to_cbet_ip" },
		// description_for_editor
		{ "Poker Tracker turn b2 fold to cbet OP","Poker Tracker turn b2 fold to cbet IP" },
		// query
		"SELECT (case when ActionOpportunities1 = 0 then -1 \
				 else cast(ActionCount1 as real) / ActionOpportunities1 \
				 end) as result1, ActionOpportunities1, \
				(case when ActionOpportunities2 = 0 then -1 \
				 else cast(ActionCount2 as real) / ActionOpportunities2 \
				 end) as result2, ActionOpportunities2 \
		 FROM	(SELECT	sum(case when S.position > S.val_f_bet_aggressor_pos AND (m.action = 'XF' or m.action = 'F') then 1 else 0 end) \
						 as ActionCount1, \
						sum(case when S.position > S.val_f_bet_aggressor_pos then 1 else 0 end) \
						 as ActionOpportunities1, \
						 sum(case when S.position < S.val_f_bet_aggressor_pos AND (m.action = 'XF' or m.action = 'F') then 1 else 0 end) \
						 as ActionCount2, \
						 sum(case when S.position < S.val_f_bet_aggressor_pos then 1 else 0 end) \
						 as ActionOpportunities2 \
				 FROM	player as P, %TYPE%_hand_player_statistics as S, lookup_actions l, lookup_actions m, %TYPE%_hand_summary H \
				 WHERE	S.id_player = P.id_player AND \
						H.id_hand = S.id_hand AND \
						length(H.str_aggressors_f) >= 2 AND \
						H.cnt_players_t = 2 AND \
						NOT S.flg_hero AND \
						S.cnt_players between " MIN_PLAYERS_AT_TABLE " AND " MAX_PLAYERS_AT_TABLE " AND \
						S.id_gametype = %GAMETYPE% AND \
						P.id_site = %SITEID% AND \
						REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%' AND \
						S.id_action_t = m.id_action AND \
						S.id_action_f = l.id_action AND \
						l.action like '%C' AND \
						S.amt_t_bet_facing > 0 AND \
						((S.val_f_bet_aggressor_pos = S.val_t_bet_aggressor_pos AND S.val_f_bet_aggressor_pos != -1 AND S.val_f_raise_aggressor_pos = -1) \
						 OR(S.val_f_raise_aggressor_pos = S.val_t_bet_aggressor_pos AND S.val_f_raise_aggressor_pos != -1))) foo",
				// stat_group
				pt_group_advanced
	},
#endif

#if PT4_QUERY_SUPPORT__TURN_B2_RAISE_CBET
				// PT4  query to get raise cbet on TURN 
	{
		PT4_QUERY_SUPPORT__TURN_B2_RAISE_CBET,
		// name
		{ "turn_b2_raise_cbet_op", "turn_b2_raise_cbet_ip" },
		// description_for_editor
		{ "Poker Tracker turn b2 raise cbet OP","Poker Tracker turn b2 raise cbet IP" },
		// query
		"SELECT (case when ActionOpportunities1 = 0 then -1 \
				 else cast(ActionCount1 as real) / ActionOpportunities1 \
				 end) as result1, ActionOpportunities1, \
				(case when ActionOpportunities2 = 0 then -1 \
				 else cast(ActionCount2 as real) / ActionOpportunities2 \
				 end) as result2, ActionOpportunities2 \
		 FROM	(SELECT	sum(case when S.position > S.val_f_bet_aggressor_pos AND (substring(m.action from 1 for 1) = 'R' or substring(m.action from 1 for 2) = 'XR') then 1 else 0 end) \
						 as ActionCount1, \
						sum(case when S.position > S.val_f_bet_aggressor_pos then 1 else 0 end) \
						 as ActionOpportunities1, \
						 sum(case when S.position < S.val_f_bet_aggressor_pos AND (substring(m.action from 1 for 1) = 'R' or substring(m.action from 1 for 2) = 'XR') then 1 else 0 end) \
						 as ActionCount2, \
						 sum(case when S.position < S.val_f_bet_aggressor_pos then 1 else 0 end) \
						 as ActionOpportunities2 \
				 FROM	player as P, %TYPE%_hand_player_statistics as S, lookup_actions l, lookup_actions m, %TYPE%_hand_summary H \
				 WHERE	S.id_player = P.id_player AND \
						H.id_hand = S.id_hand AND \
						length(H.str_aggressors_f) >= 2 AND \
						H.cnt_players_t = 2 AND \
						NOT S.flg_hero AND \
						S.cnt_players between " MIN_PLAYERS_AT_TABLE " AND " MAX_PLAYERS_AT_TABLE " AND \
						S.id_gametype = %GAMETYPE% AND \
						P.id_site = %SITEID% AND \
						REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%' AND \
						S.id_action_t = m.id_action AND \
						S.id_action_f = l.id_action AND \
						l.action like '%C' AND \
						S.amt_t_bet_facing > 0 AND \
						((S.val_f_bet_aggressor_pos = S.val_t_bet_aggressor_pos AND S.val_f_bet_aggressor_pos != -1 AND S.val_f_raise_aggressor_pos = -1) \
						 OR(S.val_f_raise_aggressor_pos = S.val_t_bet_aggressor_pos AND S.val_f_raise_aggressor_pos != -1))) foo",
				// stat_group
				pt_group_advanced
	},
#endif

#if PT4_QUERY_SUPPORT__TURN_B2_DONKBET
				// PT4  query to get TURN donkbet 
	{
		PT4_QUERY_SUPPORT__TURN_B2_DONKBET,
		// name
		{ "turn_b2_donkbet" },
		// description_for_editor
		{ "Poker Tracker turn b2 donkbet" },
		// query
		"SELECT (case when ActionOpportunities = 0 then -1 \
				 else cast(ActionCount as real) / ActionOpportunities \
				 end) as result, ActionOpportunities \
		 FROM	(SELECT	sum(case when flg_t_bet then 1 else 0 end) \
						 as ActionCount, \
						sum(case when true then 1 else 0 end) \
						 as ActionOpportunities \
				 FROM	player as P, %TYPE%_hand_player_statistics as S, lookup_actions l, %TYPE%_hand_summary H \
				 WHERE	S.id_player = P.id_player AND \
						H.id_hand = S.id_hand AND \
						length(H.str_aggressors_f) >= 2 AND \
						H.cnt_players_t = 2 AND \
						NOT S.flg_hero AND \
						S.cnt_players between " MIN_PLAYERS_AT_TABLE " AND " MAX_PLAYERS_AT_TABLE " AND \
						S.id_gametype = %GAMETYPE% AND \
						P.id_site = %SITEID% AND \
						REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%' AND \
						l.action LIKE '%C' AND \
						((S.val_f_raise_aggressor_pos != -1 AND S.val_f_raise_aggressor_pos < S.position) \
						OR (S.val_f_raise_aggressor_pos = -1 AND S.val_f_bet_aggressor_pos < S.position)) AND \
						S.id_action_f = l.id_action AND \
						S.flg_t_open_opp) foo",
				// stat_group
				pt_group_advanced
	},
#endif

#if PT4_QUERY_SUPPORT__TURN_B2_FOLD_TO_DONKBET
				// PT4  query to get TURN fold to donkbet
	{
		PT4_QUERY_SUPPORT__TURN_B2_FOLD_TO_DONKBET,
		// name
		{ "turn_b2_fold_to_donkbet" },
		// description_for_editor
		{ "Poker Tracker turn b2 fold to donkbet" },
		// query
		"SELECT (case when ActionOpportunities1 = 0 then -1 \
				 else cast(ActionCount1 as real) / ActionOpportunities1 \
				 end) as result1, ActionOpportunities1 \
		 FROM	(SELECT	sum(case when (m.action = 'F' OR m.action = 'XF') then 1 else 0 end) \
						 as ActionCount1, \
						count(*) \
						 as ActionOpportunities1 \
				 FROM	player as P, %TYPE%_hand_player_statistics as S, lookup_actions l, lookup_actions m, %TYPE%_hand_summary H \
				 WHERE	S.id_player = P.id_player AND \
						H.id_hand = S.id_hand AND \
						length(H.str_aggressors_f) >= 2 AND \
						H.cnt_players_t = 2 AND \
						NOT S.flg_hero AND \
						S.cnt_players between " MIN_PLAYERS_AT_TABLE " AND " MAX_PLAYERS_AT_TABLE " AND \
						S.id_gametype = %GAMETYPE% AND \
						P.id_site = %SITEID% AND \
						REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%' AND \
						S.id_action_t = m.id_action AND \
						S.id_action_f = l.id_action AND \
						amt_t_bet_facing > 0 AND \
						(flg_f_bet OR cnt_f_raise > 0 OR cnt_f_call > 0) AND \
						((l.action like '%R' AND S.position < S.val_t_bet_aggressor_pos) \
						 OR(l.action like '%B' AND S.position < S.val_t_bet_aggressor_pos))) foo",
				// stat_group
				pt_group_advanced
	},
#endif

#if PT4_QUERY_SUPPORT__TURN_B2_RAISE_DONKBET
				// PT4  query to get raise donkbet on TURN 
	{
		PT4_QUERY_SUPPORT__TURN_B2_RAISE_DONKBET,
		// name
		{ "turn_b2_raise_donkbet" },
		// description_for_editor
		{ "Poker Tracker turn b2 raise donkbet" },
		// query
		"SELECT (case when ActionOpportunities1 = 0 then -1 \
				 else cast(ActionCount1 as real) / ActionOpportunities1 \
				 end) as result1, ActionOpportunities1 \
		 FROM	(SELECT	sum(case when (m.action = 'R' OR m.action = 'XR') then 1 else 0 end) \
						 as ActionCount1, \
						count(*) \
						 as ActionOpportunities1 \
				 FROM	player as P, %TYPE%_hand_player_statistics as S, lookup_actions l, lookup_actions m, %TYPE%_hand_summary H \
				 WHERE	S.id_player = P.id_player AND \
						H.id_hand = S.id_hand AND \
						length(H.str_aggressors_f) >= 2 AND \
						H.cnt_players_t = 2 AND \
						NOT S.flg_hero AND \
						S.cnt_players between " MIN_PLAYERS_AT_TABLE " AND " MAX_PLAYERS_AT_TABLE " AND \
						S.id_gametype = %GAMETYPE% AND \
						P.id_site = %SITEID% AND \
						REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%' AND \
						S.id_action_t = m.id_action AND \
						S.id_action_f = l.id_action AND \
						amt_t_bet_facing > 0 AND \
						(flg_f_bet OR cnt_f_raise > 0 OR cnt_f_call > 0) AND \
						((l.action like '%R' AND S.position < S.val_t_bet_aggressor_pos) \
						 OR(l.action like '%B' AND S.position < S.val_t_bet_aggressor_pos))) foo",
				// stat_group
				pt_group_advanced
	},
#endif

#if PT4_QUERY_SUPPORT__TURN_B2_FLOAT
				// PT4  query to get turn float 
	{
		PT4_QUERY_SUPPORT__TURN_B2_FLOAT,
		// name
		{ "turn_b2_float" },
		// description_for_editor
		{ "Poker Tracker turn b2 float" },
		// query
		"SELECT (case when ActionOpportunities = 0 then -1 \
				 else cast(ActionCount as real) / ActionOpportunities \
				 end) as result, ActionOpportunities \
		 FROM	(SELECT	sum(case when flg_t_bet then 1 else 0 end) \
						 as ActionCount, \
						sum(case when true then 1 else 0 end) \
						 as ActionOpportunities \
				 FROM	player as P, %TYPE%_hand_player_statistics as S, lookup_actions l, %TYPE%_hand_summary H \
				 WHERE	S.id_player = P.id_player AND \
						H.id_hand = S.id_hand AND \
						length(H.str_aggressors_f) >= 2 AND \
						H.cnt_players_t = 2 AND \
						NOT S.flg_hero AND \
						S.cnt_players between " MIN_PLAYERS_AT_TABLE " AND " MAX_PLAYERS_AT_TABLE " AND \
						S.id_gametype = %GAMETYPE% AND \
						P.id_site = %SITEID% AND \
						REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%' AND \
						l.action LIKE '%C' AND \
						((S.val_f_raise_aggressor_pos != -1 AND S.val_f_raise_aggressor_pos > S.position) \
						OR (S.val_f_raise_aggressor_pos = -1 AND S.val_f_bet_aggressor_pos > S.position)) AND \
						S.id_action_f = l.id_action AND \
						S.flg_t_open_opp) foo",
				// stat_group
				pt_group_advanced
	},
#endif

#if PT4_QUERY_SUPPORT__TURN_B2_FOLD_TO_FLOAT
				// PT4  query to get TURN fold to float
	{
		PT4_QUERY_SUPPORT__TURN_B2_FOLD_TO_FLOAT,
		// name
		{ "turn_b2_fold_to_float" },
		// description_for_editor
		{ "Poker Tracker turn b2 fold to float" },
		// query
		"SELECT (case when ActionOpportunities1 = 0 then -1 \
				else cast(ActionCount1 as real) / ActionOpportunities1 \
				end) as result1, ActionOpportunities1 \
		FROM	(SELECT	sum(case when (m.action = 'F' OR m.action = 'XF') then 1 else 0 end) \
						as ActionCount1, \
						count(*) \
						as ActionOpportunities1 \
				FROM	player as P, %TYPE%_hand_player_statistics as S, lookup_actions l, lookup_actions m, %TYPE%_hand_summary H \
				WHERE	S.id_player = P.id_player AND \
						H.id_hand = S.id_hand AND \
						length(H.str_aggressors_f) >= 2 AND \
						H.cnt_players_t = 2 AND \
					NOT S.flg_hero AND \
						S.cnt_players between " MIN_PLAYERS_AT_TABLE " AND " MAX_PLAYERS_AT_TABLE " AND \
					S.id_gametype = %GAMETYPE% AND \
					P.id_site = %SITEID% AND \
					REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%' AND \
					S.id_action_t = m.id_action AND \
					S.id_action_f = l.id_action AND \
					amt_t_bet_facing > 0 AND \
					(flg_f_bet OR cnt_f_raise > 0 OR cnt_f_call > 0) AND \
					((l.action like '%R' AND S.position > S.val_t_bet_aggressor_pos) \
						OR(l.action like '%B' AND S.position > S.val_t_bet_aggressor_pos))) foo",
				// stat_group
				pt_group_advanced
	},
#endif

#if PT4_QUERY_SUPPORT__TURN_B2_RAISE_FLOAT
				// PT4  query to get raise float on TURN 
	{
		PT4_QUERY_SUPPORT__TURN_B2_RAISE_FLOAT,
		// name
		{ "turn_b2_raise_float" },
		// description_for_editor
		{ "Poker Tracker turn b2 raise float" },
		// query
		"SELECT (case when ActionOpportunities1 = 0 then -1 \
				else cast(ActionCount1 as real) / ActionOpportunities1 \
				end) as result1, ActionOpportunities1 \
		FROM	(SELECT	sum(case when (m.action = 'R' OR m.action = 'XR') then 1 else 0 end) \
						as ActionCount1, \
						count(*) \
						as ActionOpportunities1 \
				FROM	player as P, %TYPE%_hand_player_statistics as S, lookup_actions l, lookup_actions m, %TYPE%_hand_summary H \
				WHERE	S.id_player = P.id_player AND \
						H.id_hand = S.id_hand AND \
						length(H.str_aggressors_f) >= 2 AND \
						H.cnt_players_t = 2 AND \
					NOT S.flg_hero AND \
						S.cnt_players between " MIN_PLAYERS_AT_TABLE " AND " MAX_PLAYERS_AT_TABLE " AND \
					S.id_gametype = %GAMETYPE% AND \
					P.id_site = %SITEID% AND \
					REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%' AND \
					S.id_action_t = m.id_action AND \
					S.id_action_f = l.id_action AND \
					amt_t_bet_facing > 0 AND \
					(flg_f_bet OR cnt_f_raise > 0 OR cnt_f_call > 0) AND \
					((l.action like '%R' AND S.position > S.val_t_bet_aggressor_pos) \
						OR(l.action like '%B' AND S.position > S.val_t_bet_aggressor_pos))) foo",
				// stat_group
				pt_group_advanced
	},
#endif

#if PT4_QUERY_SUPPORT__RIVER_B2_CBET
				// PT4  query to get cbet on RIVER 
	{
		PT4_QUERY_SUPPORT__RIVER_B2_CBET,
		// name
		{ "river_b2_cbet_op", "river_b2_cbet_ip" },
		// description_for_editor
		{ "Poker Tracker river b2 cbet OP", "Poker Tracker river b2 cbet IP" },
		// query
		"SELECT (case when ActionOpportunities1 = 0 then -1 \
				 else cast(ActionCount1 as real) / ActionOpportunities1 \
				 end) as result1, ActionOpportunities1, \
				(case when ActionOpportunities2 = 0 then -1 \
				 else cast(ActionCount2 as real) / ActionOpportunities2 \
				 end) as result2, ActionOpportunities2 \
		 FROM	(SELECT	sum(case when (l.action LIKE '%B' OR l.action LIKE '%R') AND flg_r_open_opp AND flg_r_first AND flg_r_bet then 1 else 0 end) \
						 as ActionCount1, \
						sum(case when (l.action LIKE '%B' OR l.action LIKE '%R') AND flg_r_open_opp AND flg_r_first then 1 else 0 end) \
						 as ActionOpportunities1, \
						sum(case when (l.action LIKE '%B' OR l.action LIKE '%R') AND flg_r_open_opp AND flg_r_has_position AND flg_r_bet then 1 else 0 end) \
						 as ActionCount2, \
						sum(case when (l.action LIKE '%B' OR l.action LIKE '%R') AND flg_r_open_opp AND flg_r_has_position then 1 else 0 end) \
						 as ActionOpportunities2 \
				 FROM	player as P, %TYPE%_hand_player_statistics as S, lookup_actions l, %TYPE%_hand_summary H \
				 WHERE	S.id_player = P.id_player AND \
						H.id_hand = S.id_hand AND \
						length(H.str_aggressors_t) >= 2 AND \
						H.cnt_players_r = 2 AND \
						NOT S.flg_hero AND \
						S.cnt_players between " MIN_PLAYERS_AT_TABLE " AND " MAX_PLAYERS_AT_TABLE " AND \
						S.id_gametype = %GAMETYPE% AND \
						P.id_site = %SITEID% AND \
						REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%' AND \
						S.id_action_t = l.id_action) foo",
				// stat_group
				pt_group_advanced
	},
#endif

#if PT4_QUERY_SUPPORT__RIVER_B2_FOLD_TO_CBET
				// PT4  query to get RIVER fold to cbet 
	{
		PT4_QUERY_SUPPORT__RIVER_B2_FOLD_TO_CBET,
		// name
		{ "river_b2_fold_to_cbet_op", "river_b2_fold_to_cbet_ip" },
		// description_for_editor
		{ "Poker Tracker river b2 fold to cbet OP","Poker Tracker river b2 fold to cbet IP" },
		// query
		"SELECT (case when ActionOpportunities1 = 0 then -1 \
				 else cast(ActionCount1 as real) / ActionOpportunities1 \
				 end) as result1, ActionOpportunities1, \
				(case when ActionOpportunities2 = 0 then -1 \
				 else cast(ActionCount2 as real) / ActionOpportunities2 \
				 end) as result2, ActionOpportunities2 \
		 FROM	(SELECT	sum(case when S.position > S.val_f_bet_aggressor_pos AND (m.action = 'XF' or m.action = 'F') then 1 else 0 end) \
						 as ActionCount1, \
						sum(case when S.position > S.val_f_bet_aggressor_pos then 1 else 0 end) \
						 as ActionOpportunities1, \
						 sum(case when S.position < S.val_f_bet_aggressor_pos AND (m.action = 'XF' or m.action = 'F') then 1 else 0 end) \
						 as ActionCount2, \
						 sum(case when S.position < S.val_f_bet_aggressor_pos then 1 else 0 end) \
						 as ActionOpportunities2 \
				 FROM	player as P, %TYPE%_hand_player_statistics as S, lookup_actions l, lookup_actions m, %TYPE%_hand_summary H \
				 WHERE	S.id_player = P.id_player AND \
						H.id_hand = S.id_hand AND \
						length(H.str_aggressors_t) >= 2 AND \
						H.cnt_players_r = 2 AND \
						NOT S.flg_hero AND \
						S.cnt_players between " MIN_PLAYERS_AT_TABLE " AND " MAX_PLAYERS_AT_TABLE " AND \
						S.id_gametype = %GAMETYPE% AND \
						P.id_site = %SITEID% AND \
						REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%' AND \
						S.id_action_r = m.id_action AND \
						S.id_action_t = l.id_action AND \
						l.action like '%C' AND \
						S.amt_r_bet_facing > 0 AND \
						((S.val_t_bet_aggressor_pos = S.val_r_bet_aggressor_pos AND S.val_t_bet_aggressor_pos != -1 AND S.val_t_raise_aggressor_pos = -1) \
						 OR(S.val_t_raise_aggressor_pos = S.val_r_bet_aggressor_pos AND S.val_t_raise_aggressor_pos != -1))) foo",
				// stat_group
				pt_group_advanced
	},
#endif

#if PT4_QUERY_SUPPORT__RIVER_B2_RAISE_CBET
				// PT4  query to get raise cbet on RIVER 
	{
		PT4_QUERY_SUPPORT__RIVER_B2_RAISE_CBET,
		// name
		{ "river_b2_raise_cbet_op", "river_b2_raise_cbet_ip" },
		// description_for_editor
		{ "Poker Tracker river b2 raise cbet OP","Poker Tracker river b2 raise cbet IP" },
		// query
		"SELECT (case when ActionOpportunities1 = 0 then -1 \
				 else cast(ActionCount1 as real) / ActionOpportunities1 \
				 end) as result1, ActionOpportunities1, \
				(case when ActionOpportunities2 = 0 then -1 \
				 else cast(ActionCount2 as real) / ActionOpportunities2 \
				 end) as result2, ActionOpportunities2 \
		 FROM	(SELECT	sum(case when S.position > S.val_f_bet_aggressor_pos AND (substring(m.action from 1 for 1) = 'R' or substring(m.action from 1 for 2) = 'XR') then 1 else 0 end) \
						 as ActionCount1, \
						sum(case when S.position > S.val_f_bet_aggressor_pos then 1 else 0 end) \
						 as ActionOpportunities1, \
						 sum(case when S.position < S.val_f_bet_aggressor_pos AND (substring(m.action from 1 for 1) = 'R' or substring(m.action from 1 for 2) = 'XR') then 1 else 0 end) \
						 as ActionCount2, \
						 sum(case when S.position < S.val_f_bet_aggressor_pos then 1 else 0 end) \
						 as ActionOpportunities2 \
				 FROM	player as P, %TYPE%_hand_player_statistics as S, lookup_actions l, lookup_actions m, %TYPE%_hand_summary H \
				 WHERE	S.id_player = P.id_player AND \
						H.id_hand = S.id_hand AND \
						length(H.str_aggressors_t) >= 2 AND \
						H.cnt_players_r = 2 AND \
						NOT S.flg_hero AND \
						S.cnt_players between " MIN_PLAYERS_AT_TABLE " AND " MAX_PLAYERS_AT_TABLE " AND \
						S.id_gametype = %GAMETYPE% AND \
						P.id_site = %SITEID% AND \
						REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%' AND \
						S.id_action_r = m.id_action AND \
						S.id_action_t = l.id_action AND \
						l.action like '%C' AND \
						S.amt_r_bet_facing > 0 AND \
						((S.val_t_bet_aggressor_pos = S.val_r_bet_aggressor_pos AND S.val_t_bet_aggressor_pos != -1 AND S.val_t_raise_aggressor_pos = -1) \
						 OR(S.val_t_raise_aggressor_pos = S.val_r_bet_aggressor_pos AND S.val_t_raise_aggressor_pos != -1))) foo",
				// stat_group
				pt_group_advanced
	},
#endif

#if PT4_QUERY_SUPPORT__RIVER_B2_DONKBET
				// PT4  query to get RIVER donkbet 
	{
		PT4_QUERY_SUPPORT__RIVER_B2_DONKBET,
		// name
		{ "river_b2_donkbet" },
		// description_for_editor
		{ "Poker Tracker river b2 donkbet" },
		// query
		"SELECT (case when ActionOpportunities = 0 then -1 \
				 else cast(ActionCount as real) / ActionOpportunities \
				 end) as result, ActionOpportunities \
		 FROM	(SELECT	sum(case when flg_r_bet then 1 else 0 end) \
						 as ActionCount, \
						sum(case when true then 1 else 0 end) \
						 as ActionOpportunities \
				 FROM	player as P, %TYPE%_hand_player_statistics as S, lookup_actions l, %TYPE%_hand_summary H \
				 WHERE	S.id_player = P.id_player AND \
						H.id_hand = S.id_hand AND \
						length(H.str_aggressors_t) >= 2 AND \
						H.cnt_players_r = 2 AND \
						NOT S.flg_hero AND \
						S.cnt_players between " MIN_PLAYERS_AT_TABLE " AND " MAX_PLAYERS_AT_TABLE " AND \
						S.id_gametype = %GAMETYPE% AND \
						P.id_site = %SITEID% AND \
						REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%' AND \
						l.action LIKE '%C' AND \
						((S.val_t_raise_aggressor_pos != -1 AND S.val_t_raise_aggressor_pos < S.position) \
						OR (S.val_t_raise_aggressor_pos = -1 AND S.val_t_bet_aggressor_pos < S.position)) AND \
						S.id_action_t = l.id_action AND \
						S.flg_r_open_opp) foo",
				// stat_group
				pt_group_advanced
	},
#endif

#if PT4_QUERY_SUPPORT__RIVER_B2_FOLD_TO_DONKBET
				// PT4  query to get RIVER fold to donkbet
	{
		PT4_QUERY_SUPPORT__RIVER_B2_FOLD_TO_DONKBET,
		// name
		{ "river_b2_fold_to_donkbet" },
		// description_for_editor
		{ "Poker Tracker river b2 fold to donkbet" },
		// query
		"SELECT (case when ActionOpportunities1 = 0 then -1 \
				 else cast(ActionCount1 as real) / ActionOpportunities1 \
				 end) as result1, ActionOpportunities1 \
		 FROM	(SELECT	sum(case when (m.action = 'F' OR m.action = 'XF') then 1 else 0 end) \
						 as ActionCount1, \
						count(*) \
						 as ActionOpportunities1 \
				 FROM	player as P, %TYPE%_hand_player_statistics as S, lookup_actions l, lookup_actions m, %TYPE%_hand_summary H \
				 WHERE	S.id_player = P.id_player AND \
						H.id_hand = S.id_hand AND \
						length(H.str_aggressors_t) >= 2 AND \
						H.cnt_players_r = 2 AND \
						NOT S.flg_hero AND \
						S.cnt_players between " MIN_PLAYERS_AT_TABLE " AND " MAX_PLAYERS_AT_TABLE " AND \
						S.id_gametype = %GAMETYPE% AND \
						P.id_site = %SITEID% AND \
						REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%' AND \
						S.id_action_r = m.id_action AND \
						S.id_action_t = l.id_action AND \
						amt_r_bet_facing > 0 AND \
						(flg_t_bet OR cnt_t_raise > 0 OR cnt_t_call > 0) AND \
						((l.action like '%R' AND S.position < S.val_r_bet_aggressor_pos) \
						 OR(l.action like '%B' AND S.position < S.val_r_bet_aggressor_pos))) foo",
				// stat_group
				pt_group_advanced
	},
#endif

#if PT4_QUERY_SUPPORT__RIVER_B2_RAISE_DONKBET
				// PT4  query to get raise donkbet on RIVER 
	{
		PT4_QUERY_SUPPORT__RIVER_B2_RAISE_DONKBET,
		// name
		{ "river_b2_raise_donkbet" },
		// description_for_editor
		{ "Poker Tracker river b2 raise donkbet" },
		// query
		"SELECT (case when ActionOpportunities1 = 0 then -1 \
				 else cast(ActionCount1 as real) / ActionOpportunities1 \
				 end) as result1, ActionOpportunities1 \
		 FROM	(SELECT	sum(case when (m.action = 'R' OR m.action = 'XR') then 1 else 0 end) \
						 as ActionCount1, \
						count(*) \
						 as ActionOpportunities1 \
				 FROM	player as P, %TYPE%_hand_player_statistics as S, lookup_actions l, lookup_actions m, %TYPE%_hand_summary H \
				 WHERE	S.id_player = P.id_player AND \
						H.id_hand = S.id_hand AND \
						length(H.str_aggressors_t) >= 2 AND \
						H.cnt_players_r = 2 AND \
						NOT S.flg_hero AND \
						S.cnt_players between " MIN_PLAYERS_AT_TABLE " AND " MAX_PLAYERS_AT_TABLE " AND \
						S.id_gametype = %GAMETYPE% AND \
						P.id_site = %SITEID% AND \
						REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%' AND \
						S.id_action_r = m.id_action AND \
						S.id_action_t = l.id_action AND \
						amt_r_bet_facing > 0 AND \
						(flg_t_bet OR cnt_t_raise > 0 OR cnt_t_call > 0) AND \
						((l.action like '%R' AND S.position < S.val_r_bet_aggressor_pos) \
						 OR(l.action like '%B' AND S.position < S.val_r_bet_aggressor_pos))) foo",
				// stat_group
				pt_group_advanced
	},
#endif

#if PT4_QUERY_SUPPORT__RIVER_B2_FLOAT
				// PT4  query to get river float 
	{
		PT4_QUERY_SUPPORT__RIVER_B2_FLOAT,
		// name
		{ "river_b2_float" },
		// description_for_editor
		{ "Poker Tracker river b2 float" },
		// query
		"SELECT (case when ActionOpportunities = 0 then -1 \
				 else cast(ActionCount as real) / ActionOpportunities \
				 end) as result, ActionOpportunities \
		 FROM	(SELECT	sum(case when flg_r_bet then 1 else 0 end) \
						 as ActionCount, \
						sum(case when true then 1 else 0 end) \
						 as ActionOpportunities \
				 FROM	player as P, %TYPE%_hand_player_statistics as S, lookup_actions l, %TYPE%_hand_summary H \
				 WHERE	S.id_player = P.id_player AND \
						H.id_hand = S.id_hand AND \
						length(H.str_aggressors_t) >= 2 AND \
						H.cnt_players_r = 2 AND \
						NOT S.flg_hero AND \
						S.cnt_players between " MIN_PLAYERS_AT_TABLE " AND " MAX_PLAYERS_AT_TABLE " AND \
						S.id_gametype = %GAMETYPE% AND \
						P.id_site = %SITEID% AND \
						REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%' AND \
						l.action LIKE '%C' AND \
						((S.val_t_raise_aggressor_pos != -1 AND S.val_t_raise_aggressor_pos > S.position) \
						OR (S.val_t_raise_aggressor_pos = -1 AND S.val_t_bet_aggressor_pos > S.position)) AND \
						S.id_action_t = l.id_action AND \
						S.flg_r_open_opp) foo",
				// stat_group
				pt_group_advanced
	},
#endif

#if PT4_QUERY_SUPPORT__RIVER_B2_FOLD_TO_FLOAT
				// PT4  query to get RIVER fold to float
	{
		PT4_QUERY_SUPPORT__RIVER_B2_FOLD_TO_FLOAT,
		// name
		{ "river_b2_fold_to_float" },
		// description_for_editor
		{ "Poker Tracker river b2 fold to float" },
		// query
		"SELECT (case when ActionOpportunities1 = 0 then -1 \
				else cast(ActionCount1 as real) / ActionOpportunities1 \
				end) as result1, ActionOpportunities1 \
		FROM	(SELECT	sum(case when (m.action = 'F' OR m.action = 'XF') then 1 else 0 end) \
						as ActionCount1, \
						count(*) \
						as ActionOpportunities1 \
				FROM	player as P, %TYPE%_hand_player_statistics as S, lookup_actions l, lookup_actions m, %TYPE%_hand_summary H \
				WHERE	S.id_player = P.id_player AND \
						H.id_hand = S.id_hand AND \
						length(H.str_aggressors_t) >= 2 AND \
						H.cnt_players_r = 2 AND \
						NOT S.flg_hero AND \
						S.cnt_players between " MIN_PLAYERS_AT_TABLE " AND " MAX_PLAYERS_AT_TABLE " AND \
						S.id_gametype = %GAMETYPE% AND \
						P.id_site = %SITEID% AND \
						REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%' AND \
						S.id_action_r = m.id_action AND \
						S.id_action_t = l.id_action AND \
						amt_r_bet_facing > 0 AND \
						(flg_t_bet OR cnt_t_raise > 0 OR cnt_t_call > 0) AND \
						((l.action like '%R' AND S.position > S.val_r_bet_aggressor_pos) \
						OR(l.action like '%B' AND S.position > S.val_r_bet_aggressor_pos))) foo",
				// stat_group
				pt_group_advanced
	},
#endif

#if PT4_QUERY_SUPPORT__RIVER_B2_RAISE_FLOAT
				// PT4  query to get raise float on RIVER 
	{
		PT4_QUERY_SUPPORT__RIVER_B2_RAISE_FLOAT,
		// name
		{ "river_b2_raise_float" },
		// description_for_editor
		{ "Poker Tracker river b2 raise float" },
		// query
		"SELECT (case when ActionOpportunities1 = 0 then -1 \
				else cast(ActionCount1 as real) / ActionOpportunities1 \
				end) as result1, ActionOpportunities1 \
		FROM	(SELECT	sum(case when (m.action = 'R' OR m.action = 'XR') then 1 else 0 end) \
						as ActionCount1, \
						count(*) \
						as ActionOpportunities1 \
				FROM	player as P, %TYPE%_hand_player_statistics as S, lookup_actions l, lookup_actions m, %TYPE%_hand_summary H \
				WHERE	S.id_player = P.id_player AND \
						H.id_hand = S.id_hand AND \
						length(H.str_aggressors_t) >= 2 AND \
						H.cnt_players_r = 2 AND \
						NOT S.flg_hero AND \
						S.cnt_players between " MIN_PLAYERS_AT_TABLE " AND " MAX_PLAYERS_AT_TABLE " AND \
						S.id_gametype = %GAMETYPE% AND \
						P.id_site = %SITEID% AND \
						REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%' AND \
						S.id_action_r = m.id_action AND \
						S.id_action_t = l.id_action AND \
						amt_r_bet_facing > 0 AND \
						(flg_t_bet OR cnt_t_raise > 0 OR cnt_t_call > 0) AND \
						((l.action like '%R' AND S.position > S.val_r_bet_aggressor_pos) \
						OR(l.action like '%B' AND S.position > S.val_r_bet_aggressor_pos))) foo",
				// stat_group
				pt_group_advanced
	},
#endif


#if PT4_QUERY_SUPPORT__FLOP_B2_CBET_MW
				// PT4  query to get cbet mw on FLOP 
	{
		PT4_QUERY_SUPPORT__FLOP_B2_CBET_MW,
		// name
		{ "flop_b2_cbet_mw" },
		// description_for_editor
		{ "Poker Tracker flop b2 cbet mw" },
		// query
		"SELECT (case when ActionOpportunities1 = 0 then -1 \
				 else cast(ActionCount1 as real) / ActionOpportunities1 \
				 end) as result1, ActionOpportunities1 \
		 FROM	(SELECT	sum(case when l.action LIKE '%R' AND flg_f_open_opp AND flg_f_bet then 1 else 0 end) \
						 as ActionCount1, \
						sum(case when l.action LIKE '%R' AND flg_f_open_opp then 1 else 0 end) \
						 as ActionOpportunities1 \
				 FROM	player as P, %TYPE%_hand_player_statistics as S, lookup_actions l, %TYPE%_hand_summary H \
				 WHERE	S.id_player = P.id_player AND \
						H.id_hand = S.id_hand AND \
						length(H.str_aggressors_p) >= 3 AND \
						H.cnt_players_f > 2 AND \
						NOT S.flg_hero AND \
						S.cnt_players between " MIN_PLAYERS_AT_TABLE " AND " MAX_PLAYERS_AT_TABLE " AND \
						S.id_gametype = %GAMETYPE% AND \
						P.id_site = %SITEID% AND \
						REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%' AND \
						S.id_action_p = l.id_action) foo",
				// stat_group
				pt_group_advanced
	},
#endif

#if PT4_QUERY_SUPPORT__FLOP_B2_FOLD_TO_CBET_MW
				// PT4  query to get FLOP fold to cbet mw 
	{
		PT4_QUERY_SUPPORT__FLOP_B2_FOLD_TO_CBET_MW,
		// name
		{ "flop_b2_fold_to_cbet_mw" },
		// description_for_editor
		{ "Poker Tracker flop b2 fold to cbet mw" },
		// query
		"SELECT (case when ActionOpportunities1 = 0 then -1 \
				 else cast(ActionCount1 as real) / ActionOpportunities1 \
				 end) as result1, ActionOpportunities1 \
		 FROM	(SELECT	sum(case when (m.action = 'XF' or m.action = 'F') then 1 else 0 end) \
						 as ActionCount1, \
						count(*) \
						 as ActionOpportunities1 \
				 FROM	player as P, %TYPE%_hand_player_statistics as S, lookup_actions m, %TYPE%_hand_summary H \
				 WHERE	S.id_player = P.id_player AND \
						H.id_hand = S.id_hand AND \
						length(H.str_aggressors_p) >= 3 AND \
						H.cnt_players_f > 2 AND \
						NOT S.flg_hero AND \
						S.cnt_players between " MIN_PLAYERS_AT_TABLE " AND " MAX_PLAYERS_AT_TABLE " AND \
						S.id_gametype = %GAMETYPE% AND \
						P.id_site = %SITEID% AND \
						REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%' AND \
						S.id_action_f = m.id_action AND \
						S.val_p_raise_aggressor_pos = S.val_f_bet_aggressor_pos AND \
						S.val_f_bet_aggressor_pos != -1 AND \
						S.amt_f_raise_facing = 0) foo",
				// stat_group
				pt_group_advanced
	},
#endif

#if PT4_QUERY_SUPPORT__FLOP_B2_RAISE_CBET_MW
				// PT4  query to get raise cbet mw on FLOP 
	{
		PT4_QUERY_SUPPORT__FLOP_B2_RAISE_CBET_MW,
		// name
		{ "flop_b2_raise_cbet_mw" },
		// description_for_editor
		{ "Poker Tracker flop b2 raise cbet mw" },
		// query
		"SELECT (case when ActionOpportunities1 = 0 then -1 \
				 else cast(ActionCount1 as real) / ActionOpportunities1 \
				 end) as result1, ActionOpportunities1 \
		 FROM	(SELECT	sum(case when (substring(m.action from 1 for 1) = 'R' or substring(m.action from 1 for 2) = 'XR') then 1 else 0 end) \
						 as ActionCount1, \
						count(*) \
						 as ActionOpportunities1 \
				 FROM	player as P, %TYPE%_hand_player_statistics as S, lookup_actions m, %TYPE%_hand_summary H \
				 WHERE	S.id_player = P.id_player AND \
						H.id_hand = S.id_hand AND \
						length(H.str_aggressors_p) >= 3 AND \
						H.cnt_players_f > 2 AND \
						NOT S.flg_hero AND \
						S.cnt_players between " MIN_PLAYERS_AT_TABLE " AND " MAX_PLAYERS_AT_TABLE " AND \
						S.id_gametype = %GAMETYPE% AND \
						P.id_site = %SITEID% AND \
						REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%' AND \
						S.id_action_f = m.id_action AND \
						S.val_p_raise_aggressor_pos = S.val_f_bet_aggressor_pos AND \
						S.val_f_bet_aggressor_pos != -1 AND \
						S.amt_f_raise_facing = 0) foo",
				// stat_group
				pt_group_advanced
	},
#endif

#if PT4_QUERY_SUPPORT__FLOP_B2_DONKBET_MW
				// PT4  query to get FLOP donkbet mw 
	{
		PT4_QUERY_SUPPORT__FLOP_B2_DONKBET_MW,
		// name
		{ "flop_b2_donkbet_mw" },
		// description_for_editor
		{ "Poker Tracker flop b2 donkbet mw" },
		// query
		"SELECT (case when ActionOpportunities = 0 then -1 \
				 else cast(ActionCount as real) / ActionOpportunities \
				 end) as result, ActionOpportunities \
		 FROM	(SELECT	sum(case when flg_f_bet then 1 else 0 end) \
						 as ActionCount, \
						sum(case when true then 1 else 0 end) \
						 as ActionOpportunities \
				 FROM	player as P, %TYPE%_hand_player_statistics as S, lookup_actions l, %TYPE%_hand_summary H \
				 WHERE	S.id_player = P.id_player AND \
						H.id_hand = S.id_hand AND \
						length(H.str_aggressors_p) >= 3 AND \
						H.cnt_players_f > 2 AND \
						NOT S.flg_hero AND \
						S.cnt_players between " MIN_PLAYERS_AT_TABLE " AND " MAX_PLAYERS_AT_TABLE " AND \
						S.id_gametype = %GAMETYPE% AND \
						P.id_site = %SITEID% AND \
						REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%' AND \
						S.val_p_raise_aggressor_pos < S.position AND \
						S.val_p_raise_aggressor_pos != -1 AND \
						l.action LIKE '%C' AND \
						S.id_action_p = l.id_action AND \
						S.flg_f_open_opp) foo",
				// stat_group
				pt_group_advanced
	},
#endif

#if PT4_QUERY_SUPPORT__FLOP_B2_FOLD_TO_DONKBET_MW
				// PT4  query to get FLOP fold to donkbet mw
	{
		PT4_QUERY_SUPPORT__FLOP_B2_FOLD_TO_DONKBET_MW,
		// name
		{ "flop_b2_fold_to_donkbet_mw_op", "flop_b2_fold_to_donkbet_mw_ip" },
		// description_for_editor
		{ "Poker Tracker flop b2 fold to donkbet mw OP", "Poker Tracker fold to donkbet mw IP" },
		// query
		"SELECT (case when ActionOpportunities1 = 0 then -1 \
				 else cast(ActionCount1 as real) / ActionOpportunities1 \
				 end) as result1, ActionOpportunities1, \
				(case when ActionOpportunities2 = 0 then -1 \
				 else cast(ActionCount2 as real) / ActionOpportunities2 \
				 end) as result2, ActionOpportunities2 \
		 FROM	(SELECT	sum(case when S.position > S.val_f_bet_aggressor_pos AND (m.action = 'F' OR m.action = 'XF') then 1 else 0 end) \
						 as ActionCount1, \
						sum(case when S.position > S.val_f_bet_aggressor_pos then 1 else 0 end) \
						 as ActionOpportunities1, \
						 sum(case when S.position < S.val_f_bet_aggressor_pos AND (m.action = 'F' OR m.action = 'XF') then 1 else 0 end) \
						 as ActionCount2, \
						 sum(case when S.position < S.val_f_bet_aggressor_pos then 1 else 0 end) \
						 as ActionOpportunities2 \
				 FROM	player as P, %TYPE%_hand_player_statistics as S, lookup_actions m, %TYPE%_hand_summary H \
				 WHERE	S.id_player = P.id_player AND \
						H.id_hand = S.id_hand AND \
						length(H.str_aggressors_p) >= 3 AND \
						H.cnt_players_f > 2 AND \
						NOT S.flg_hero AND \
						S.cnt_players between " MIN_PLAYERS_AT_TABLE " AND " MAX_PLAYERS_AT_TABLE " AND \
						S.id_gametype = %GAMETYPE% AND \
						P.id_site = %SITEID% AND \
						REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%' AND \
						S.id_action_f = m.id_action AND \
						amt_f_bet_facing > 0 AND \
						(flg_p_first_raise OR flg_p_face_raise) AND \
						((S.val_p_raise_aggressor_pos < S.val_f_bet_aggressor_pos AND S.val_p_raise_aggressor_pos != -1) \
						 OR (S.position < S.val_f_bet_aggressor_pos AND S.val_p_raise_aggressor_pos = -1))) foo",
				// stat_group
				pt_group_advanced
	},
#endif

#if PT4_QUERY_SUPPORT__FLOP_B2_RAISE_DONKBET_MW
				// PT4  query to get raise donkbet mw on FLOP 
	{
		PT4_QUERY_SUPPORT__FLOP_B2_RAISE_DONKBET_MW,
		// name
		{ "flop_b2_raise_donkbet_mw_op", "flop_b2_raise_donkbet_mw_ip" },
		// description_for_editor
		{ "Poker Tracker flop b2 raise donkbet mw OP", "Poker Tracker raise donkbet mw IP" },
		// query
		"SELECT (case when ActionOpportunities1 = 0 then -1 \
				 else cast(ActionCount1 as real) / ActionOpportunities1 \
				 end) as result1, ActionOpportunities1, \
				(case when ActionOpportunities2 = 0 then -1 \
				 else cast(ActionCount2 as real) / ActionOpportunities2 \
				 end) as result2, ActionOpportunities2 \
		 FROM	(SELECT	sum(case when S.position > S.val_f_bet_aggressor_pos AND (m.action = 'R' OR m.action = 'XR') then 1 else 0 end) \
						 as ActionCount1, \
						sum(case when S.position > S.val_f_bet_aggressor_pos then 1 else 0 end) \
						 as ActionOpportunities1, \
						 sum(case when S.position < S.val_f_bet_aggressor_pos AND (m.action = 'R' OR m.action = 'XR') then 1 else 0 end) \
						 as ActionCount2, \
						 sum(case when S.position < S.val_f_bet_aggressor_pos then 1 else 0 end) \
						 as ActionOpportunities2 \
				 FROM	player as P, %TYPE%_hand_player_statistics as S, lookup_actions m, %TYPE%_hand_summary H \
				 WHERE	S.id_player = P.id_player AND \
						H.id_hand = S.id_hand AND \
						length(H.str_aggressors_p) >= 3 AND \
						H.cnt_players_f > 2 AND \
						NOT S.flg_hero AND \
						S.cnt_players between " MIN_PLAYERS_AT_TABLE " AND " MAX_PLAYERS_AT_TABLE " AND \
						S.id_gametype = %GAMETYPE% AND \
						P.id_site = %SITEID% AND \
						REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%' AND \
						S.id_action_f = m.id_action AND \
						amt_f_bet_facing > 0 AND \
						(flg_p_first_raise OR flg_p_face_raise) AND \
						((S.val_p_raise_aggressor_pos < S.val_f_bet_aggressor_pos AND S.val_p_raise_aggressor_pos != -1) \
						 OR (S.position < S.val_f_bet_aggressor_pos AND S.val_p_raise_aggressor_pos = -1))) foo",
				pt_group_advanced
	},
#endif

#if PT4_QUERY_SUPPORT__FLOP_B2_FLOAT_MW
				// PT4  query to get flop float mw 
	{
		PT4_QUERY_SUPPORT__FLOP_B2_FLOAT_MW,
		// name
		{ "flop_b2_float_mw" },
		// description_for_editor
		{ "Poker Tracker flop b2 float mw" },
		// query
		"SELECT (case when ActionOpportunities = 0 then -1 \
				 else cast(ActionCount as real) / ActionOpportunities \
				 end) as result, ActionOpportunities \
		 FROM	(SELECT	sum(case when flg_f_bet then 1 else 0 end) \
						 as ActionCount, \
						sum(case when true then 1 else 0 end) \
						 as ActionOpportunities \
				 FROM	player as P, %TYPE%_hand_player_statistics as S, lookup_actions l, %TYPE%_hand_summary H \
				 WHERE	S.id_player = P.id_player AND \
						H.id_hand = S.id_hand AND \
						length(H.str_aggressors_p) >= 3 AND \
						H.cnt_players_f > 2 AND \
						NOT S.flg_hero AND \
						S.cnt_players between " MIN_PLAYERS_AT_TABLE " AND " MAX_PLAYERS_AT_TABLE " AND \
						S.id_gametype = %GAMETYPE% AND \
						P.id_site = %SITEID% AND \
						REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%' AND \
						S.val_p_raise_aggressor_pos > S.position AND \
						S.val_p_raise_aggressor_pos != -1 AND \
						l.action LIKE '%C' AND \
						S.id_action_p = l.id_action AND \
						S.flg_f_open_opp) foo",
				// stat_group
				pt_group_advanced
	},
#endif

#if PT4_QUERY_SUPPORT__FLOP_B2_FOLD_TO_FLOAT_MW
				// PT4  query to get FLOP fold to float mw
	{
		PT4_QUERY_SUPPORT__FLOP_B2_FOLD_TO_FLOAT_MW,
		// name
		{ "flop_b2_fold_to_float_mw_op", "flop_b2_fold_to_float_mw_ip" },
		// description_for_editor
		{ "Poker Tracker flop b2 fold to float mw OP", "Poker Tracker fold to float mw IP" },
		// query
		"SELECT (case when ActionOpportunities1 = 0 then -1 \
				 else cast(ActionCount1 as real) / ActionOpportunities1 \
				 end) as result1, ActionOpportunities1, \
				(case when ActionOpportunities2 = 0 then -1 \
				 else cast(ActionCount2 as real) / ActionOpportunities2 \
				 end) as result2, ActionOpportunities2 \
		 FROM	(SELECT	sum(case when S.position > S.val_f_bet_aggressor_pos AND (m.action = 'F' OR m.action = 'XF') then 1 else 0 end) \
						 as ActionCount1, \
						sum(case when S.position > S.val_f_bet_aggressor_pos then 1 else 0 end) \
						 as ActionOpportunities1, \
						 sum(case when S.position < S.val_f_bet_aggressor_pos AND (m.action = 'F' OR m.action = 'XF') then 1 else 0 end) \
						 as ActionCount2, \
						 sum(case when S.position < S.val_f_bet_aggressor_pos then 1 else 0 end) \
						 as ActionOpportunities2 \
				 FROM	player as P, %TYPE%_hand_player_statistics as S, lookup_actions m, %TYPE%_hand_summary H \
				 WHERE	S.id_player = P.id_player AND \
						H.id_hand = S.id_hand AND \
						length(H.str_aggressors_p) >= 3 AND \
						H.cnt_players_f > 2 AND \
						NOT S.flg_hero AND \
						S.cnt_players between " MIN_PLAYERS_AT_TABLE " AND " MAX_PLAYERS_AT_TABLE " AND \
						S.id_gametype = %GAMETYPE% AND \
						P.id_site = %SITEID% AND \
						REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%' AND \
						S.id_action_f = m.id_action AND \
						amt_f_bet_facing > 0 AND \
						(flg_p_first_raise OR flg_p_face_raise) AND \
						((S.val_p_raise_aggressor_pos > S.val_f_bet_aggressor_pos AND S.val_p_raise_aggressor_pos != -1) \
						 OR (S.position > S.val_f_bet_aggressor_pos AND S.val_p_raise_aggressor_pos = -1))) foo",
				// stat_group
				pt_group_advanced
	},
#endif

#if PT4_QUERY_SUPPORT__FLOP_B2_RAISE_FLOAT_MW
				// PT4  query to get raise float mw on FLOP 
	{
		PT4_QUERY_SUPPORT__FLOP_B2_RAISE_FLOAT_MW,
		// name
		{ "flop_b2_raise_float_mw_op", "flop_b2_raise_float_mw_ip" },
		// description_for_editor
		{ "Poker Tracker flop b2 raise float mw OP", "Poker Tracker raise float mw IP" },
		// query
		"SELECT (case when ActionOpportunities1 = 0 then -1 \
				else cast(ActionCount1 as real) / ActionOpportunities1 \
				end) as result1, ActionOpportunities1, \
			(case when ActionOpportunities2 = 0 then -1 \
				else cast(ActionCount2 as real) / ActionOpportunities2 \
				end) as result2, ActionOpportunities2 \
		FROM	(SELECT	sum(case when S.position > S.val_f_bet_aggressor_pos AND (substring(m.action from 1 for 1) = 'R' OR substring(m.action from 1 for 2) = 'XR') then 1 else 0 end) \
						as ActionCount1, \
					sum(case when S.position > S.val_f_bet_aggressor_pos then 1 else 0 end) \
						as ActionOpportunities1, \
						sum(case when S.position < S.val_f_bet_aggressor_pos AND (substring(m.action from 1 for 1) = 'R' OR substring(m.action from 1 for 2) = 'XR') then 1 else 0 end) \
						as ActionCount2, \
						sum(case when S.position < S.val_f_bet_aggressor_pos then 1 else 0 end) \
						as ActionOpportunities2 \
				FROM	player as P, %TYPE%_hand_player_statistics as S, lookup_actions m, %TYPE%_hand_summary H \
				WHERE	S.id_player = P.id_player AND \
						H.id_hand = S.id_hand AND \
						length(H.str_aggressors_p) >= 3 AND \
						H.cnt_players_f > 2 AND \
						NOT S.flg_hero AND \
						S.cnt_players between " MIN_PLAYERS_AT_TABLE " AND " MAX_PLAYERS_AT_TABLE " AND \
						S.id_gametype = %GAMETYPE% AND \
						P.id_site = %SITEID% AND \
						REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%' AND \
						S.id_action_f = m.id_action AND \
						amt_f_bet_facing > 0 AND \
						(flg_p_first_raise OR flg_p_face_raise) AND \
						((S.val_p_raise_aggressor_pos > S.val_f_bet_aggressor_pos AND S.val_p_raise_aggressor_pos != -1) \
						OR (S.position > S.val_f_bet_aggressor_pos AND S.val_p_raise_aggressor_pos = -1))) foo",
				// stat_group
				pt_group_advanced
	},
#endif

#if PT4_QUERY_SUPPORT__TURN_B2_CBET_MW
				// PT4  query to get cbet mw on TURN 
	{
		PT4_QUERY_SUPPORT__TURN_B2_CBET_MW,
		// name
		{ "turn_b2_cbet_mw" },
		// description_for_editor
		{ "Poker Tracker turn b2 cbet mw" },
		// query
		"SELECT (case when ActionOpportunities1 = 0 then -1 \
				 else cast(ActionCount1 as real) / ActionOpportunities1 \
				 end) as result1, ActionOpportunities1 \
		 FROM	(SELECT	sum(case when (l.action LIKE '%B' OR l.action LIKE '%R') AND flg_t_open_opp AND flg_t_bet then 1 else 0 end) \
						 as ActionCount1, \
						sum(case when (l.action LIKE '%B' OR l.action LIKE '%R') AND flg_t_open_opp then 1 else 0 end) \
						 as ActionOpportunities1 \
				 FROM	player as P, %TYPE%_hand_player_statistics as S, lookup_actions l, %TYPE%_hand_summary H \
				 WHERE	S.id_player = P.id_player AND \
						H.id_hand = S.id_hand AND \
						length(H.str_aggressors_f) >= 2 AND \
						H.cnt_players_t > 2 AND \
						NOT S.flg_hero AND \
						S.cnt_players between " MIN_PLAYERS_AT_TABLE " AND " MAX_PLAYERS_AT_TABLE " AND \
						S.id_gametype = %GAMETYPE% AND \
						P.id_site = %SITEID% AND \
						REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%' AND \
						S.id_action_f = l.id_action) foo",
				// stat_group
				pt_group_advanced
	},
#endif

#if PT4_QUERY_SUPPORT__TURN_B2_FOLD_TO_CBET_MW
				// PT4  query to get TURN fold to cbet mw 
	{
		PT4_QUERY_SUPPORT__TURN_B2_FOLD_TO_CBET_MW,
		// name
		{ "turn_b2_fold_to_cbet_mw" },
		// description_for_editor
		{ "Poker Tracker turn b2 fold to cbet mw" },
		// query
		"SELECT (case when ActionOpportunities1 = 0 then -1 \
				 else cast(ActionCount1 as real) / ActionOpportunities1 \
				 end) as result1, ActionOpportunities1 \
		 FROM	(SELECT	sum(case when (m.action = 'XF' or m.action = 'F') then 1 else 0 end) \
						 as ActionCount1, \
						count(*) \
						 as ActionOpportunities1 \
				 FROM	player as P, %TYPE%_hand_player_statistics as S, lookup_actions l, lookup_actions m, %TYPE%_hand_summary H \
				 WHERE	S.id_player = P.id_player AND \
						H.id_hand = S.id_hand AND \
						length(H.str_aggressors_f) >= 2 AND \
						H.cnt_players_t > 2 AND \
						NOT S.flg_hero AND \
						S.cnt_players between " MIN_PLAYERS_AT_TABLE " AND " MAX_PLAYERS_AT_TABLE " AND \
						S.id_gametype = %GAMETYPE% AND \
						P.id_site = %SITEID% AND \
						REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%' AND \
						S.id_action_t = m.id_action AND \
						S.id_action_f = l.id_action AND \
						l.action like '%C' AND \
						S.amt_t_bet_facing > 0 AND \
						((S.val_f_bet_aggressor_pos = S.val_t_bet_aggressor_pos AND S.val_f_bet_aggressor_pos != -1 AND S.val_f_raise_aggressor_pos = -1) \
						 OR(S.val_f_raise_aggressor_pos = S.val_t_bet_aggressor_pos AND S.val_f_raise_aggressor_pos != -1))) foo",
				// stat_group
				pt_group_advanced
	},
#endif

#if PT4_QUERY_SUPPORT__TURN_B2_RAISE_CBET_MW
				// PT4  query to get raise cbet mw on TURN 
	{
		PT4_QUERY_SUPPORT__TURN_B2_RAISE_CBET_MW,
		// name
		{ "turn_b2_raise_cbet_mw" },
		// description_for_editor
		{ "Poker Tracker turn b2 raise cbet mw" },
		// query
		"SELECT (case when ActionOpportunities1 = 0 then -1 \
				 else cast(ActionCount1 as real) / ActionOpportunities1 \
				 end) as result1, ActionOpportunities1 \
		 FROM	(SELECT	sum(case when (substring(m.action from 1 for 1) = 'R' or substring(m.action from 1 for 2) = 'XR') then 1 else 0 end) \
						 as ActionCount1, \
						count(*) \
						 as ActionOpportunities1 \
				 FROM	player as P, %TYPE%_hand_player_statistics as S, lookup_actions l, lookup_actions m, %TYPE%_hand_summary H \
				 WHERE	S.id_player = P.id_player AND \
						H.id_hand = S.id_hand AND \
						length(H.str_aggressors_f) >= 2 AND \
						H.cnt_players_t > 2 AND \
						NOT S.flg_hero AND \
						S.cnt_players between " MIN_PLAYERS_AT_TABLE " AND " MAX_PLAYERS_AT_TABLE " AND \
						S.id_gametype = %GAMETYPE% AND \
						P.id_site = %SITEID% AND \
						REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%' AND \
						S.id_action_t = m.id_action AND \
						S.id_action_f = l.id_action AND \
						l.action like '%C' AND \
						S.amt_t_bet_facing > 0 AND \
						((S.val_f_bet_aggressor_pos = S.val_t_bet_aggressor_pos AND S.val_f_bet_aggressor_pos != -1 AND S.val_f_raise_aggressor_pos = -1) \
						 OR(S.val_f_raise_aggressor_pos = S.val_t_bet_aggressor_pos AND S.val_f_raise_aggressor_pos != -1))) foo",
				// stat_group
				pt_group_advanced
	},
#endif

#if PT4_QUERY_SUPPORT__TURN_B2_DONKBET_MW
				// PT4  query to get TURN donkbet mw 
	{
		PT4_QUERY_SUPPORT__TURN_B2_DONKBET_MW,
		// name
		{ "turn_b2_donkbet_mw" },
		// description_for_editor
		{ "Poker Tracker turn b2 donkbet mw" },
		// query
		"SELECT (case when ActionOpportunities = 0 then -1 \
				 else cast(ActionCount as real) / ActionOpportunities \
				 end) as result, ActionOpportunities \
		 FROM	(SELECT	sum(case when flg_t_bet then 1 else 0 end) \
						 as ActionCount, \
						sum(case when true then 1 else 0 end) \
						 as ActionOpportunities \
				 FROM	player as P, %TYPE%_hand_player_statistics as S, lookup_actions l, %TYPE%_hand_summary H \
				 WHERE	S.id_player = P.id_player AND \
						H.id_hand = S.id_hand AND \
						length(H.str_aggressors_f) >= 2 AND \
						H.cnt_players_t > 2 AND \
						NOT S.flg_hero AND \
						S.cnt_players between " MIN_PLAYERS_AT_TABLE " AND " MAX_PLAYERS_AT_TABLE " AND \
						S.id_gametype = %GAMETYPE% AND \
						P.id_site = %SITEID% AND \
						REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%' AND \
						l.action LIKE '%C' AND \
						((S.val_f_raise_aggressor_pos != -1 AND S.val_f_raise_aggressor_pos < S.position) \
						OR (S.val_f_raise_aggressor_pos = -1 AND S.val_f_bet_aggressor_pos < S.position)) AND \
						S.id_action_f = l.id_action AND \
						S.flg_t_open_opp) foo",
				// stat_group
				pt_group_advanced
	},
#endif

#if PT4_QUERY_SUPPORT__TURN_B2_FOLD_TO_DONKBET_MW
				// PT4  query to get TURN fold to donkbet mw
	{
		PT4_QUERY_SUPPORT__TURN_B2_FOLD_TO_DONKBET_MW,
		// name
		{ "turn_b2_fold_to_donkbet_mw_op", "turn_b2_fold_to_donkbet_mw_ip" },
		// description_for_editor
		{ "Poker Tracker turn b2 fold to donkbet mw OP", "Poker Tracker fold to donkbet mw IP" },
		// query
		"SELECT (case when ActionOpportunities1 = 0 then -1 \
				 else cast(ActionCount1 as real) / ActionOpportunities1 \
				 end) as result1, ActionOpportunities1, \
				(case when ActionOpportunities2 = 0 then -1 \
				 else cast(ActionCount2 as real) / ActionOpportunities2 \
				 end) as result2, ActionOpportunities2 \
		 FROM	(SELECT	sum(case when S.position > S.val_t_bet_aggressor_pos AND (m.action = 'F' OR m.action = 'XF') then 1 else 0 end) \
						 as ActionCount1, \
						sum(case when S.position > S.val_t_bet_aggressor_pos then 1 else 0 end) \
						 as ActionOpportunities1, \
						sum(case when S.position < S.val_t_bet_aggressor_pos AND (m.action = 'F' OR m.action = 'XF') then 1 else 0 end) \
						 as ActionCount2, \
						sum(case when S.position < S.val_t_bet_aggressor_pos then 1 else 0 end) \
						 as ActionOpportunities2 \
				 FROM	player as P, %TYPE%_hand_player_statistics as S, lookup_actions l, lookup_actions m, %TYPE%_hand_summary H \
				 WHERE	S.id_player = P.id_player AND \
						H.id_hand = S.id_hand AND \
						length(H.str_aggressors_f) >= 2 AND \
						H.cnt_players_t > 2 AND \
						NOT S.flg_hero AND \
						S.cnt_players between " MIN_PLAYERS_AT_TABLE " AND " MAX_PLAYERS_AT_TABLE " AND \
						S.id_gametype = %GAMETYPE% AND \
						P.id_site = %SITEID% AND \
						REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%' AND \
						S.id_action_t = m.id_action AND \
						S.id_action_f = l.id_action AND \
						amt_t_bet_facing > 0 AND \
						(flg_f_bet OR cnt_f_raise > 0 OR cnt_f_call > 0) AND \
						((l.action like '%R' AND S.position < S.val_t_bet_aggressor_pos) \
						 OR(l.action like '%B' AND S.position < S.val_t_bet_aggressor_pos) \
						 OR(l.action like '%C' AND S.val_f_bet_aggressor_pos < S.val_t_bet_aggressor_pos AND S.val_f_bet_aggressor_pos != -1 AND S.val_f_raise_aggressor_pos = -1) \
						 OR(l.action like '%C' AND S.val_f_raise_aggressor_pos < S.val_t_bet_aggressor_pos AND S.val_f_raise_aggressor_pos != -1))) foo",
				// stat_group
				pt_group_advanced
	},
#endif

#if PT4_QUERY_SUPPORT__TURN_B2_RAISE_DONKBET_MW
				// PT4  query to get raise donkbet mw on TURN 
	{
		PT4_QUERY_SUPPORT__TURN_B2_RAISE_DONKBET_MW,
		// name
		{ "turn_b2_raise_donkbet_mw_op", "turn_b2_raise_donkbet_mw_ip" },
		// description_for_editor
		{ "Poker Tracker turn b2 raise donkbet mw OP", "Poker Tracker raise donkbet mw IP" },
		// query
		"SELECT (case when ActionOpportunities1 = 0 then -1 \
				 else cast(ActionCount1 as real) / ActionOpportunities1 \
				 end) as result1, ActionOpportunities1, \
				(case when ActionOpportunities2 = 0 then -1 \
				 else cast(ActionCount2 as real) / ActionOpportunities2 \
				 end) as result2, ActionOpportunities2 \
		 FROM	(SELECT	sum(case when S.position > S.val_t_bet_aggressor_pos AND (m.action = 'R' OR m.action = 'XR') then 1 else 0 end) \
						 as ActionCount1, \
						sum(case when S.position > S.val_t_bet_aggressor_pos then 1 else 0 end) \
						 as ActionOpportunities1, \
						 sum(case when S.position < S.val_t_bet_aggressor_pos AND (m.action = 'R' OR m.action = 'XR') then 1 else 0 end) \
						 as ActionCount2, \
						 sum(case when S.position < S.val_t_bet_aggressor_pos then 1 else 0 end) \
						 as ActionOpportunities2 \
				 FROM	player as P, %TYPE%_hand_player_statistics as S, lookup_actions l, lookup_actions m, %TYPE%_hand_summary H \
				 WHERE	S.id_player = P.id_player AND \
						H.id_hand = S.id_hand AND \
						length(H.str_aggressors_f) >= 2 AND \
						H.cnt_players_t > 2 AND \
						NOT S.flg_hero AND \
						S.cnt_players between " MIN_PLAYERS_AT_TABLE " AND " MAX_PLAYERS_AT_TABLE " AND \
						S.id_gametype = %GAMETYPE% AND \
						P.id_site = %SITEID% AND \
						REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%' AND \
						S.id_action_t = m.id_action AND \
						S.id_action_f = l.id_action AND \
						amt_t_bet_facing > 0 AND \
						(flg_f_bet OR cnt_f_raise > 0 OR cnt_f_call > 0) AND \
						((l.action like '%R' AND S.position < S.val_t_bet_aggressor_pos) \
						 OR(l.action like '%B' AND S.position < S.val_t_bet_aggressor_pos) \
						 OR(l.action like '%C' AND S.val_f_bet_aggressor_pos < S.val_t_bet_aggressor_pos AND S.val_f_bet_aggressor_pos != -1 AND S.val_f_raise_aggressor_pos = -1) \
						 OR(l.action like '%C' AND S.val_f_raise_aggressor_pos < S.val_t_bet_aggressor_pos AND S.val_f_raise_aggressor_pos != -1))) foo",
				// stat_group
				pt_group_advanced
	},
#endif

#if PT4_QUERY_SUPPORT__TURN_B2_FLOAT_MW
				// PT4  query to get turn float mw 
	{
		PT4_QUERY_SUPPORT__TURN_B2_FLOAT_MW,
		// name
		{ "turn_b2_float_mw" },
		// description_for_editor
		{ "Poker Tracker turn b2 float mw" },
		// query
		"SELECT (case when ActionOpportunities = 0 then -1 \
				 else cast(ActionCount as real) / ActionOpportunities \
				 end) as result, ActionOpportunities \
		 FROM	(SELECT	sum(case when flg_t_bet then 1 else 0 end) \
						 as ActionCount, \
						sum(case when true then 1 else 0 end) \
						 as ActionOpportunities \
				 FROM	player as P, %TYPE%_hand_player_statistics as S, lookup_actions l, %TYPE%_hand_summary H \
				 WHERE	S.id_player = P.id_player AND \
						H.id_hand = S.id_hand AND \
						length(H.str_aggressors_f) >= 2 AND \
						H.cnt_players_t > 2 AND \
						NOT S.flg_hero AND \
						S.cnt_players between " MIN_PLAYERS_AT_TABLE " AND " MAX_PLAYERS_AT_TABLE " AND \
						S.id_gametype = %GAMETYPE% AND \
						P.id_site = %SITEID% AND \
						REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%' AND \
						l.action LIKE '%C' AND \
						((S.val_f_raise_aggressor_pos != -1 AND S.val_f_raise_aggressor_pos > S.position) \
						OR (S.val_f_raise_aggressor_pos = -1 AND S.val_f_bet_aggressor_pos > S.position)) AND \
						S.id_action_f = l.id_action AND \
						S.flg_t_open_opp) foo",
				// stat_group
				pt_group_advanced
	},
#endif

#if PT4_QUERY_SUPPORT__TURN_B2_FOLD_TO_FLOAT_MW
				// PT4  query to get TURN fold to float mw
	{
		PT4_QUERY_SUPPORT__TURN_B2_FOLD_TO_FLOAT_MW,
		// name
		{ "turn_b2_fold_to_float_mw_op", "turn_b2_fold_to_float_mw_ip" },
		// description_for_editor
		{ "Poker Tracker turn b2 fold to float mw OP", "Poker Tracker fold to float mw IP" },
		// query
		"SELECT (case when ActionOpportunities1 = 0 then -1 \
				else cast(ActionCount1 as real) / ActionOpportunities1 \
				end) as result1, ActionOpportunities1, \
			(case when ActionOpportunities2 = 0 then -1 \
				else cast(ActionCount2 as real) / ActionOpportunities2 \
				end) as result2, ActionOpportunities2 \
		FROM	(SELECT	sum(case when S.position > S.val_t_bet_aggressor_pos AND (m.action = 'F' OR m.action = 'XF') then 1 else 0 end) \
						as ActionCount1, \
						sum(case when S.position > S.val_t_bet_aggressor_pos then 1 else 0 end) \
						as ActionOpportunities1, \
						sum(case when S.position < S.val_t_bet_aggressor_pos AND (m.action = 'F' OR m.action = 'XF') then 1 else 0 end) \
						as ActionCount2, \
						sum(case when S.position < S.val_t_bet_aggressor_pos then 1 else 0 end) \
						as ActionOpportunities2 \
				FROM	player as P, %TYPE%_hand_player_statistics as S, lookup_actions l, lookup_actions m, %TYPE%_hand_summary H \
				WHERE	S.id_player = P.id_player AND \
						H.id_hand = S.id_hand AND \
						length(H.str_aggressors_f) >= 2 AND \
						H.cnt_players_t > 2 AND \
					NOT S.flg_hero AND \
						S.cnt_players between " MIN_PLAYERS_AT_TABLE " AND " MAX_PLAYERS_AT_TABLE " AND \
					S.id_gametype = %GAMETYPE% AND \
					P.id_site = %SITEID% AND \
					REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%' AND \
					S.id_action_t = m.id_action AND \
					S.id_action_f = l.id_action AND \
					amt_t_bet_facing > 0 AND \
					(flg_f_bet OR cnt_f_raise > 0 OR cnt_f_call > 0) AND \
					((l.action like '%R' AND S.position > S.val_t_bet_aggressor_pos) \
						OR(l.action like '%B' AND S.position > S.val_t_bet_aggressor_pos) \
						OR(l.action like '%C' AND S.val_f_bet_aggressor_pos > S.val_t_bet_aggressor_pos AND S.val_f_bet_aggressor_pos != -1 AND S.val_f_raise_aggressor_pos = -1) \
						OR(l.action like '%C' AND S.val_f_raise_aggressor_pos > S.val_t_bet_aggressor_pos AND S.val_f_raise_aggressor_pos != -1))) foo",
				// stat_group
				pt_group_advanced
	},
#endif

#if PT4_QUERY_SUPPORT__TURN_B2_RAISE_FLOAT_MW
				// PT4  query to get raise float mw on TURN 
	{
		PT4_QUERY_SUPPORT__TURN_B2_RAISE_FLOAT_MW,
		// name
		{ "turn_b2_raise_float_mw_op", "turn_b2_raise_float_mw_ip" },
		// description_for_editor
		{ "Poker Tracker turn b2 raise float mw OP", "Poker Tracker raise float mw IP" },
		// query
		"SELECT (case when ActionOpportunities1 = 0 then -1 \
				else cast(ActionCount1 as real) / ActionOpportunities1 \
				end) as result1, ActionOpportunities1, \
			(case when ActionOpportunities2 = 0 then -1 \
				else cast(ActionCount2 as real) / ActionOpportunities2 \
				end) as result2, ActionOpportunities2 \
		FROM	(SELECT	sum(case when S.position > S.val_t_bet_aggressor_pos AND (m.action = 'R' OR m.action = 'XR') then 1 else 0 end) \
						as ActionCount1, \
						sum(case when S.position > S.val_t_bet_aggressor_pos then 1 else 0 end) \
						as ActionOpportunities1, \
						sum(case when S.position < S.val_t_bet_aggressor_pos AND (m.action = 'R' OR m.action = 'XR') then 1 else 0 end) \
						as ActionCount2, \
						sum(case when S.position < S.val_t_bet_aggressor_pos then 1 else 0 end) \
						as ActionOpportunities2 \
				FROM	player as P, %TYPE%_hand_player_statistics as S, lookup_actions l, lookup_actions m, %TYPE%_hand_summary H \
				WHERE	S.id_player = P.id_player AND \
						H.id_hand = S.id_hand AND \
						length(H.str_aggressors_f) >= 2 AND \
						H.cnt_players_t > 2 AND \
						NOT S.flg_hero AND \
						S.cnt_players between " MIN_PLAYERS_AT_TABLE " AND " MAX_PLAYERS_AT_TABLE " AND \
						S.id_gametype = %GAMETYPE% AND \
						P.id_site = %SITEID% AND \
						REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%' AND \
						S.id_action_t = m.id_action AND \
						S.id_action_f = l.id_action AND \
						amt_t_bet_facing > 0 AND \
						(flg_f_bet OR cnt_f_raise > 0 OR cnt_f_call > 0) AND \
						((l.action like '%R' AND S.position > S.val_t_bet_aggressor_pos) \
						OR(l.action like '%B' AND S.position > S.val_t_bet_aggressor_pos) \
						OR(l.action like '%C' AND S.val_f_bet_aggressor_pos > S.val_t_bet_aggressor_pos AND S.val_f_bet_aggressor_pos != -1 AND S.val_f_raise_aggressor_pos = -1) \
						OR(l.action like '%C' AND S.val_f_raise_aggressor_pos > S.val_t_bet_aggressor_pos AND S.val_f_raise_aggressor_pos != -1))) foo",
				// stat_group
				pt_group_advanced
	},
#endif

#if PT4_QUERY_SUPPORT__RIVER_B2_CBET_MW
				// PT4  query to get cbet mw on RIVER 
	{
		PT4_QUERY_SUPPORT__RIVER_B2_CBET_MW,
		// name
		{ "river_b2_cbet_mw" },
		// description_for_editor
		{ "Poker Tracker river b2 cbet mw" },
		// query
		"SELECT (case when ActionOpportunities1 = 0 then -1 \
				 else cast(ActionCount1 as real) / ActionOpportunities1 \
				 end) as result1, ActionOpportunities1 \
		 FROM	(SELECT	sum(case when (l.action LIKE '%B' OR l.action LIKE '%R') AND flg_r_open_opp AND flg_r_bet then 1 else 0 end) \
						 as ActionCount1, \
						sum(case when (l.action LIKE '%B' OR l.action LIKE '%R') AND flg_r_open_opp then 1 else 0 end) \
						 as ActionOpportunities1 \
				 FROM	player as P, %TYPE%_hand_player_statistics as S, lookup_actions l, %TYPE%_hand_summary H \
				 WHERE	S.id_player = P.id_player AND \
						H.id_hand = S.id_hand AND \
						length(H.str_aggressors_t) >= 2 AND \
						H.cnt_players_r > 2 AND \
						NOT S.flg_hero AND \
						S.cnt_players between " MIN_PLAYERS_AT_TABLE " AND " MAX_PLAYERS_AT_TABLE " AND \
						S.id_gametype = %GAMETYPE% AND \
						P.id_site = %SITEID% AND \
						REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%' AND \
						S.id_action_t = l.id_action) foo",
				// stat_group
				pt_group_advanced
	},
#endif

#if PT4_QUERY_SUPPORT__RIVER_B2_FOLD_TO_CBET_MW
				// PT4  query to get RIVER fold to cbet mw 
	{
		PT4_QUERY_SUPPORT__RIVER_B2_FOLD_TO_CBET_MW,
		// name
		{ "river_b2_fold_to_cbet_mw" },
		// description_for_editor
		{ "Poker Tracker river b2 fold to cbet mw" },
		// query
		"SELECT (case when ActionOpportunities1 = 0 then -1 \
				 else cast(ActionCount1 as real) / ActionOpportunities1 \
				 end) as result1, ActionOpportunities1 \
		 FROM	(SELECT	sum(case when (m.action = 'XF' or m.action = 'F') then 1 else 0 end) \
						 as ActionCount1, \
						count(*) \
						 as ActionOpportunities1 \
				 FROM	player as P, %TYPE%_hand_player_statistics as S, lookup_actions l, lookup_actions m, %TYPE%_hand_summary H \
				 WHERE	S.id_player = P.id_player AND \
						H.id_hand = S.id_hand AND \
						length(H.str_aggressors_t) >= 2 AND \
						H.cnt_players_r > 2 AND \
						NOT S.flg_hero AND \
						S.cnt_players between " MIN_PLAYERS_AT_TABLE " AND " MAX_PLAYERS_AT_TABLE " AND \
						S.id_gametype = %GAMETYPE% AND \
						P.id_site = %SITEID% AND \
						REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%' AND \
						S.id_action_r = m.id_action AND \
						S.id_action_t = l.id_action AND \
						l.action like '%C' AND \
						S.amt_r_bet_facing > 0 AND \
						((S.val_t_bet_aggressor_pos = S.val_r_bet_aggressor_pos AND S.val_t_bet_aggressor_pos != -1 AND S.val_t_raise_aggressor_pos = -1) \
						 OR(S.val_t_raise_aggressor_pos = S.val_r_bet_aggressor_pos AND S.val_t_raise_aggressor_pos != -1))) foo",
				// stat_group
				pt_group_advanced
	},
#endif

#if PT4_QUERY_SUPPORT__RIVER_B2_RAISE_CBET_MW
				// PT4  query to get raise cbet mw on RIVER 
	{
		PT4_QUERY_SUPPORT__RIVER_B2_RAISE_CBET_MW,
		// name
		{ "river_b2_raise_cbet_mw" },
		// description_for_editor
		{ "Poker Tracker river b2 raise cbet mw" },
		// query
		"SELECT (case when ActionOpportunities1 = 0 then -1 \
				 else cast(ActionCount1 as real) / ActionOpportunities1 \
				 end) as result1, ActionOpportunities1 \
		 FROM	(SELECT	sum(case when (substring(m.action from 1 for 1) = 'R' or substring(m.action from 1 for 2) = 'XR') then 1 else 0 end) \
						 as ActionCount1, \
						count(*) \
						 as ActionOpportunities1 \
				 FROM	player as P, %TYPE%_hand_player_statistics as S, lookup_actions l, lookup_actions m, %TYPE%_hand_summary H \
				 WHERE	S.id_player = P.id_player AND \
						H.id_hand = S.id_hand AND \
						length(H.str_aggressors_t) >= 2 AND \
						H.cnt_players_r > 2 AND \
						NOT S.flg_hero AND \
						S.cnt_players between " MIN_PLAYERS_AT_TABLE " AND " MAX_PLAYERS_AT_TABLE " AND \
						S.id_gametype = %GAMETYPE% AND \
						P.id_site = %SITEID% AND \
						REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%' AND \
						S.id_action_r = m.id_action AND \
						S.id_action_t = l.id_action AND \
						l.action like '%C' AND \
						S.amt_r_bet_facing > 0 AND \
						((S.val_t_bet_aggressor_pos = S.val_r_bet_aggressor_pos AND S.val_t_bet_aggressor_pos != -1 AND S.val_t_raise_aggressor_pos = -1) \
						 OR(S.val_t_raise_aggressor_pos = S.val_r_bet_aggressor_pos AND S.val_t_raise_aggressor_pos != -1))) foo",
				// stat_group
				pt_group_advanced
	},
#endif

#if PT4_QUERY_SUPPORT__RIVER_B2_DONKBET_MW
				// PT4  query to get RIVER donkbet mw 
	{
		PT4_QUERY_SUPPORT__RIVER_B2_DONKBET_MW,
		// name
		{ "river_b2_donkbet_mw" },
		// description_for_editor
		{ "Poker Tracker river b2 donkbet mw" },
		// query
		"SELECT (case when ActionOpportunities = 0 then -1 \
				 else cast(ActionCount as real) / ActionOpportunities \
				 end) as result, ActionOpportunities \
		 FROM	(SELECT	sum(case when flg_r_bet then 1 else 0 end) \
						 as ActionCount, \
						sum(case when true then 1 else 0 end) \
						 as ActionOpportunities \
				 FROM	player as P, %TYPE%_hand_player_statistics as S, lookup_actions l, %TYPE%_hand_summary H \
				 WHERE	S.id_player = P.id_player AND \
						H.id_hand = S.id_hand AND \
						length(H.str_aggressors_t) >= 2 AND \
						H.cnt_players_r > 2 AND \
						NOT S.flg_hero AND \
						S.cnt_players between " MIN_PLAYERS_AT_TABLE " AND " MAX_PLAYERS_AT_TABLE " AND \
						S.id_gametype = %GAMETYPE% AND \
						P.id_site = %SITEID% AND \
						REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%' AND \
						l.action LIKE '%C' AND \
						((S.val_t_raise_aggressor_pos != -1 AND S.val_t_raise_aggressor_pos < S.position) \
						OR (S.val_t_raise_aggressor_pos = -1 AND S.val_t_bet_aggressor_pos < S.position)) AND \
						S.id_action_t = l.id_action AND \
						S.flg_r_open_opp) foo",
				// stat_group
				pt_group_advanced
	},
#endif

#if PT4_QUERY_SUPPORT__RIVER_B2_FOLD_TO_DONKBET_MW
				// PT4  query to get RIVER fold to donkbet mw
	{
		PT4_QUERY_SUPPORT__RIVER_B2_FOLD_TO_DONKBET_MW,
		// name
		{ "river_b2_fold_to_donkbet_mw_op", "river_b2_fold_to_donkbet_mw_ip" },
		// description_for_editor
		{ "Poker Tracker river b2 fold to donkbet mw OP", "Poker Tracker fold to donkbet mw IP" },
		// query
		"SELECT (case when ActionOpportunities1 = 0 then -1 \
				 else cast(ActionCount1 as real) / ActionOpportunities1 \
				 end) as result1, ActionOpportunities1, \
				(case when ActionOpportunities2 = 0 then -1 \
				 else cast(ActionCount2 as real) / ActionOpportunities2 \
				 end) as result2, ActionOpportunities2 \
		 FROM	(SELECT	sum(case when S.position > S.val_r_bet_aggressor_pos AND (m.action = 'F' OR m.action = 'XF') then 1 else 0 end) \
						 as ActionCount1, \
						sum(case when S.position > S.val_r_bet_aggressor_pos then 1 else 0 end) \
						 as ActionOpportunities1, \
						sum(case when S.position < S.val_r_bet_aggressor_pos AND (m.action = 'F' OR m.action = 'XF') then 1 else 0 end) \
						 as ActionCount2, \
						sum(case when S.position < S.val_r_bet_aggressor_pos then 1 else 0 end) \
						 as ActionOpportunities2 \
				 FROM	player as P, %TYPE%_hand_player_statistics as S, lookup_actions l, lookup_actions m, %TYPE%_hand_summary H \
				 WHERE	S.id_player = P.id_player AND \
						H.id_hand = S.id_hand AND \
						length(H.str_aggressors_t) >= 2 AND \
						H.cnt_players_r > 2 AND \
						NOT S.flg_hero AND \
						S.cnt_players between " MIN_PLAYERS_AT_TABLE " AND " MAX_PLAYERS_AT_TABLE " AND \
						S.id_gametype = %GAMETYPE% AND \
						P.id_site = %SITEID% AND \
						REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%' AND \
						S.id_action_r = m.id_action AND \
						S.id_action_t = l.id_action AND \
						amt_r_bet_facing > 0 AND \
						(flg_t_bet OR cnt_t_raise > 0 OR cnt_t_call > 0) AND \
						((l.action like '%R' AND S.position < S.val_r_bet_aggressor_pos) \
						 OR(l.action like '%B' AND S.position < S.val_r_bet_aggressor_pos) \
						 OR(l.action like '%C' AND S.val_t_bet_aggressor_pos < S.val_r_bet_aggressor_pos AND S.val_t_bet_aggressor_pos != -1 AND S.val_t_raise_aggressor_pos = -1) \
						 OR(l.action like '%C' AND S.val_t_raise_aggressor_pos < S.val_r_bet_aggressor_pos AND S.val_t_raise_aggressor_pos != -1))) foo",
				// stat_group
				pt_group_advanced
	},
#endif

#if PT4_QUERY_SUPPORT__RIVER_B2_RAISE_DONKBET_MW
				// PT4  query to get raise donkbet mw on RIVER 
	{
		PT4_QUERY_SUPPORT__RIVER_B2_RAISE_DONKBET_MW,
		// name
		{ "river_b2_raise_donkbet_mw_op", "river_b2_raise_donkbet_mw_ip" },
		// description_for_editor
		{ "Poker Tracker river b2 raise donkbet mw OP", "Poker Tracker raise donkbet mw IP" },
		// query
		"SELECT (case when ActionOpportunities1 = 0 then -1 \
				 else cast(ActionCount1 as real) / ActionOpportunities1 \
				 end) as result1, ActionOpportunities1, \
				(case when ActionOpportunities2 = 0 then -1 \
				 else cast(ActionCount2 as real) / ActionOpportunities2 \
				 end) as result2, ActionOpportunities2 \
		 FROM	(SELECT	sum(case when S.position > S.val_r_bet_aggressor_pos AND (m.action = 'R' OR m.action = 'XR') then 1 else 0 end) \
						 as ActionCount1, \
						sum(case when S.position > S.val_r_bet_aggressor_pos then 1 else 0 end) \
						 as ActionOpportunities1, \
						sum(case when S.position < S.val_r_bet_aggressor_pos AND (m.action = 'R' OR m.action = 'XR') then 1 else 0 end) \
						 as ActionCount2, \
						sum(case when S.position < S.val_r_bet_aggressor_pos then 1 else 0 end) \
						 as ActionOpportunities2 \
				 FROM	player as P, %TYPE%_hand_player_statistics as S, lookup_actions l, lookup_actions m, %TYPE%_hand_summary H \
				 WHERE	S.id_player = P.id_player AND \
						H.id_hand = S.id_hand AND \
						length(H.str_aggressors_t) >= 2 AND \
						H.cnt_players_r > 2 AND \
						NOT S.flg_hero AND \
						S.cnt_players between " MIN_PLAYERS_AT_TABLE " AND " MAX_PLAYERS_AT_TABLE " AND \
						S.id_gametype = %GAMETYPE% AND \
						P.id_site = %SITEID% AND \
						REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%' AND \
						S.id_action_r = m.id_action AND \
						S.id_action_t = l.id_action AND \
						amt_r_bet_facing > 0 AND \
						(flg_t_bet OR cnt_t_raise > 0 OR cnt_t_call > 0) AND \
						((l.action like '%R' AND S.position < S.val_r_bet_aggressor_pos) \
						 OR(l.action like '%B' AND S.position < S.val_r_bet_aggressor_pos) \
						 OR(l.action like '%C' AND S.val_t_bet_aggressor_pos < S.val_r_bet_aggressor_pos AND S.val_t_bet_aggressor_pos != -1 AND S.val_t_raise_aggressor_pos = -1) \
						 OR(l.action like '%C' AND S.val_t_raise_aggressor_pos < S.val_r_bet_aggressor_pos AND S.val_t_raise_aggressor_pos != -1))) foo",
				// stat_group
				pt_group_advanced
	},
#endif

#if PT4_QUERY_SUPPORT__RIVER_B2_FLOAT_MW
				// PT4  query to get river float mw 
	{
		PT4_QUERY_SUPPORT__RIVER_B2_FLOAT_MW,
		// name
		{ "river_b2_float_mw" },
		// description_for_editor
		{ "Poker Tracker river b2 float mw" },
		// query
		"SELECT (case when ActionOpportunities = 0 then -1 \
				 else cast(ActionCount as real) / ActionOpportunities \
				 end) as result, ActionOpportunities \
		 FROM	(SELECT	sum(case when flg_r_bet then 1 else 0 end) \
						 as ActionCount, \
						sum(case when true then 1 else 0 end) \
						 as ActionOpportunities \
				 FROM	player as P, %TYPE%_hand_player_statistics as S, lookup_actions l, %TYPE%_hand_summary H \
				 WHERE	S.id_player = P.id_player AND \
						H.id_hand = S.id_hand AND \
						length(H.str_aggressors_t) >= 2 AND \
						H.cnt_players_r > 2 AND \
						NOT S.flg_hero AND \
						S.cnt_players between " MIN_PLAYERS_AT_TABLE " AND " MAX_PLAYERS_AT_TABLE " AND \
						S.id_gametype = %GAMETYPE% AND \
						P.id_site = %SITEID% AND \
						REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%' AND \
						l.action LIKE '%C' AND \
						((S.val_t_raise_aggressor_pos != -1 AND S.val_t_raise_aggressor_pos > S.position) \
						OR (S.val_t_raise_aggressor_pos = -1 AND S.val_t_bet_aggressor_pos > S.position)) AND \
						S.id_action_t = l.id_action AND \
						S.flg_r_open_opp) foo",
				// stat_group
				pt_group_advanced
	},
#endif

#if PT4_QUERY_SUPPORT__RIVER_B2_FOLD_TO_FLOAT_MW
				// PT4  query to get RIVER fold to float mw
	{
		PT4_QUERY_SUPPORT__RIVER_B2_FOLD_TO_FLOAT_MW,
		// name
		{ "river_b2_fold_to_float_mw_op", "river_b2_fold_to_float_mw_ip" },
		// description_for_editor
		{ "Poker Tracker river b2 fold to float mw OP", "Poker Tracker fold to float mw IP" },
		// query
		"SELECT (case when ActionOpportunities1 = 0 then -1 \
				else cast(ActionCount1 as real) / ActionOpportunities1 \
				end) as result1, ActionOpportunities1, \
			(case when ActionOpportunities2 = 0 then -1 \
				else cast(ActionCount2 as real) / ActionOpportunities2 \
				end) as result2, ActionOpportunities2 \
		FROM	(SELECT	sum(case when S.position > S.val_r_bet_aggressor_pos AND (m.action = 'F' OR m.action = 'XF') then 1 else 0 end) \
						as ActionCount1, \
						sum(case when S.position > S.val_r_bet_aggressor_pos then 1 else 0 end) \
						as ActionOpportunities1, \
						sum(case when S.position < S.val_r_bet_aggressor_pos AND (m.action = 'F' OR m.action = 'XF') then 1 else 0 end) \
						as ActionCount2, \
						sum(case when S.position < S.val_r_bet_aggressor_pos then 1 else 0 end) \
						as ActionOpportunities2 \
				FROM	player as P, %TYPE%_hand_player_statistics as S, lookup_actions l, lookup_actions m, %TYPE%_hand_summary H \
				WHERE	S.id_player = P.id_player AND \
						H.id_hand = S.id_hand AND \
						length(H.str_aggressors_t) >= 2 AND \
						H.cnt_players_r > 2 AND \
						NOT S.flg_hero AND \
						S.cnt_players between " MIN_PLAYERS_AT_TABLE " AND " MAX_PLAYERS_AT_TABLE " AND \
						S.id_gametype = %GAMETYPE% AND \
						P.id_site = %SITEID% AND \
						REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%' AND \
						S.id_action_r = m.id_action AND \
						S.id_action_t = l.id_action AND \
						amt_r_bet_facing > 0 AND \
						(flg_t_bet OR cnt_t_raise > 0 OR cnt_t_call > 0) AND \
						((l.action like '%R' AND S.position > S.val_r_bet_aggressor_pos) \
						OR(l.action like '%B' AND S.position > S.val_r_bet_aggressor_pos) \
						OR(l.action like '%C' AND S.val_t_bet_aggressor_pos > S.val_r_bet_aggressor_pos AND S.val_t_bet_aggressor_pos != -1 AND S.val_t_raise_aggressor_pos = -1) \
						OR(l.action like '%C' AND S.val_t_raise_aggressor_pos > S.val_r_bet_aggressor_pos AND S.val_t_raise_aggressor_pos != -1))) foo",
				// stat_group
				pt_group_advanced
	},
#endif

#if PT4_QUERY_SUPPORT__RIVER_B2_RAISE_FLOAT_MW
				// PT4  query to get raise float mw on RIVER 
	{
		PT4_QUERY_SUPPORT__RIVER_B2_RAISE_FLOAT_MW,
		// name
		{ "river_b2_raise_float_mw_op", "river_b2_raise_float_mw_ip" },
		// description_for_editor
		{ "Poker Tracker river b2 raise float mw OP", "Poker Tracker raise float mw IP" },
		// query
		"SELECT (case when ActionOpportunities1 = 0 then -1 \
				else cast(ActionCount1 as real) / ActionOpportunities1 \
				end) as result1, ActionOpportunities1, \
			(case when ActionOpportunities2 = 0 then -1 \
				else cast(ActionCount2 as real) / ActionOpportunities2 \
				end) as result2, ActionOpportunities2 \
		FROM	(SELECT	sum(case when S.position > S.val_r_bet_aggressor_pos AND (m.action = 'R' OR m.action = 'XR') then 1 else 0 end) \
						as ActionCount1, \
						sum(case when S.position > S.val_r_bet_aggressor_pos then 1 else 0 end) \
						as ActionOpportunities1, \
						sum(case when S.position < S.val_r_bet_aggressor_pos AND (m.action = 'R' OR m.action = 'XR') then 1 else 0 end) \
						as ActionCount2, \
						sum(case when S.position < S.val_r_bet_aggressor_pos then 1 else 0 end) \
						as ActionOpportunities2 \
				FROM	player as P, %TYPE%_hand_player_statistics as S, lookup_actions l, lookup_actions m, %TYPE%_hand_summary H \
				WHERE	S.id_player = P.id_player AND \
						H.id_hand = S.id_hand AND \
						length(H.str_aggressors_t) >= 2 AND \
						H.cnt_players_r > 2 AND \
						NOT S.flg_hero AND \
						S.cnt_players between " MIN_PLAYERS_AT_TABLE " AND " MAX_PLAYERS_AT_TABLE " AND \
						S.id_gametype = %GAMETYPE% AND \
						P.id_site = %SITEID% AND \
						REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%' AND \
						S.id_action_r = m.id_action AND \
						S.id_action_t = l.id_action AND \
						amt_r_bet_facing > 0 AND \
						(flg_t_bet OR cnt_t_raise > 0 OR cnt_t_call > 0) AND \
						((l.action like '%R' AND S.position > S.val_r_bet_aggressor_pos) \
						OR(l.action like '%B' AND S.position > S.val_r_bet_aggressor_pos) \
						OR(l.action like '%C' AND S.val_t_bet_aggressor_pos > S.val_r_bet_aggressor_pos AND S.val_t_bet_aggressor_pos != -1 AND S.val_t_raise_aggressor_pos = -1) \
						OR(l.action like '%C' AND S.val_t_raise_aggressor_pos > S.val_r_bet_aggressor_pos AND S.val_t_raise_aggressor_pos != -1))) foo",
				// stat_group
				pt_group_advanced
	},
#endif

#if PT4_QUERY_SUPPORT__POSTFLOP_FOLD_TO_3B
	// PT4  query to get total fold to 3 bet without preflop
	{
		PT4_QUERY_SUPPORT__POSTFLOP_FOLD_TO_3B,
		// name
		{"postflop_fold_to_3bet"},
		// description_for_editor
		{"Poker Tracker folded while facing 3bet total without preflop"},
		// query
		"SELECT (case when ActionOpportunities = 0 then -1 \
				 else cast(ActionCount as real) / ActionOpportunities \
				 end) as result, ActionOpportunities \
		 FROM	(SELECT	sum(case when enum_f_3bet_action = 'F' or enum_t_3bet_action ='F' or enum_r_3bet_action = 'F' then 1 else 0 end) \
						 as ActionCount, \
						sum(case when flg_f_3bet_def_opp or flg_t_3bet_def_opp or flg_r_3bet_def_opp then 1 else 0 end) \
						 as ActionOpportunities \
				 FROM	player as P, %TYPE%_hand_player_statistics as S \
				 WHERE	S.id_player = P.id_player AND \
						NOT S.flg_hero AND \
						S.cnt_players between " MIN_PLAYERS_AT_TABLE " AND " MAX_PLAYERS_AT_TABLE " AND \
						S.id_gametype = %GAMETYPE% AND \
						P.id_site = %SITEID% AND \
						REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%') foo",
		// stat_group
		pt_group_advanced
	},
#endif

#if PT4_QUERY_SUPPORT__FLOP_FOLD_TO_RAISE
			// PT4  query to get FLOP fold to raise 
		{
			PT4_QUERY_SUPPORT__FLOP_FOLD_TO_RAISE,
			// name
			{"flop_fold_to_raise_op", "flop_fold_to_raise_ip"},
			// description_for_editor
			{"Poker Tracker folded while facing raise flop OP", "Poker Tracker folded while facing raise flop IP"},
			// query
			"SELECT (case when ActionOpportunities1 = 0 then -1 \
					 else cast(ActionCount1 as real) / ActionOpportunities1 \
					end) as result1, ActionOpportunities1, \
					(case when ActionOpportunities2 = 0 then -1 \
					 else cast(ActionCount2 as real) / ActionOpportunities2 \
					end) as result2, ActionOpportunities2 \
			FROM(SELECT	sum(case when S.position > S.val_f_raise_aggressor_pos AND l.action LIKE '%F' then 1 else 0 end) \
						as ActionCount1, \
						sum(case when S.position > S.val_f_raise_aggressor_pos then 1 else 0 end) \
						as ActionOpportunities1, \
						sum(case when S.position < S.val_f_raise_aggressor_pos AND l.action LIKE '%F' then 1 else 0 end) \
						as ActionCount2, \
						sum(case when S.position < S.val_f_raise_aggressor_pos then 1 else 0 end) \
						as ActionOpportunities2 \
					 FROM	player as P, %TYPE%_hand_player_statistics as S, lookup_actions l \
					 WHERE	S.id_player = P.id_player AND \
							NOT S.flg_hero AND \
						S.cnt_players between " MIN_PLAYERS_AT_TABLE " AND " MAX_PLAYERS_AT_TABLE " AND \
							S.id_gametype = %GAMETYPE% AND \
							P.id_site = %SITEID% AND \
							REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%' AND \
							S.flg_f_face_raise AND \
							l.action NOT LIKE '%R%' AND \
							S.id_action_f = l.id_action) foo",
			// stat_group
			pt_group_advanced
		},
#endif

#if PT4_QUERY_SUPPORT__FLOP_3B
			// PT4  query to get FLOP 3bet 
		{
			PT4_QUERY_SUPPORT__FLOP_3B,
			// name
			{"flop_3bet_op", "flop_3bet_ip" },
			// description_for_editor
			{ "Poker Tracker flop 3bet OP" , "Poker Tracker flop 3bet IP" },
			// query
			"SELECT (case when ActionOpportunities1 = 0 then -1 \
					 else cast(ActionCount1 as real) / ActionOpportunities1 \
					end) as result1, ActionOpportunities1, \
					(case when ActionOpportunities2 = 0 then -1 \
					 else cast(ActionCount2 as real) / ActionOpportunities2 \
					end) as result2, ActionOpportunities2 \
			FROM(SELECT	sum(case when S.position > S.val_f_raise_aggressor_pos AND flg_f_3bet then 1 else 0 end) \
						as ActionCount1, \
						sum(case when S.position > S.val_f_raise_aggressor_pos AND flg_f_3bet_opp then 1 else 0 end) \
						as ActionOpportunities1, \
						sum(case when S.position < S.val_f_raise_aggressor_pos AND flg_f_3bet then 1 else 0 end) \
						as ActionCount2, \
						sum(case when S.position < S.val_f_raise_aggressor_pos AND flg_f_3bet_opp then 1 else 0 end) \
						as ActionOpportunities2 \
					 FROM	player as P, %TYPE%_hand_player_statistics as S \
					 WHERE	S.id_player = P.id_player AND \
							NOT S.flg_hero AND \
						S.cnt_players between " MIN_PLAYERS_AT_TABLE " AND " MAX_PLAYERS_AT_TABLE " AND \
							S.id_gametype = %GAMETYPE% AND \
							P.id_site = %SITEID% AND \
							REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%' AND \
							NOT flg_f_4bet_opp) foo",
			// stat_group
			pt_group_advanced
		},
#endif

#if PT4_QUERY_SUPPORT__FLOP_FOLD_TO_3B
	// PT4  query to get FLOP fold to 3 bet 
	{
		PT4_QUERY_SUPPORT__FLOP_FOLD_TO_3B,
		// name
		{"flop_fold_to_3bet_op","flop_fold_to_3bet_ip"},
		// description_for_editor
		{"Poker Tracker folded while facing 3bet flop OP","Poker Tracker folded while facing 3bet flop IP" },
	// query
	"SELECT (case when ActionOpportunities1 = 0 then -1 \
				else cast(ActionCount1 as real) / ActionOpportunities1 \
			end) as result1, ActionOpportunities1, \
			(case when ActionOpportunities2 = 0 then -1 \
				else cast(ActionCount2 as real) / ActionOpportunities2 \
			end) as result2, ActionOpportunities2 \
	FROM(SELECT	sum(case when S.position > S.val_f_raise_aggressor_pos AND enum_f_3bet_action = 'F' then 1 else 0 end) \
				as ActionCount1, \
				sum(case when S.position > S.val_f_raise_aggressor_pos AND flg_f_3bet_def_opp then 1 else 0 end) \
				as ActionOpportunities1, \
				sum(case when S.position < S.val_f_raise_aggressor_pos AND enum_f_3bet_action = 'F' then 1 else 0 end) \
				as ActionCount2, \
				sum(case when S.position < S.val_f_raise_aggressor_pos AND flg_f_3bet_def_opp then 1 else 0 end) \
				as ActionOpportunities2 \
				FROM	player as P, %TYPE%_hand_player_statistics as S \
				WHERE	S.id_player = P.id_player AND \
						NOT S.flg_hero AND \
						S.cnt_players between " MIN_PLAYERS_AT_TABLE " AND " MAX_PLAYERS_AT_TABLE " AND \
						S.id_gametype = %GAMETYPE% AND \
						P.id_site = %SITEID% AND \
						REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%') foo",
	// stat_group
	pt_group_advanced
},
#endif

#if PT4_QUERY_SUPPORT__FLOP_4B
			// PT4  query to get FLOP 4bet 
		{
			PT4_QUERY_SUPPORT__FLOP_4B,
			// name
			{ "flop_4bet_op" ,"flop_4bet_ip" },
			// description_for_editor
			{ "Poker Tracker flop 4bet OP" ,"Poker Tracker flop 4bet IP" },
			// query
			"SELECT (case when ActionOpportunities1 = 0 then -1 \
					 else cast(ActionCount1 as real) / ActionOpportunities1 \
					end) as result1, ActionOpportunities1, \
					(case when ActionOpportunities2 = 0 then -1 \
					 else cast(ActionCount2 as real) / ActionOpportunities2 \
					end) as result2, ActionOpportunities2 \
			FROM(SELECT	sum(case when S.position > S.val_f_raise_aggressor_pos AND flg_f_4bet then 1 else 0 end) \
						as ActionCount1, \
						sum(case when S.position > S.val_f_raise_aggressor_pos AND flg_f_4bet_opp then 1 else 0 end) \
						as ActionOpportunities1, \
						sum(case when S.position < S.val_f_raise_aggressor_pos AND flg_f_4bet then 1 else 0 end) \
						as ActionCount2, \
						sum(case when S.position < S.val_f_raise_aggressor_pos AND flg_f_4bet_opp then 1 else 0 end) \
						as ActionOpportunities2 \
					 FROM	player as P, %TYPE%_hand_player_statistics as S \
					 WHERE	S.id_player = P.id_player AND \
							NOT S.flg_hero AND \
						S.cnt_players between " MIN_PLAYERS_AT_TABLE " AND " MAX_PLAYERS_AT_TABLE " AND \
							S.id_gametype = %GAMETYPE% AND \
							P.id_site = %SITEID% AND \
							REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%') foo",
			// stat_group
			pt_group_advanced
		},
#endif

#if PT4_QUERY_SUPPORT__FLOP_CHECK_RAISE
	// PT4  query to get flop check-raise 
	{
		// name
		"flop_checkraise",		
		// description_for_editor
		"Poker Tracker flop check-raise",
		// query
		"SELECT (case when ActionOpportunities = 0 then -1 \
				 else cast(ActionCount as real) / ActionOpportunities \
				 end) as result \
		 FROM	(SELECT	sum(case when (flg_f_check_raise) then 1 else 0 end) \
						 as ActionCount, \
						sum (case when (flg_f_check=TRUE AND (cnt_f_raise>0 OR cnt_f_call>0 OR flg_f_fold)) then 1 else 0 end) \
						 as ActionOpportunities \
				 FROM	player as P, %TYPE%_hand_player_statistics as S \
				 WHERE	S.id_player = P.id_player AND \
						S.id_gametype = %GAMETYPE% AND \
						P.id_site = %SITEID% AND \
						REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%') foo",
		pt_group_advanced
	},
#endif

#if PT4_QUERY_SUPPORT__TURN_FOLD_TO_RAISE
	// PT4  query to get TURN fold to raise 
		{
			PT4_QUERY_SUPPORT__TURN_FOLD_TO_RAISE,
			// name
			{ "turn_fold_to_raise_op", "turn_fold_to_raise_ip" },
			// description_for_editor
			{ "Poker Tracker folded while facing raise turn OP", "Poker Tracker folded while facing raise turn IP" },
			// query
			"SELECT (case when ActionOpportunities1 = 0 then -1 \
					 else cast(ActionCount1 as real) / ActionOpportunities1 \
					end) as result1, ActionOpportunities1, \
					(case when ActionOpportunities2 = 0 then -1 \
					 else cast(ActionCount2 as real) / ActionOpportunities2 \
					end) as result2, ActionOpportunities2 \
			FROM(SELECT	sum(case when S.position > S.val_t_raise_aggressor_pos AND l.action LIKE '%F' then 1 else 0 end) \
						as ActionCount1, \
						sum(case when S.position > S.val_t_raise_aggressor_pos then 1 else 0 end) \
						as ActionOpportunities1, \
						sum(case when S.position < S.val_t_raise_aggressor_pos AND l.action LIKE '%F' then 1 else 0 end) \
						as ActionCount2, \
						sum(case when S.position < S.val_t_raise_aggressor_pos then 1 else 0 end) \
						as ActionOpportunities2 \
					 FROM	player as P, %TYPE%_hand_player_statistics as S, lookup_actions l \
					 WHERE	S.id_player = P.id_player AND \
							NOT S.flg_hero AND \
						S.cnt_players between " MIN_PLAYERS_AT_TABLE " AND " MAX_PLAYERS_AT_TABLE " AND \
							S.id_gametype = %GAMETYPE% AND \
							P.id_site = %SITEID% AND \
							REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%' AND \
							S.flg_t_face_raise AND \
							l.action NOT LIKE '%R%' AND \
							S.id_action_t = l.id_action) foo",
							// stat_group
							pt_group_advanced
		},
#endif

#if PT4_QUERY_SUPPORT__TURN_3B
		// PT4  query to get TURN 3bet 
		{
			PT4_QUERY_SUPPORT__TURN_3B,
			// name
			{ "turn_3bet_op", "turn_3bet_ip" },
			// description_for_editor
			{ "Poker Tracker turn 3bet OP" , "Poker Tracker turn 3bet IP" },
			// query
			"SELECT (case when ActionOpportunities1 = 0 then -1 \
					 else cast(ActionCount1 as real) / ActionOpportunities1 \
					end) as result1, ActionOpportunities1, \
					(case when ActionOpportunities2 = 0 then -1 \
					 else cast(ActionCount2 as real) / ActionOpportunities2 \
					end) as result2, ActionOpportunities2 \
			FROM(SELECT	sum(case when S.position > S.val_t_raise_aggressor_pos AND flg_t_3bet then 1 else 0 end) \
						as ActionCount1, \
						sum(case when S.position > S.val_t_raise_aggressor_pos AND flg_t_3bet_opp then 1 else 0 end) \
						as ActionOpportunities1, \
						sum(case when S.position < S.val_t_raise_aggressor_pos AND flg_t_3bet then 1 else 0 end) \
						as ActionCount2, \
						sum(case when S.position < S.val_t_raise_aggressor_pos AND flg_t_3bet_opp then 1 else 0 end) \
						as ActionOpportunities2 \
					 FROM	player as P, %TYPE%_hand_player_statistics as S \
					 WHERE	S.id_player = P.id_player AND \
							NOT S.flg_hero AND \
						S.cnt_players between " MIN_PLAYERS_AT_TABLE " AND " MAX_PLAYERS_AT_TABLE " AND \
							S.id_gametype = %GAMETYPE% AND \
							P.id_site = %SITEID% AND \
							REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%' AND \
							NOT flg_t_4bet_opp) foo",
							// stat_group
							pt_group_advanced
		},
#endif

#if PT4_QUERY_SUPPORT__TURN_FOLD_TO_3B
		// PT4  query to get TURN fold to 3 bet 
	{
		PT4_QUERY_SUPPORT__TURN_FOLD_TO_3B,
		// name
		{ "turn_fold_to_3bet_op","turn_fold_to_3bet_ip" },
		// description_for_editor
		{ "Poker Tracker folded while facing 3bet turn OP","Poker Tracker folded while facing 3bet turn IP" },
		// query
		"SELECT (case when ActionOpportunities1 = 0 then -1 \
				else cast(ActionCount1 as real) / ActionOpportunities1 \
			end) as result1, ActionOpportunities1, \
			(case when ActionOpportunities2 = 0 then -1 \
				else cast(ActionCount2 as real) / ActionOpportunities2 \
			end) as result2, ActionOpportunities2 \
	FROM(SELECT	sum(case when S.position > S.val_t_raise_aggressor_pos AND enum_t_3bet_action = 'F' then 1 else 0 end) \
				as ActionCount1, \
				sum(case when S.position > S.val_t_raise_aggressor_pos AND flg_t_3bet_def_opp then 1 else 0 end) \
				as ActionOpportunities1, \
				sum(case when S.position < S.val_t_raise_aggressor_pos AND enum_t_3bet_action = 'F' then 1 else 0 end) \
				as ActionCount2, \
				sum(case when S.position < S.val_t_raise_aggressor_pos AND flg_t_3bet_def_opp then 1 else 0 end) \
				as ActionOpportunities2 \
				FROM	player as P, %TYPE%_hand_player_statistics as S \
				WHERE	S.id_player = P.id_player AND \
						NOT S.flg_hero AND \
						S.cnt_players between " MIN_PLAYERS_AT_TABLE " AND " MAX_PLAYERS_AT_TABLE " AND \
						S.id_gametype = %GAMETYPE% AND \
						P.id_site = %SITEID% AND \
						REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%') foo",
						// stat_group
						pt_group_advanced
},
#endif

#if PT4_QUERY_SUPPORT__TURN_4B
// PT4  query to get TURN 4bet 
		{
			PT4_QUERY_SUPPORT__TURN_4B,
			// name
			{ "turn_4bet_op" ,"turn_4bet_ip" },
			// description_for_editor
			{ "Poker Tracker turn 4bet OP" ,"Poker Tracker turn 4bet IP" },
			// query
			"SELECT (case when ActionOpportunities1 = 0 then -1 \
					 else cast(ActionCount1 as real) / ActionOpportunities1 \
					end) as result1, ActionOpportunities1, \
					(case when ActionOpportunities2 = 0 then -1 \
					 else cast(ActionCount2 as real) / ActionOpportunities2 \
					end) as result2, ActionOpportunities2 \
			FROM(SELECT	sum(case when S.position > S.val_t_raise_aggressor_pos AND flg_t_4bet then 1 else 0 end) \
						as ActionCount1, \
						sum(case when S.position > S.val_t_raise_aggressor_pos AND flg_t_4bet_opp then 1 else 0 end) \
						as ActionOpportunities1, \
						sum(case when S.position < S.val_t_raise_aggressor_pos AND flg_t_4bet then 1 else 0 end) \
						as ActionCount2, \
						sum(case when S.position < S.val_t_raise_aggressor_pos AND flg_t_4bet_opp then 1 else 0 end) \
						as ActionOpportunities2 \
					 FROM	player as P, %TYPE%_hand_player_statistics as S \
					 WHERE	S.id_player = P.id_player AND \
							NOT S.flg_hero AND \
						S.cnt_players between " MIN_PLAYERS_AT_TABLE " AND " MAX_PLAYERS_AT_TABLE " AND \
							S.id_gametype = %GAMETYPE% AND \
							P.id_site = %SITEID% AND \
							REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%') foo",
							// stat_group
							pt_group_advanced
		},
#endif

#if PT4_QUERY_SUPPORT__TURN_CHECK_RAISE
	// PT4  query to get TURN Check-Raise 
	{
		// name
		"turn_checkraise",	
		// description_for_editor
		"Poker Tracker turn Check-Raise",
		// query
		"SELECT (case when ActionOpportunities = 0 then -1 \
				 else cast(ActionCount as real) / ActionOpportunities \
				 end) as result \
		 FROM	(SELECT	sum(case when (flg_t_check_raise) then 1 else 0 end) \
						 as ActionCount, \
						sum(case when (flg_t_check=TRUE AND (cnt_t_raise>0 OR cnt_t_call>0 OR flg_t_fold)) then 1 else 0 end) \
						 as ActionOpportunities \
				 FROM	player as P, %TYPE%_hand_player_statistics as S \
				 WHERE	S.id_player = P.id_player AND \
						S.id_gametype = %GAMETYPE% AND \
						P.id_site = %SITEID% AND \
						REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%') foo",
		// stat_group
		pt_group_advanced
	},
#endif

#if PT4_QUERY_SUPPORT__RIVER_FOLD_TO_RAISE
	// PT4  query to get RIVER fold to raise 
		{
			PT4_QUERY_SUPPORT__RIVER_FOLD_TO_RAISE,
			// name
			{ "river_fold_to_raise_op", "river_fold_to_raise_ip" },
			// description_for_editor
			{ "Poker Tracker folded while facing raise river OP", "Poker Tracker folded while facing raise river IP" },
			// query
			"SELECT (case when ActionOpportunities1 = 0 then -1 \
					 else cast(ActionCount1 as real) / ActionOpportunities1 \
					end) as result1, ActionOpportunities1, \
					(case when ActionOpportunities2 = 0 then -1 \
					 else cast(ActionCount2 as real) / ActionOpportunities2 \
					end) as result2, ActionOpportunities2 \
			FROM(SELECT	sum(case when S.position > S.val_r_raise_aggressor_pos AND l.action LIKE '%F' then 1 else 0 end) \
						as ActionCount1, \
						sum(case when S.position > S.val_r_raise_aggressor_pos then 1 else 0 end) \
						as ActionOpportunities1, \
						sum(case when S.position < S.val_r_raise_aggressor_pos AND l.action LIKE '%F' then 1 else 0 end) \
						as ActionCount2, \
						sum(case when S.position < S.val_r_raise_aggressor_pos then 1 else 0 end) \
						as ActionOpportunities2 \
					 FROM	player as P, %TYPE%_hand_player_statistics as S, lookup_actions l \
					 WHERE	S.id_player = P.id_player AND \
							NOT S.flg_hero AND \
						S.cnt_players between " MIN_PLAYERS_AT_TABLE " AND " MAX_PLAYERS_AT_TABLE " AND \
							S.id_gametype = %GAMETYPE% AND \
							P.id_site = %SITEID% AND \
							REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%' AND \
							S.flg_r_face_raise AND \
							l.action NOT LIKE '%R%' AND \
							S.id_action_r = l.id_action) foo",
							// stat_group
							pt_group_advanced
		},
#endif

#if PT4_QUERY_SUPPORT__RIVER_3B
		// PT4  query to get RIVER 3bet 
		{
			PT4_QUERY_SUPPORT__RIVER_3B,
			// name
			{ "river_3bet_op", "river_3bet_ip" },
			// description_for_editor
			{ "Poker Tracker river 3bet OP" , "Poker Tracker river 3bet IP" },
			// query
			"SELECT (case when ActionOpportunities1 = 0 then -1 \
					 else cast(ActionCount1 as real) / ActionOpportunities1 \
					end) as result1, ActionOpportunities1, \
					(case when ActionOpportunities2 = 0 then -1 \
					 else cast(ActionCount2 as real) / ActionOpportunities2 \
					end) as result2, ActionOpportunities2 \
			FROM(SELECT	sum(case when S.position > S.val_r_raise_aggressor_pos AND flg_r_3bet then 1 else 0 end) \
						as ActionCount1, \
						sum(case when S.position > S.val_r_raise_aggressor_pos AND flg_r_3bet_opp then 1 else 0 end) \
						as ActionOpportunities1, \
						sum(case when S.position < S.val_r_raise_aggressor_pos AND flg_r_3bet then 1 else 0 end) \
						as ActionCount2, \
						sum(case when S.position < S.val_r_raise_aggressor_pos AND flg_r_3bet_opp then 1 else 0 end) \
						as ActionOpportunities2 \
					 FROM	player as P, %TYPE%_hand_player_statistics as S \
					 WHERE	S.id_player = P.id_player AND \
							NOT S.flg_hero AND \
						S.cnt_players between " MIN_PLAYERS_AT_TABLE " AND " MAX_PLAYERS_AT_TABLE " AND \
							S.id_gametype = %GAMETYPE% AND \
							P.id_site = %SITEID% AND \
							REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%' AND \
							NOT flg_r_4bet_opp) foo",
							// stat_group
							pt_group_advanced
		},
#endif

#if PT4_QUERY_SUPPORT__RIVER_FOLD_TO_3B
		// PT4  query to get RIVER fold to 3 bet 
	{
		PT4_QUERY_SUPPORT__RIVER_FOLD_TO_3B,
		// name
		{ "river_fold_to_3bet_op","river_fold_to_3bet_ip" },
		// description_for_editor
		{ "Poker Tracker folded while facing 3bet river OP","Poker Tracker folded while facing 3bet river IP" },
		// query
		"SELECT (case when ActionOpportunities1 = 0 then -1 \
				else cast(ActionCount1 as real) / ActionOpportunities1 \
			end) as result1, ActionOpportunities1, \
			(case when ActionOpportunities2 = 0 then -1 \
				else cast(ActionCount2 as real) / ActionOpportunities2 \
			end) as result2, ActionOpportunities2 \
	FROM(SELECT	sum(case when S.position > S.val_r_raise_aggressor_pos AND enum_r_3bet_action = 'F' then 1 else 0 end) \
				as ActionCount1, \
				sum(case when S.position > S.val_r_raise_aggressor_pos AND flg_r_3bet_def_opp then 1 else 0 end) \
				as ActionOpportunities1, \
				sum(case when S.position < S.val_r_raise_aggressor_pos AND enum_r_3bet_action = 'F' then 1 else 0 end) \
				as ActionCount2, \
				sum(case when S.position < S.val_r_raise_aggressor_pos AND flg_r_3bet_def_opp then 1 else 0 end) \
				as ActionOpportunities2 \
				FROM	player as P, %TYPE%_hand_player_statistics as S \
				WHERE	S.id_player = P.id_player AND \
						NOT S.flg_hero AND \
						S.cnt_players between " MIN_PLAYERS_AT_TABLE " AND " MAX_PLAYERS_AT_TABLE " AND \
						S.id_gametype = %GAMETYPE% AND \
						P.id_site = %SITEID% AND \
						REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%') foo",
						// stat_group
						pt_group_advanced
},
#endif

#if PT4_QUERY_SUPPORT__RIVER_4B
// PT4  query to get RIVER 4bet 
		{
			PT4_QUERY_SUPPORT__RIVER_4B,
			// name
			{ "river_4bet_op" ,"river_4bet_ip" },
			// description_for_editor
			{ "Poker Tracker river 4bet OP" ,"Poker Tracker river 4bet IP" },
			// query
			"SELECT (case when ActionOpportunities1 = 0 then -1 \
					 else cast(ActionCount1 as real) / ActionOpportunities1 \
					end) as result1, ActionOpportunities1, \
					(case when ActionOpportunities2 = 0 then -1 \
					 else cast(ActionCount2 as real) / ActionOpportunities2 \
					end) as result2, ActionOpportunities2 \
			FROM(SELECT	sum(case when S.position > S.val_r_raise_aggressor_pos AND flg_r_4bet then 1 else 0 end) \
						as ActionCount1, \
						sum(case when S.position > S.val_r_raise_aggressor_pos AND flg_r_4bet_opp then 1 else 0 end) \
						as ActionOpportunities1, \
						sum(case when S.position < S.val_r_raise_aggressor_pos AND flg_r_4bet then 1 else 0 end) \
						as ActionCount2, \
						sum(case when S.position < S.val_r_raise_aggressor_pos AND flg_r_4bet_opp then 1 else 0 end) \
						as ActionOpportunities2 \
					 FROM	player as P, %TYPE%_hand_player_statistics as S \
					 WHERE	S.id_player = P.id_player AND \
							NOT S.flg_hero AND \
						S.cnt_players between " MIN_PLAYERS_AT_TABLE " AND " MAX_PLAYERS_AT_TABLE " AND \
							S.id_gametype = %GAMETYPE% AND \
							P.id_site = %SITEID% AND \
							REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%') foo",
							// stat_group
							pt_group_advanced
		},
#endif

#if PT4_QUERY_SUPPORT__RIVER_CHECK_RAISE
		// PT4  query to get RIVER Check-Raise 
	{
		// name
		"river_checkraise",
		// description_for_editor
		"Poker Tracker river Check-Raise",
		// query
		"SELECT (case when ActionOpportunities = 0 then -1 \
				 else cast(ActionCount as real) / ActionOpportunities \
				 end) as result \
		 FROM	(SELECT	sum(case when (flg_r_check_raise) then 1 else 0 end) \
						 as ActionCount, \
						sum(case when (flg_r_check=TRUE AND (cnt_r_raise>0 OR cnt_r_call>0 OR flg_r_fold)) then 1 else 0 end) \
						 as ActionOpportunities \
				 FROM	player as P, %TYPE%_hand_player_statistics as S \
				 WHERE	S.id_player = P.id_player AND \
						S.id_gametype = %GAMETYPE% AND \
						P.id_site = %SITEID% AND \
						REPLACE(P.player_name, ' ', '') LIKE '%SCREENNAME%') foo",
						// stat_group
						pt_group_advanced
	},
#endif
};

#endif // INC_POKERTRACKER_QUERIES_VERSION_3_H