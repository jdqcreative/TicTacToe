#pragma once

#include "TicTacToeBoard.h"
#include "Player.h"

#include <stdlib.h>

class Game {

	TicTacToeBoard board;
	Player player;
	bool gameOver = false;
	
public:

	void Run();
	void Reset();
};