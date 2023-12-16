#include <iostream>
#include <string>

#include "Player.h"

int Player::GetInput()
{
	int input;

	while (1)
	{
		if (!m_PlayerX) { std::cout << "\n X turn, "; }
		else { std::cout << "\n O turn, "; }

		std::cout << " Enter a number (1-9) or 0 to quit:\n \n";

		std::cin >> input;

		switch(input){
			case 0:
				break;
			case 1:
				break;
			case 2:
				break;
			case 3:
				break;
			case 4:
				break;
			case 5:
				break;
			case 6:
				break;
			case 7:
				break;
			case 8:
				break;
			case 9:
				break;
			default:
				input = 10;

				std::cout << "Please enter a valid input.\n";
				
				std::cin.clear();
				
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				continue;
		}
		break;
	}
	return input;
}

bool Player::GetPlayer()
{
	return m_PlayerX;
}

void Player::ChangePlayer()
{
	m_PlayerX = !m_PlayerX;
}