#pragma once
#include <iostream>
#include <string>
using namespace std;

class Riddles
{
public:
	Riddles();
	Riddles(string question, string answer);
	void setContent(string ques, string ans);
	void Display();
	string MyQuestion();
	string MyWord();
	~Riddles();
private:
	string question;
	string answer;
};