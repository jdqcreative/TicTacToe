#include "TicTacToeBoard.h"

void TicTacToeBoard::printBoard()
{
	std::cout << " " << m_Spaces[0] << " | " << m_Spaces[1] << " | " << m_Spaces[2] << std::endl;
	std::cout << "___________" << std::endl;
	std::cout << " " << m_Spaces[3] << " | " << m_Spaces[4] << " | " << m_Spaces[5] << std::endl;
	std::cout << "___________" << std::endl;
	std::cout << " " << m_Spaces[6] << " | " << m_Spaces[7] << " | " << m_Spaces[8] << std::endl;

}

void TicTacToeBoard::Update(int turn, bool player)
{ 
	if (player)
	{
		m_Spaces[--turn] = "X";
	}
	else
	{
		m_Spaces[--turn] = "O";
	}
}

bool TicTacToeBoard::EvaluateSpaces(const std::string& A, const std::string& B, const std::string& C)
{
	if (A == " ")
	{
		return false;
	}

	if (A == B && A == C)
	{
		return true;
	}

	return false;
}

void TicTacToeBoard::CheckForWinner()
{
	// Check horizontal rows
	if (EvaluateSpaces(m_Spaces[0], m_Spaces[1], m_Spaces[2]))
	{
		std::cout << m_Spaces[0] << " has won the game!" << std::endl;
	}

	if (EvaluateSpaces(m_Spaces[3], m_Spaces[4], m_Spaces[5]))
	{
		std::cout << m_Spaces[3] << " has won the game!" << std::endl;
	}

	if (EvaluateSpaces(m_Spaces[6], m_Spaces[7], m_Spaces[8]))
	{
		std::cout << m_Spaces[6] << " has won the game!" << std::endl;
	}

	// Check vertical rows
	if (EvaluateSpaces(m_Spaces[0], m_Spaces[3], m_Spaces[6]))
	{
		std::cout << m_Spaces[0] << " has won the game!" << std::endl;
	}
	if (EvaluateSpaces(m_Spaces[1], m_Spaces[4], m_Spaces[7]))
	{
		std::cout << m_Spaces[1] << " has won the game!" << std::endl;
	}

	if (EvaluateSpaces(m_Spaces[2], m_Spaces[5], m_Spaces[8]))
	{
		std::cout << m_Spaces[2] << " has won the game!" << std::endl;
	}

	// Check diagonally
	if (EvaluateSpaces(m_Spaces[0], m_Spaces[4], m_Spaces[8]))
	{
		std::cout << m_Spaces[0] << " has won the game!" << std::endl;
	}

	if (EvaluateSpaces(m_Spaces[2], m_Spaces[4], m_Spaces[6]))
	{
		std::cout << m_Spaces[2] << " has won the game!" << std::endl;
	}
}

bool TicTacToeBoard::EvaluateTurn(int t)
{
	if (m_Spaces[--t] != " ")
	{
		return false;
	}

	return true;
}