#pragma once

#include <iostream>

class TicTacToeBoard {

	std::string m_Spaces[9] = {" ", " ", " ", " ", " ", " ", " ", " ", " "};
	int m_TurnsTaken = 0;
	std::string m_Message;

public:

	void printBoard();
	void Update(int turn, bool player);

	bool EvaluateSpaces(const std::string& A, const std::string& B, const std::string& C);
	void CheckForWinner();
	bool EvaluateTurn(int t);

	void ResetBoard();

	void PrintMessage();
	void ClearMessage();
};