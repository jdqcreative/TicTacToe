#pragma once

class Player {

	bool m_PlayerX = true;
	std::string m_Message;

public:

	int GetInput();
	bool GetPlayer();
	void ChangePlayer();

	void PrintMessage();
	void ClearMessage();
};