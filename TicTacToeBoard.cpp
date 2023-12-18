#include "TicTacToeBoard.h"

void TicTacToeBoard::printBoard()
{
	std::cout << " " << m_Spaces[0] << " | " << m_Spaces[1] << " | " << m_Spaces[2] << std::endl;
	std::cout << "___________" << std::endl;
	std::cout << " " << m_Spaces[3] << " | " << m_Spaces[4] << " | " << m_Spaces[5] << std::endl;
	std::cout << "___________" << std::endl;
	std::cout << " " << m_Spaces[6] << " | " << m_Spaces[7] << " | " << m_Spaces[8] << "\n" << std::endl;

}

void TicTacToeBoard::Update(int turn, bool player)
{ 

	m_TurnsTaken++;

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
		ResetBoard();
	}

	if (EvaluateSpaces(m_Spaces[3], m_Spaces[4], m_Spaces[5]))
	{
		std::cout << m_Spaces[3] << " has won the game!" << std::endl;
		ResetBoard();
	}

	if (EvaluateSpaces(m_Spaces[6], m_Spaces[7], m_Spaces[8]))
	{
		std::cout << m_Spaces[6] << " has won the game!" << std::endl;
		ResetBoard();
	}

	// Check vertical rows
	if (EvaluateSpaces(m_Spaces[0], m_Spaces[3], m_Spaces[6]))
	{
		std::cout << m_Spaces[0] << " has won the game!" << std::endl;
		ResetBoard();
	}
	if (EvaluateSpaces(m_Spaces[1], m_Spaces[4], m_Spaces[7]))
	{
		std::cout << m_Spaces[1] << " has won the game!" << std::endl;
		ResetBoard();
	}

	if (EvaluateSpaces(m_Spaces[2], m_Spaces[5], m_Spaces[8]))
	{
		std::cout << m_Spaces[2] << " has won the game!" << std::endl;
		ResetBoard();
	}

	// Check diagonally
	if (EvaluateSpaces(m_Spaces[0], m_Spaces[4], m_Spaces[8]))
	{
		std::cout << m_Spaces[0] << " has won the game!" << std::endl;
		ResetBoard();
	}

	if (EvaluateSpaces(m_Spaces[2], m_Spaces[4], m_Spaces[6]))
	{
		std::cout << m_Spaces[2] << " has won the game!" << std::endl;
		ResetBoard();
	}
}

bool TicTacToeBoard::EvaluateTurn(int t)
{
	if (t == 10)
	{
		m_Message = "Invalid Input. Try again.";
		return false;
	}

	if (m_TurnsTaken >= 9)
	{
		m_Message = "All spaces taken. Resetting board.";
		ResetBoard();
		m_TurnsTaken = 0;
		return false;
	}

	if (m_Spaces[--t] != " ")
	{
		m_Message = "Space already taken. Try again.";
		return false;
	}

	return true;
}

void TicTacToeBoard::ResetBoard()
{
	for (int i = 0; i < (sizeof(m_Spaces) / sizeof(m_Spaces[0])); i++)
	{
		m_Spaces[i] = " ";
	}
}

void TicTacToeBoard::PrintMessage()
{
	std::cout << m_Message << std::endl;
}

void TicTacToeBoard::ClearMessage()
{
	m_Message = "";
}