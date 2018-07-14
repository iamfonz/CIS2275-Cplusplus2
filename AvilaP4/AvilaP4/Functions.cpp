#pragma once
//Alfonzo Avila			aavila28@cnm.edu
//File : Functions.cpp

#include <iostream>
#include <sstream>
#include <string>



#include "Functions.h"

; using namespace std;

string Writeheader()
{
	stringstream ss;
	string header;

	ss << "Alfonzo Avila	aavila28@cnm.edu\n"
		<< "Program 4 : Array Analyzer\n\n"
		<< "The objective of this program is to read in a text file containing integers.\nThe program "
		<< "will sort the numbers and find the median, average, low, and \nhigh value.\n\n";



	header = ss.str();

	return header;

}

bool AskUserForFile()
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

void getFileNames(string &filename)
{
	string file;

	cout << "\nGreat! Enter the file name\n";
	getline(cin, file);
	filename = file;


}

void AskForOutputName(string &filename)
{
	string fname;

	cout << "\nEnter the file name you would like to save as.	";

	getline(cin, fname);
	filename = fname;

}

