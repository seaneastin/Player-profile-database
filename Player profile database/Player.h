#pragma once
class Player
{
public:
	Player();
	Player(char name, int score);
	~Player();
	int Score;
	char Name;

	char GetName();

};


