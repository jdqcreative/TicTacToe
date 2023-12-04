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