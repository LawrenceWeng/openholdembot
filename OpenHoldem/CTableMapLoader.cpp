//******************************************************************************
//
// This file is part of the OpenHoldem project
//   Download page:         http://code.google.com/p/openholdembot/
//   Forums:                http://www.maxinmontreal.com/forums/index.php
//   Licensed under GPL v3: http://www.gnu.org/licenses/gpl.html
//
//******************************************************************************
//
// Purpose:
//
//******************************************************************************

#include "StdAfx.h"
#include "CTableMaploader.h"

#include "CAutoConnector.h"
#include "CFilenames.h"
#include "CFileSystemMonitor.h"
#include "CPreferences.h"
#include "CTablemapCompletenessChecker.h"
#include "CTablePointChecker.h"
#include "MagicNumbers.h"
#include "..\CTablemap\CTablemapAccess.h"
#include "OH_MessageBox.h"
#include "OpenHoldem.h"

CTableMapLoader *p_tablemap_loader = NULL;

std::map<int, t_tablemap_connection_data> tablemap_connection_data;

CTableMapLoader::CTableMapLoader() {
	write_log(preferences.debug_tablemap_loader(), "[CTablemapLoader] CTableMapLoader()\n");
	tablemaps_in_scraper_folder_already_parsed = false;

	// Parse all tablemaps once on startup.
	// We want to avoid heavy workload in the connect()-function.
	ParseAllTableMapsToLoadConnectionData();
	CheckForDuplicatedTablemaps(); 
}

CTableMapLoader::~CTableMapLoader() {
  tablemap_connection_data.clear();
}

void CTableMapLoader::ParseAllTableMapsToLoadConnectionData(CString TableMapWildcard) {
	CFileFind	hFile;
	
	write_log(preferences.debug_tablemap_loader(), "[CTablemapLoader] ParseAllTableMapsToLoadConnectionData: %s\n", TableMapWildcard);
  tablemap_connection_data.clear();
	_number_of_tablemaps_loaded = 0;
	CString	current_path = p_tablemap->filepath();
	BOOL bFound = hFile.FindFile(TableMapWildcard.GetString());
	while (bFound) {
		bFound = hFile.FindNextFile();
		if (!hFile.IsDots() && !hFile.IsDirectory() && hFile.GetFilePath()!=current_path) {
			int ret = p_tablemap->LoadTablemap(hFile.GetFilePath().GetString());
			if (ret == SUCCESS)	{
				ExtractConnectionDataFromCurrentTablemap(p_tablemap);
        CTablemapCompletenessChecker tablemap_completeness_checker;
        tablemap_completeness_checker.VerifyMap();
				write_log(preferences.debug_tablemap_loader(), "[CTablemapLoader] Number of TMs loaded: %d\n", _number_of_tablemaps_loaded);
			}
		}
	}
}

void CTableMapLoader::ParseAllTableMapsToLoadConnectionData() {
	CString TableMapWildcard;
	
	write_log(preferences.debug_tablemap_loader(), "[CTablemapLoader] ParseAllTableMapsToLoadConnectionData\n");
	ParseAllTableMapsToLoadConnectionData(p_filenames->TableMapWildcard());	
	tablemaps_in_scraper_folder_already_parsed = true;
}

bool CTableMapLoader::tablemap_connection_dataAlreadyStored(CString TablemapFilePath) {
  assert(TablemapFilePath != "");
	for (int i=0; i<_number_of_tablemaps_loaded; i++)	{
    assert(tablemap_connection_data[i].FilePath != "");
		if (tablemap_connection_data[i].FilePath == TablemapFilePath)	{
			write_log(preferences.debug_tablemap_loader(), "[CTablemapLoader] tablemap_connection_dataAlreadyStored [%s] [true]\n", TablemapFilePath);
			return true;
		}
	}
	write_log(preferences.debug_tablemap_loader(), "[CTablemapLoader] tablemap_connection_dataAlreadyStored [%s] [false]\n", TablemapFilePath);
	return false;
}


void CTableMapLoader::CheckForDuplicatedTablemaps() {
	CString error_message = "";
	for (int i=0; i<_number_of_tablemaps_loaded; i++)
	{
		for (int j=i+1; j<_number_of_tablemaps_loaded; j++)
		{
			if	((tablemap_connection_data[i].SiteName == tablemap_connection_data[j].SiteName)
				&& (tablemap_connection_data[i].TitleText == tablemap_connection_data[j].TitleText))
			{
				write_log(preferences.debug_tablemap_loader(), "[CTablemapLoader] tablemap_connection_dataDuplicated [%s, %s]  [true]\n", 
					tablemap_connection_data[i].SiteName, tablemap_connection_data[i].TitleText);
				error_message.Format("It seems you have multiple versions of the same map in your scraper folder.\n\n"\
					"SiteName = %s\n"\
					"TitleText = %s\n\n"\
					"This will cause problems as the autoconnector won't be able to decide which one to use.\n"\
					"Please remove the superfluous maps from the scraper folder.\n", 
					tablemap_connection_data[i].SiteName, tablemap_connection_data[i].TitleText);
				OH_MessageBox_Error_Warning((LPCTSTR) error_message, 
					"Warning! Duplicate SiteName and TitleText");
			}
		}
	}
}

void CTableMapLoader::ExtractConnectionDataFromCurrentTablemap(CTablemap *cmap) {
	write_log(preferences.debug_tablemap_loader(), "[CTablemapLoader] ExtractConnectionDataFromCurrentTablemap(): %s\n", cmap->filepath());
	write_log(preferences.debug_tablemap_loader(), "[CTablemapLoader] number_of_tablemaps_loaded: %d\n", _number_of_tablemaps_loaded);

	// Avoiding to store the data twice, e.g. when we load a known TM manually
	if (tablemap_connection_dataAlreadyStored(cmap->filepath())) 	{
		write_log(preferences.debug_tablemap_loader(), "[CTablemapLoader] ExtractConnectionDataFromCurrentTablemap(): already stored; early exit\n");
		return;
	}

	tablemap_connection_data[_number_of_tablemaps_loaded].FilePath = cmap->filepath();
	tablemap_connection_data[_number_of_tablemaps_loaded].SiteName = cmap->sitename();
	tablemap_connection_data[_number_of_tablemaps_loaded].TitleText = cmap->titletext();

	if (cmap->sitename() == "") {
		CString error_message;
		error_message.Format("Tablemap contains no sitename.\n"
			"Sitenames are necessary to recognize duplicate TMs\n"
			"(and for other features like PokerTracker).\n\n",
			"%s", cmap->filepath());
		OH_MessageBox_Error_Warning(error_message, "Warning");
	}
	
	// Get clientsize info through TM-access-class
	p_tablemap_access->GetClientSize("clientsizemin", &tablemap_connection_data[_number_of_tablemaps_loaded].ClientSizeMinX, &tablemap_connection_data[_number_of_tablemaps_loaded].ClientSizeMinY);
	p_tablemap_access->GetClientSize("clientsizemax", &tablemap_connection_data[_number_of_tablemaps_loaded].ClientSizeMaxX, &tablemap_connection_data[_number_of_tablemaps_loaded].ClientSizeMaxY);

	// Extract title text information
	p_tablemap_access->SetTitleText("titletext", tablemap_connection_data[_number_of_tablemaps_loaded].TitleText);
	// Extract negative title texs
	p_tablemap_access->SetTitleText("!titletext", tablemap_connection_data[_number_of_tablemaps_loaded].NegativeTitleText);
		
	CString s = "";
	for (int i=0; i<k_max_number_of_titletexts; i++) {
		s.Format("titletext%d", i);
		p_tablemap_access->SetTitleText(s, tablemap_connection_data[_number_of_tablemaps_loaded].TitleText_0_9[i]);

		s.Format("!titletext%d", i);
		p_tablemap_access->SetTitleText(s, tablemap_connection_data[_number_of_tablemaps_loaded].NegativeTitleText_0_9[i]);		
	}
	// Extract tablepoints r$tablepoint0..9
	s = "";
	int tpcount = 0;
	for (int i=0; i<k_max_number_of_tablepoints; ++i) {
		s.Format("tablepoint%d", i);
		if (p_tablemap_access->GetTableMapRegion(s, &tablemap_connection_data[_number_of_tablemaps_loaded].TablePoint[i])) {
		  ++tpcount;
		} else {
      break;
    }
	}
	tablemap_connection_data[_number_of_tablemaps_loaded].TablePointCount = tpcount;
	++_number_of_tablemaps_loaded;
}

// This function has to be global and can't be part of the class,
// as it has to be called by the callback-function 
// BOOL CALLBACK EnumProcTopLevelWindowList(HWND hwnd, LPARAM lparam) 
bool Check_TM_Against_Single_Window(int MapIndex, HWND h, RECT r, CString title) {
	bool good_pos_title = false, good_neg_title = false; 
  bool good_table_points = false;
	CString	s;

	write_log(preferences.debug_tablemap_loader(), "[CTablemapLoader] Check_TM_Against_Single_Window(..)\n");
	write_log(preferences.debug_tablemap_loader(), "[CTablemapLoader] Checking map nr. %d\n", MapIndex);
	write_log(preferences.debug_tablemap_loader(), "[CTablemapLoader] Window title: %s\n", title);
	
	// Check for client size that falls within min/max
	if (!((r.right   >= tablemap_connection_data[MapIndex].ClientSizeMinX)
			&& (r.right  <= tablemap_connection_data[MapIndex].ClientSizeMaxX)
			&& (r.bottom >= tablemap_connection_data[MapIndex].ClientSizeMinY)
			&& (r.bottom <= tablemap_connection_data[MapIndex].ClientSizeMaxY))) {
		write_log(preferences.debug_tablemap_loader(), "[CTablemapLoader] No good size: (%dpx, %dpx) out of clientsizemin/max\n",
			r.right,
			r.bottom);
		return false;
	}
	write_log(preferences.debug_tablemap_loader(), "[CTablemapLoader] Size matches; checking the rest...\n");
  
  // Check for match positive title text matches
	good_pos_title = false;
	if ((tablemap_connection_data[MapIndex].TitleText != "")
		  && title.Find(tablemap_connection_data[MapIndex].TitleText) != -1) 	{
		good_pos_title = true;
	}	else {
		// titletext din't match
		// Check for titletext0..titletext9
		for (int i=0; i<k_max_number_of_titletexts; i++){
			if ((tablemap_connection_data[MapIndex].TitleText_0_9[i] != "")
				  && (title.Find(tablemap_connection_data[MapIndex].TitleText_0_9[i]) != -1)) {
				good_pos_title = true;
				break;
			}
		}
	}
	if (!good_pos_title) {
		write_log(preferences.debug_tablemap_loader(), "[CTablemapLoader] No good title.\n");
		return false;
	}

	// Check for no negative title text matches
	good_neg_title = false;
	if ((tablemap_connection_data[MapIndex].NegativeTitleText != "")
		  && (title.Find(tablemap_connection_data[MapIndex].NegativeTitleText) != -1))	{
		good_neg_title = true;
	}	else{
		for (int i=0; i<k_max_number_of_titletexts; i++) {
			if ((tablemap_connection_data[MapIndex].NegativeTitleText_0_9[i] != "")
				  && title.Find(tablemap_connection_data[MapIndex].NegativeTitleText_0_9[i]) != -1)	{
				good_neg_title = true;
				break;
			}
		}
	}
	if (good_neg_title)
	{
		write_log(preferences.debug_tablemap_loader(), "[CTablemapLoader] Negative title found -> window is no match.\n"); 
		return false;
	}
  // tablepoints
  CTablepointChecker tablepoint_checker;
  if (!tablepoint_checker.CheckTablepoints(h, MapIndex, r)) {
    write_log(preferences.debug_tablemap_loader(), "[CTablemapLoader] Not all tablepoints match.\n");
    return false;
  }
	write_log(preferences.debug_tablemap_loader(), "[CTablemapLoader] Window ia a match\n");
	return true;
}

void CTableMapLoader::ReloadAllTablemapsIfChanged() {
	if (p_filesystem_monitor->AnyChanges())	{		
		// Since OpenHoldem 4.0.0 there is no longer any possibility 
		// for manual connection; i.e. no possibility for re-connection.
		// Therefore the file-system-monitor does now dis-connect
		// if it finds a new/changed tablemap and the auto-connector-thread 
		// will thereafter reload the TMs and connect again.
		//
		// Note: This solution might lose some game-history (reset),
		// but that is perfectly acceptable for development
		// and hot-plugging of TMs won't happen in production.
		write_log(preferences.debug_tablemap_loader(), "[CTablemapLoader] Tablemaps changed; going to reload.\n");
		p_autoconnector->Disconnect("tablemaps changed and need to be reloaded");
		ParseAllTableMapsToLoadConnectionData();
	}	else {
		write_log(preferences.debug_tablemap_loader(), "[CTablemapLoader] All tablemaps unchanged; nothing to do.\n");
	}
}

CString CTableMapLoader::GetTablemapPathToLoad(int tablemap_index) {
	assert(tablemap_index >= 0);
	assert(tablemap_index < _number_of_tablemaps_loaded);
	return tablemap_connection_data[tablemap_index].FilePath;
}

