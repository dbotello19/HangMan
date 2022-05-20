#include "Riddles.h"
#include <iostream>
#include <string>
using namespace std;


Riddles::Riddles()
{
}

Riddles::Riddles(string q, string a)
{
	this->question = q;
	this->answer = a;
}

Riddles::~Riddles()
{}

void Riddles::setContent(string ques, string ans)
{
	this->question = ques;
	this->answer = ans;

}

void Riddles::Display()
{
	cout << question << endl;
	cout << answer << endl;
}

string Riddles::MyQuestion()
{
	return question;
}

string Riddles::MyWord()
{
	return answer;
}