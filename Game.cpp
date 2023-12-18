#include "Game.h"

void Game::Run()
{
	while (!gameOver)
	{
		int turn = player.GetInput();

		system("CLS");

		if (board.EvaluateTurn(turn))
		{
			player.ChangePlayer();

			board.Update(turn, player.GetPlayer());
			board.printBoard();
			board.CheckForWinner();

			board.PrintMessage();
			player.PrintMessage();
		}
		else
		{
			board.printBoard();

			board.PrintMessage();
			player.PrintMessage();
		}

		board.ClearMessage();
		player.ClearMessage();
	}
}

void Game::PrintMessage()
{
	std::cout << m_Message << std::endl;
}

void Game::ClearMessage()
{
	m_Message = "";
}

void Game::Reset()
{

}