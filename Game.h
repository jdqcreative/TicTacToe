#pragma once

#include "TicTacToeBoard.h"
#include "Player.h"

#include <stdlib.h>

class Game {

	TicTacToeBoard board;
	Player player;
	bool gameOver = false;
	std::string m_Message;
	
public:

	void Run();
	void Reset();

	void PrintMessage();
	void ClearMessage();
};