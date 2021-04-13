// TETRIS_GAME.cpp : Defines the entry point for the application.
//

//#include "framework.h"
#include "TETRIS_GAME.h"
#include "Tetris.h"


// Game: TETRIS.
// -------------
//
// p : pauses the game.
// space : drop the tetris piece
// left arrow : moves the piece left
// right arrow : moves the piece right
// up arrow : rotates the piece right
// down arrow : rotates the piece left
//
// No acceleration and no score points implemented.

IMPLEMENT_APP(TETRIS_APP)

bool TETRIS_APP::OnInit()
{
    srand(time(NULL));
    Tetris* tetris = new Tetris(wxT("Tetris"));
    tetris->Centre();
    tetris->Show(true);

    return true;
}