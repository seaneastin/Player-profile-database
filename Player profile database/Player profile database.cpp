// Player profile database.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <fstream>
#include <string>
#include "player.h"



Player players[5];
bool running = true; //keeps the program from closing untill user says to close
using namespace std;
int input = 0;
char tempname;


void save()
{
	//std::ofstream out;
	//out.open("database.dat", ofstream::out | ofstream::binary);
	//out.write(players[0].GetName, 30);
	//out.close();


}


void addplayer()
{
	cin >> tempname;
	Player Sean(tempname, 30);
}



int main()
{


	std::cout << "Player Database app" << endl;

	while (running)
	{
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
			addplayer();
		case 2:


		case 3:


		case 4:


		case 5:
			save();
			break;
		case 6:
			running = false;
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
