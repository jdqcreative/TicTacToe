#include "Game.h"

void Game::Run()
{
	while (!gameOver)
	{
		int turn = player.GetInput();

		board.Update(turn, player.GetPlayer());
		board.printBoard();
	}
}