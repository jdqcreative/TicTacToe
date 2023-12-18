#include <iostream>
#include <string>

#include "Player.h"

int Player::GetInput()
{
	int input;

	while (1)
	{
		if (!m_PlayerX) { std::cout << "X turn, "; }
		else { std::cout << "O turn, "; }

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

				std::cin.clear();
				
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				return input = 10;
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

void Player::PrintMessage()
{
	std::cout << m_Message << std::endl;
}

void Player::ClearMessage()
{
	m_Message = "";
}