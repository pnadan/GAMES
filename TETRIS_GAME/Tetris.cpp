#include "Tetris.h"
#include "Board.h"

Tetris::Tetris(const wxString& title) : wxFrame(NULL, wxID_ANY, title, wxDefaultPosition, wxSize(360, 760))
{
    wxStatusBar* sb = CreateStatusBar();
    sb->SetStatusText(wxT("0"));
    Board* board = new Board(this);
    board->SetFocus();
    board->Start();
}