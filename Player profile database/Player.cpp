#include "pch.h"
#include "Player.h"
#include <cstring>


Player::Player()
{

}

Player::Player(char name[30], int score)
{

	strcpy_s(m_name, name);
	m_score = score;
}


Player::~Player()
{

}

void Player::SetName(char newname[30])
{
	strcpy_s(m_name,newname);
}

char* Player::GetName()
{
	return m_name;
}

void Player::SetScore(int score)
{
	m_score = score;
}

int Player::getScore()
{
	return m_score;
}

