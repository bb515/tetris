//
// Created by Joseph Holland  on 28/06/2019.
//

#ifndef TETRIS_MAINFRAME_H
#define TETRIS_MAINFRAME_H



#pragma once

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/string.h>
#include <wx/stattext.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/panel.h>
#include <wx/sizer.h>
#include <wx/textctrl.h>
#include <wx/statbox.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/button.h>
#include <wx/frame.h>

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class MainFrame
///////////////////////////////////////////////////////////////////////////////
class MainFrame : public wxFrame
{
private:

protected:
    wxStaticText* gameTypeLabel;
    wxPanel* gameBoard;
    wxStaticText* linesLabel;
    wxTextCtrl* linesValue;
    wxStaticText* scoreLabel;
    wxTextCtrl* scoreValue;
    wxStaticText* highscoreLabel;
    wxTextCtrl* highscoreValue;
    wxStaticText* nextPieceLabel;
    wxPanel* nextPieceBoard;
    wxStaticText* levelLabel;
    wxTextCtrl* levelValue;
    wxButton* pauseGameBtn;
    wxButton* newGameBtn;
    wxButton* highScoresBtn;
    wxButton* optionsBtn;

public:

    MainFrame( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Tetris Bois"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( -1,-1 ), long style = wxDEFAULT_FRAME_STYLE|wxFRAME_TOOL_WINDOW|wxTAB_TRAVERSAL );

    ~MainFrame();

};


#endif //TETRIS_MAINFRAME_H
