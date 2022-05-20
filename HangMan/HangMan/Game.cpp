#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h> 
#include <time.h>  
#include "Riddles.h"
#include "HangMan.h"
using namespace std;

int main()
{
	const int size = 1;
	char Guess = ' ';
	std::string Word;
	std::string Empty = "";
	std::string Question;
	std::fstream infile;
	int count = 0;

	int LengthWord;
	Riddles a[size];

	infile.open("RiddAndAns.txt");
	while (count < size)
	{
		getline(infile, Question);
		getline(infile, Word);

		a[count].setContent(Question, Word);

		count++;
	}
	infile.close();

	Title();

	do
	{
		srand(time(0));
		int ran = rand() % count;
		Question = a[ran].MyQuestion();
		Word = a[ran].MyWord();
		LengthWord = Word.length();
		cout << LengthWord << endl;
		Game(Question, Word, Empty, Guess, LengthWord);

		Riddles* temp;
		temp = a;
		DelElement(temp, ran, count);
		--count;
	} while (count > 0);
	std::cout << "Thanks for Playing!" << endl;
	system("pause");
	return 0;
}