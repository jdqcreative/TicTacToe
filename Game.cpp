#include "Game.h"

void Game::Run()
{
	while (!gameOver)
	{
		int turn = player.GetInput();

		if (board.EvaluateTurn(turn))
		{
			player.ChangePlayer();

			board.Update(turn, player.GetPlayer());
			board.printBoard();
			board.CheckForWinner();
		}
		else
		{
			std::cout << "Space is taken / invalid input. Try Again." << std::endl;
		}
	}
}