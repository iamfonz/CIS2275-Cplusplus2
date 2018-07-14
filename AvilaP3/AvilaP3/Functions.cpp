//Alfonzo Avila			aavila28@cnm.edu
//File : Functions.cpp

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

#include "Functions.h"

; using namespace std;

string Writeheader()
{
	stringstream ss;
	string header;

	ss << "Alfonzo Avila	aavila28@cnm.edu\n"
		<< "Program 1 : Color Swap\n\n"
		<< "The objective of this program is to read in 3 text files. The program\n"
		<< "will find colors in sentences and replace them with a phrase.\n\n";



	header = ss.str();

	return header;

}

bool AskUserForFiles()
{
	string select;
	cout << "Would you like to enter your own file names?\n\n"
		<< "Enter 'y' for YES. Enter 'n' for NO.	";


	getline(cin, select);

	cout << "\n";

	if (select == "y")
	{
		return 1;
	}

	else if (select == "n")
	{
		return 0;
	}

	else
		return 0;


}

void getFileNames(string &color, string &sentences, string &phrases)
{
	string col, sen, phra;

	cout << "\nGreat! Let's start with the Color file.\n";
	cin >> col;

	cout << "\nNext, enter the sentences file.\n";
	cin >> sen;

	cout << "\nFinally, the phrases file.\n";
	cin >> phra;

	color = col;
	sentences = sen;
	phrases = phra;


}

