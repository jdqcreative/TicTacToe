#pragma once

#include <iostream>

class TicTacToeBoard {

	std::string m_Spaces[9] = {" ", " ", " ", " ", " ", " ", " ", " ", " "};

public:

	void printBoard();
	void Update(int turn, bool player);
};