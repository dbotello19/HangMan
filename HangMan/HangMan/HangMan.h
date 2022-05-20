#pragma once
#include <iostream>
#include <string>
#include <ctype.h>
#include "Riddles.h"

using namespace std;


string MakeEmpty(std::string Empty, std::string Word, int LengthWord)
{
	for (int n = 0; n < LengthWord; n++)
	{
		if (n % 2 == 0)
		{
			Empty += '_';
		}
		else
		{
			Empty += ' ';
		}
	}
	return Empty;
}

//first Display
void Tree(std::string question, std::string Empty)
{

	system("cls");
	std::cout << "                       / /                                                                              " << std::endl;
	std::cout << "    |      |__________/ /                                                                               " << std::endl;
	std::cout << "    |      |_________|_/                                                                                " << std::endl;
	std::cout << "    |  ()  |         |                                                                                  " << std::endl;
	std::cout << "    |      |                                                                                            " << std::endl;
	std::cout << "    |      |                                                                                            " << std::endl;
	std::cout << "   /        \\                                                                                          " << std::endl;
	std::cout << "  /          \\                                                                                         " << std::endl;
	std::cout << std::endl;
	std::cout << "                                " << Empty << std::endl << std::endl << std::endl;
	std::cout << question << std::endl;
	std::cout << "Enter a Letter..." << std::endl;





}

//Second Display
void HangHead(std::string question, std::string Empty)
{
	system("cls");
	std::cout << "                       / /                                                                              " << std::endl;
	std::cout << "    |      |__________/ /                                                                               " << std::endl;
	std::cout << "    |      |_________|_/                                                                                " << std::endl;
	std::cout << "    |  ()  |         |                                                                                  " << std::endl;
	std::cout << "    |      |         O                                                                                  " << std::endl;
	std::cout << "    |      |                                                                                            " << std::endl;
	std::cout << "   /        \\                                                                                          " << std::endl;
	std::cout << "  /          \\                                                                                         " << std::endl;
	std::cout << std::endl;
	std::cout << "                                " << Empty << std::endl << std::endl << std::endl;
	std::cout << question << std::endl;
	std::cout << "Enter a Letter..." << std::endl;
}

//Third Display
void HangTorso(std::string question, std::string Empty)
{
	system("cls");
	std::cout << "                       / /                                                                              " << std::endl;
	std::cout << "    |      |__________/ /                                                                               " << std::endl;
	std::cout << "    |      |_________|_/                                                                                " << std::endl;
	std::cout << "    |  ()  |         |                                                                                  " << std::endl;
	std::cout << "    |      |         O                                                                                  " << std::endl;
	std::cout << "    |      |         |                                                                                  " << std::endl;
	std::cout << "   /        \\                                                                                          " << std::endl;
	std::cout << "  /          \\                                                                                         " << std::endl;
	std::cout << std::endl;
	std::cout << "                                " << Empty << std::endl << std::endl << std::endl;
	std::cout << question << std::endl;
	std::cout << "Enter a Letter..." << std::endl;
}

//Fourth Display
void HangLeftArm(std::string question, std::string Empty)
{
	system("cls");
	std::cout << "                       / /                                                                              " << std::endl;
	std::cout << "    |      |__________/ /                                                                               " << std::endl;
	std::cout << "    |      |_________|_/                                                                                " << std::endl;
	std::cout << "    |  ()  |         |                                                                                  " << std::endl;
	std::cout << "    |      |         O                                                                                  " << std::endl;
	std::cout << "    |      |        /|                                                                                  " << std::endl;
	std::cout << "   /        \\                                                                                          " << std::endl;
	std::cout << "  /          \\                                                                                         " << std::endl;
	std::cout << std::endl;
	std::cout << "                                " << Empty << std::endl << std::endl << std::endl;
	std::cout << question << std::endl;
	std::cout << "Enter a Letter..." << std::endl;
}

//Fifth Display
void HangRightArm(std::string question, std::string Empty)
{
	system("cls");
	std::cout << "                       / /                                                                              " << std::endl;
	std::cout << "    |      |__________/ /                                                                               " << std::endl;
	std::cout << "    |      |_________|_/                                                                                " << std::endl;
	std::cout << "    |  ()  |         |                                                                                  " << std::endl;
	std::cout << "    |      |         O                                                                                  " << std::endl;
	std::cout << "    |      |        /|\\                                                                                " << std::endl;
	std::cout << "   /        \\                                                                                          " << std::endl;
	std::cout << "  /          \\                                                                                         " << std::endl;
	std::cout << std::endl;
	std::cout << "                                " << Empty << std::endl << std::endl << std::endl;
	std::cout << question << std::endl;
	std::cout << "Enter a Letter..." << std::endl;
}

//Sixth Display
void HangLeftLeg(std::string question, std::string Empty)
{
	system("cls");
	std::cout << "                       / /                                                                              " << std::endl;
	std::cout << "    |      |__________/ /                                                                               " << std::endl;
	std::cout << "    |      |_________|_/                                                                                " << std::endl;
	std::cout << "    |  ()  |         |                                                                                  " << std::endl;
	std::cout << "    |      |         O                                                                                  " << std::endl;
	std::cout << "    |      |        /|\\                                                                                " << std::endl;
	std::cout << "   /        \\       /                                                                                   " << std::endl;
	std::cout << "  /          \\                                                                                         " << std::endl;
	std::cout << std::endl;
	std::cout << "                                " << Empty << std::endl << std::endl << std::endl;
	std::cout << question << std::endl;
	std::cout << "Enter a Letter..." << std::endl;
}

//Seventh Display
void HangRightLeg(std::string question, std::string Empty)
{
	system("cls");
	std::cout << "                       / /                                                                              " << std::endl;
	std::cout << "    |      |__________/ /                                                                               " << std::endl;
	std::cout << "    |      |_________|_/                                                                                " << std::endl;
	std::cout << "    |  ()  |         |                                                                                  " << std::endl;
	std::cout << "    |      |         O                                                                                  " << std::endl;
	std::cout << "    |      |        /|\\                                                                                " << std::endl;
	std::cout << "   /        \\       / \\                                                                                " << std::endl;
	std::cout << "  /          \\                                                                                         " << std::endl;
	std::cout << std::endl;
	std::cout << "                                " << Empty << std::endl << std::endl << std::endl;
	std::cout << question << std::endl;

}

//HANGMAN
void Title()
{
	std::cout << std::endl;
	std::cout << "                      ____                         __________   ___        ___         ____                    " << std::endl;
	std::cout << "| |        | |       / /\\ \\       | \\ \\     | |   / _________| |   \\      /   |       / /\\ \\       | \\ \\     | |       " << std::endl;
	std::cout << "| |        | |      / /  \\ \\      | |\\ \\    | |  / /           | |\\ \\    / /| |      / /  \\ \\      | |\\ \\    | |      " << std::endl;
	std::cout << "| |________| |     / /____\\ \\     | | \\ \\   | | | |   _______  | | \\ \\  / / | |     / /____\\ \\     | | \\ \\   | |    " << std::endl;
	std::cout << "|  ________  |    / /______\\ \\    | |  \\ \\  | | | |  |______ | | |  \\_\\/_/  | |    / /______\\ \\    | |  \\ \\  | |    " << std::endl;
	std::cout << "| |        | |   / /        \\ \\   | |   \\ \\ | | | |        | | | |          | |   / /        \\ \\   | |   \\ \\ | |    " << std::endl;
	std::cout << "| |        | |  / /          \\ \\  | |    \\ \\| | | |________| | | |          | |  / /          \\ \\  | |    \\ \\| |    " << std::endl;
	std::cout << "| |        | | / /            \\ \\ | |     \\ | | |____________| | |          | | / /            \\ \\ | |     \\ | |    " << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "Click Enter to start...";
	std::cin.get();
}

//End when you Win
void End1()
{
	int choice1;
	std::cout << "You Win!!!" << std::endl;
	cout << "Press (1) ----------- to Continue." << endl;
	cout << "Press (0) ----------- to Exit" << endl;


	do {
		cin >> choice1;
		if (choice1 == 1)
		{

		}
		else if (choice1 == 0)
		{
			exit(3);
		}
		else
			cout << "input 1 or 0 only." << endl;
	} while (choice1 != 1);
	system("cls");

}

//End when you Lose
void End2(std::string question, std::string Empty)
{
	HangRightLeg(question, Empty);
	int choice2;
	std::cout << "You Lose" << std::endl;



	do
	{
		cout << "Press (1) ----------- to Continue." << endl;
		cout << "Press (0) ----------- to Exit" << endl;
		cin >> choice2;
		if (choice2 == 1)
		{

		}
		else if (choice2 == 0)
		{
			exit(3);
		}
		else
			cout << "input 1 or 0 only." << endl;
	} while (choice2 != 1);
	system("cls");
}

void Exit()
{
	exit(0);
}

//Checks if you have Won
void Check(std::string Word, std::string Empty, bool& GuessRight)
{
	GuessRight = true;
	for (int j = 0; j < 11; j++)
	{
		if (Word[j] != Empty[j])
		{
			GuessRight = false;
		}
	}
}

//Main 
void Game(std::string question, std::string Word, std::string Empty, char Guess, const int LengthWord)
{

	Empty = MakeEmpty(Empty, Word, LengthWord);
	bool GuessRight = false;
	bool GuessWrong = false;
	bool ignore = true;
	Tree(question, Empty);

	while (GuessWrong == false)
	{
		if (!ignore)
			cin.ignore(10000, '\n');
		ignore = false;
		cin >> Guess;
		GuessWrong = true;
		int i = 0;

		while (Word[i] != NULL)
		{
			if (toupper(Guess) == Word[i])
			{
				GuessWrong = false;
				Empty[i] = toupper(Guess);
				Tree(question, Empty);
			}
			i++;
		}
		Check(Word, Empty, GuessRight);
		if (GuessRight)
		{
			cin.get();
			End1();
			return;

		}
	}

	HangHead(question, Empty);
	GuessWrong = false;


	while (GuessWrong == false)
	{
		cin.ignore(10000, '\n');
		std::cin >> Guess;
		GuessWrong = true;
		int i = 0;

		while (Word[i] != NULL)
		{
			if (toupper(Guess) == Word[i])
			{
				GuessWrong = false;
				Empty[i] = toupper(Guess);
				HangHead(question, Empty);
			}
			i++;
		}
		Check(Word, Empty, GuessRight);
		if (GuessRight)
		{
			cin.get();
			End1();
			return;

		}
	}

	HangTorso(question, Empty);
	GuessWrong = false;


	while (GuessWrong == false)
	{
		cin.ignore(10000, '\n');
		std::cin >> Guess;
		GuessWrong = true;
		int i = 0;

		while (Word[i] != NULL)
		{
			if (toupper(Guess) == Word[i])
			{
				GuessWrong = false;
				Empty[i] = toupper(Guess);
				HangTorso(question, Empty);
			}
			i++;
		}
		Check(Word, Empty, GuessRight);
		if (GuessRight)
		{
			cin.get();
			End1();
			return;

		}
	}

	HangLeftArm(question, Empty);
	GuessWrong = false;


	while (GuessWrong == false)
	{
		cin.ignore(10000, '\n');
		std::cin >> Guess;
		GuessWrong = true;
		int i = 0;

		while (Word[i] != NULL)
		{
			if (toupper(Guess) == Word[i])
			{
				GuessWrong = false;
				Empty[i] = toupper(Guess);
				HangLeftArm(question, Empty);
			}
			i++;
		}
		Check(Word, Empty, GuessRight);
		if (GuessRight)
		{
			cin.get();
			End1();
			return;

		}
	}

	HangRightArm(question, Empty);
	GuessWrong = false;


	while (GuessWrong == false)
	{
		cin.ignore(10000, '\n');
		std::cin >> Guess;
		GuessWrong = true;
		int i = 0;

		while (Word[i] != NULL)
		{
			if (toupper(Guess) == Word[i])
			{
				GuessWrong = false;
				Empty[i] = toupper(Guess);
				HangRightArm(question, Empty);
			}
			i++;
		}
		Check(Word, Empty, GuessRight);
		if (GuessRight)
		{
			cin.get();
			End1();
			return;

		}
	}

	HangLeftLeg(question, Empty);
	GuessWrong = false;

	while (GuessWrong == false)
	{
		cin.ignore(10000, '\n');
		std::cin >> Guess;
		GuessWrong = true;
		int i = 0;

		while (Word[i] != NULL)
		{
			if (toupper(Guess) == Word[i])
			{
				GuessWrong = false;
				Empty[i] = toupper(Guess);
				HangLeftLeg(question, Empty);
			}
			i++;
		}
		Check(Word, Empty, GuessRight);
		if (GuessRight)
		{
			cin.get();
			End1();
			return;

		}
		else
		{
			cin.get();
			End2(question, Empty);
			return;
		}
	}
}



void DelElement(Riddles temp[], int ran, int count)
{
	for (int x = 0; x < count; ++x)
	{
		if (x == ran)
		{
			for (int y = x; y < count - 1; y++)
			{
				if (y + 1 != 6)
					temp[y] = temp[y + 1];

			}
		}
	}
}
