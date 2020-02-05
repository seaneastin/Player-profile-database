// Player profile database.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <fstream>
#include <string>
#include "player.h"



Player* players;
bool running = true; //keeps the program from closing until user says to close
using namespace std;
int input = 0;
char tempname[30];
int tempscore;
int playeramount = 0;
int binarysearchoutput = 0;

void sort() //bubblesort
{
	Player temp;
	bool sorted = false;
	while (!sorted)
	{
		sorted = true;
		for (int i = 0; i < playeramount - 1; i++)
		{
			if (strcmp(players[i].GetName(), players[i + 1].GetName()) > 0)
			{
				temp = players[i];
				players[i] = players[i + 1];
				players[i + 1] = temp;
				sorted = false;

				for (int i = 0; i < playeramount; i++)
				{
					cout << i << ": " << players[i].GetName() << " " << players[i].getScore() << endl;

				}

				system("pause");
			}

		}
	}
}


void editplayer()
{
	cin.clear();
	cin.ignore(cin.rdbuf()->in_avail());
	cout << "what would you like to edit" << endl;
	cout << "Name: " << players[binarysearchoutput].GetName() << endl;
	cout << "Score: " << players[binarysearchoutput].getScore() << endl;
	cout << "1. change name" << endl;
	cout << "2. change score" << endl;
	cout << "3. go back" << endl;
	cin >> input;
	cin.clear();
	cin.ignore(cin.rdbuf()->in_avail());
	switch (input)
	{
	case 1:
		cout << "enter a new name" << endl;
		cin >> tempname;
		players[binarysearchoutput].SetName(tempname);
		sort();
		break;
	case 2:
		cout << "enter a new score" << endl;
		cin >> input;
		players[binarysearchoutput].SetScore(input);
		break;
	case 3:
		break;

	}
}


bool binarysearch(char name[30])
{
	int Left = 0;
	int Right = playeramount - 1;
	int Middle = 0;
	while (Left <= Right)
	{
		Middle = (Left + Right) / 2;
		if (strcmp(players[Middle].GetName() , name) == 0)
		{
			binarysearchoutput = Middle;
			return true;
		}

		if (strcmp(players[Middle].GetName() , name) < 0 )
		{
			Left = Middle + 1;
		}

		if (strcmp(players[Middle].GetName() , name) > 0)
		{
			Right = Middle - 1;
		}

	}

	return false;
}





void load()
{

}


void save()
{
	std::ofstream out;
	out.open("database.dat", ofstream::out | ofstream::binary);
	for (int i = 0; i < playeramount; i++)
	{
		out.write(players[0].GetName(), 30);
	}

	out.close();


}


void removeplayer(int index)
{
	Player* tempPlayers = new Player[playeramount - 1];
	int newPosition = 0;
	for (int i = 0; i < playeramount; i++)
	{
		if (i != index)
		{
			tempPlayers[newPosition] = players[i];
			newPosition++;
		}
	}
	playeramount--;
	delete[] players;
	players = new Player[playeramount];
	for (int i = 0; i < playeramount; i++)
	{
		players[i] = tempPlayers[i];
	}
	delete[] tempPlayers;
}

void addplayer(char name[30], int score)
{
	Player* tempPlayers = new Player[playeramount + 1];
	for (int i = 0; i < playeramount; i++)
	{
		tempPlayers[i] = players[i];
	}

	tempPlayers[playeramount].SetName(name);
	tempPlayers[playeramount].SetScore(score);
	playeramount++;

	

	delete[] players;
	players = new Player[playeramount];


	for (int i = 0; i < playeramount; i++)
	{
		players[i] = tempPlayers[i];
	}
	
	delete[] tempPlayers;

	
	
	sort();

}



int main()
{


	std::cout << "Player Database app" << endl;

	while (running)
	{
		cin.clear();
		cin.ignore(cin.rdbuf()->in_avail());
		system("cls");
		std::cout << "Player Database app" << endl;

		std::cout << "please choose an option by typing the number" << endl;
		//std::cout << "this program will save all progress when closed using the menu do not hit x on the program or you will lose all your progr";

		cout << "1. Add Player" << endl;
		cout << "2. Remove player" << endl;
		cout << "3. Edit Player" << endl;
		cout << "4. load" << endl;
		cout << "5. save" << endl;
		cout << "6. quit" << endl;
		cout << "7: output player info test" << endl;

		cin >> input;

		switch (input)
		{
		case 1:
			cout << "type the players name" << endl;
			
			cin >> tempname;
			if (!binarysearch(tempname))
			{
				cout << "type the players score" << endl;
				cin >> tempscore;
				addplayer(tempname, tempscore);
				cout << "success. added a new player" << endl;
			}
			else
			{
				cout << "there is already someone with that name" << endl;
			}




			system("pause");
			break;
		case 2:
			if (playeramount == 0)
			{
				cout << "there are no players created" << endl;
				system("pause");
				break;
			}
			cout << "which player would you like to remove" << endl;
			for (int i = 0; i < playeramount; i++)
			{
				cout << i << ": " << players[i].GetName() << endl;
			}
			cin >> input;



			if (input > playeramount)
			{
				cout << "this is not a valid input" << endl;
				system("pause");
			}
			else
			{

				removeplayer(input);
			}
			cout << "success. removed a player" << endl;
			system("pause");

	
			break;
		case 3:
			if (playeramount == 0)
			{
				cout << "there are no players created" << endl;
				system("pause");
				break;
			}
			else
			{
				cout << "please type in the name of the player you would like to edit" << endl;
				cin >> tempname;
				if (binarysearch(tempname))
				{
					editplayer();
				}
				else
				{
					cout << "could not find the person specified" << endl;
				}
				system("pause");
			}
			break;
		case 4:
			break;
		case 5:
			save();
			break;
		case 6:
			running = false;
			break;
		case 7:
			if (playeramount == 0)
			{
				cout << "there are no players created" << endl;
				system("pause");
				break;
			}
			for (int i = 0; i < playeramount; i++)
			{
				cout << i << ": " << players[i].GetName() << " " << players[i].getScore() << endl;

			}

			system("pause");
			break;
		}







	}




}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
