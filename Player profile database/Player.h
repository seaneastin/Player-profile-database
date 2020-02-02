#pragma once
class Player
{
public:
	Player();
	Player(char name[30], int score);
	~Player();



	void SetName(char newname[30]);
	char* GetName();
	void SetScore(int score);
	int  getScore();

private:
	int m_score;
	char m_name[30];
};


