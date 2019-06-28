//
// Created by Joseph Holland  on 28/06/2019.
//

#include "MainFrame.h"

MainFrame::MainFrame( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
    this->SetSizeHints( wxDefaultSize, wxDefaultSize );

    wxBoxSizer* topSizer;
    topSizer = new wxBoxSizer( wxHORIZONTAL );

    wxBoxSizer* leftSizer;
    leftSizer = new wxBoxSizer( wxVERTICAL );

    gameTypeLabel = new wxStaticText( this, wxID_ANY, wxT("GAME_TYPE"), wxDefaultPosition, wxDefaultSize, wxALIGN_CENTER_HORIZONTAL|wxBORDER_SIMPLE );
    gameTypeLabel->Wrap( -1 );
    leftSizer->Add( gameTypeLabel, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5 );

    gameBoard = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxBORDER_SIMPLE|wxTAB_TRAVERSAL );
    gameBoard->SetMinSize( wxSize( 310,610 ) );
    gameBoard->SetMaxSize( wxSize( 310,610 ) );

    leftSizer->Add( gameBoard, 1, wxALIGN_CENTER|wxALL, 5 );


    topSizer->Add( leftSizer, 1, wxEXPAND, 5 );

    wxBoxSizer* rightSizer;
    rightSizer = new wxBoxSizer( wxVERTICAL );

    wxStaticBoxSizer* statsSizer;
    statsSizer = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, wxEmptyString ), wxVERTICAL );

    linesLabel = new wxStaticText( statsSizer->GetStaticBox(), wxID_ANY, wxT("LINES"), wxDefaultPosition, wxDefaultSize, wxALIGN_CENTER_HORIZONTAL );
    linesLabel->Wrap( -1 );
    statsSizer->Add( linesLabel, 0, wxEXPAND, 0 );

    linesValue = new wxTextCtrl( statsSizer->GetStaticBox(), wxID_ANY, wxT("000000"), wxDefaultPosition, wxDefaultSize, wxTE_CENTER|wxTE_READONLY );
    linesValue->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_3DLIGHT ) );

    statsSizer->Add( linesValue, 0, wxALL, 5 );

    scoreLabel = new wxStaticText( statsSizer->GetStaticBox(), wxID_ANY, wxT("SCORE"), wxDefaultPosition, wxDefaultSize, wxALIGN_CENTER_HORIZONTAL );
    scoreLabel->Wrap( -1 );
    statsSizer->Add( scoreLabel, 0, wxEXPAND, 0 );

    scoreValue = new wxTextCtrl( statsSizer->GetStaticBox(), wxID_ANY, wxT("000000"), wxDefaultPosition, wxDefaultSize, wxTE_CENTER|wxTE_READONLY );
    scoreValue->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_3DLIGHT ) );

    statsSizer->Add( scoreValue, 0, wxALL, 5 );

    highscoreLabel = new wxStaticText( statsSizer->GetStaticBox(), wxID_ANY, wxT("HIGHSCORE"), wxDefaultPosition, wxDefaultSize, wxALIGN_CENTER_HORIZONTAL );
    highscoreLabel->Wrap( -1 );
    statsSizer->Add( highscoreLabel, 0, wxEXPAND, 0 );

    highscoreValue = new wxTextCtrl( statsSizer->GetStaticBox(), wxID_ANY, wxT("000000"), wxDefaultPosition, wxDefaultSize, wxTE_CENTER|wxTE_READONLY );
    highscoreValue->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_3DLIGHT ) );

    statsSizer->Add( highscoreValue, 0, wxALL, 5 );


    rightSizer->Add( statsSizer, 0, wxALIGN_LEFT|wxALL, 5 );

    wxStaticBoxSizer* nextPieceSizer;
    nextPieceSizer = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, wxEmptyString ), wxVERTICAL );

    nextPieceLabel = new wxStaticText( nextPieceSizer->GetStaticBox(), wxID_ANY, wxT("NEXT"), wxDefaultPosition, wxDefaultSize, wxALIGN_CENTER_HORIZONTAL );
    nextPieceLabel->Wrap( -1 );
    nextPieceSizer->Add( nextPieceLabel, 0, wxEXPAND, 0 );

    nextPieceBoard = new wxPanel( nextPieceSizer->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
    nextPieceBoard->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_3DLIGHT ) );
    nextPieceBoard->SetMinSize( wxSize( 80,80 ) );
    nextPieceBoard->SetMaxSize( wxSize( 80,80 ) );

    nextPieceSizer->Add( nextPieceBoard, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5 );


    rightSizer->Add( nextPieceSizer, 0, wxALIGN_LEFT|wxALL, 5 );

    wxStaticBoxSizer* levelSizer;
    levelSizer = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, wxEmptyString ), wxVERTICAL );

    levelLabel = new wxStaticText( levelSizer->GetStaticBox(), wxID_ANY, wxT("LEVEL"), wxDefaultPosition, wxDefaultSize, wxALIGN_CENTER_HORIZONTAL );
    levelLabel->Wrap( -1 );
    levelSizer->Add( levelLabel, 0, wxEXPAND, 0 );

    levelValue = new wxTextCtrl( levelSizer->GetStaticBox(), wxID_ANY, wxT("000000"), wxDefaultPosition, wxDefaultSize, wxTE_CENTER|wxTE_READONLY );
    levelValue->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_3DLIGHT ) );

    levelSizer->Add( levelValue, 0, wxALL, 5 );


    rightSizer->Add( levelSizer, 0, wxALIGN_LEFT|wxALL, 5 );

    wxStaticBoxSizer* buttonsSizer;
    buttonsSizer = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, wxEmptyString ), wxVERTICAL );

    pauseGameBtn = new wxButton( buttonsSizer->GetStaticBox(), wxID_ANY, wxT("PAUSE"), wxDefaultPosition, wxDefaultSize, 0 );
    buttonsSizer->Add( pauseGameBtn, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5 );

    newGameBtn = new wxButton( buttonsSizer->GetStaticBox(), wxID_ANY, wxT("NEW GAME"), wxDefaultPosition, wxDefaultSize, 0 );
    buttonsSizer->Add( newGameBtn, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5 );

    highScoresBtn = new wxButton( buttonsSizer->GetStaticBox(), wxID_ANY, wxT("HIGHSCORES"), wxDefaultPosition, wxDefaultSize, wxBU_RIGHT );
    buttonsSizer->Add( highScoresBtn, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5 );

    optionsBtn = new wxButton( buttonsSizer->GetStaticBox(), wxID_ANY, wxT("OPTIONS"), wxDefaultPosition, wxDefaultSize, wxBU_RIGHT );
    buttonsSizer->Add( optionsBtn, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5 );


    rightSizer->Add( buttonsSizer, 0, wxALIGN_LEFT|wxALL, 5 );


    topSizer->Add( rightSizer, 0, wxEXPAND, 5 );


    this->SetSizer( topSizer );
    this->Layout();
    topSizer->Fit( this );

    this->Centre( wxBOTH );
}

MainFrame::~MainFrame()
{
}
