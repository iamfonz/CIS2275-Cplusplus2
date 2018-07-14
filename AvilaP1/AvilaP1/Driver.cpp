// Alfonzo Avila		aavila28@cnm.edu
//File: Driver.cpp

#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include "Functions.h"

using namespace std;

//TODO:  Re-checked in 2/9/2016

//TODO:  Good job.  94/100


int main()
{
	int numswapped[10];
	vector<string> vcolors;
	vector<string> vphrases;
	string sentences[5];
	


	string colorfile, sentencefile, phrasesfile;
	string outfile;
	ofstream output;


	//strings for pieces of output file-AA
	string header, originals, results;

	header = Writeheader();
	cout << header;

	bool enterfiles = AskUserForFiles();
	bool sentRead, phraRead;

	bool filewrite;

	int swapped;

	
	


	if (enterfiles == false)
	{
		colorfile = "Colors.txt";
		sentencefile = "Sentences.txt";
		phrasesfile = "SwapPhrases.txt";
		
	}
	else 
	{
		getFileNames(colorfile, sentencefile, phrasesfile);
	
	}

	bool colorRead = ReadColorFile(colorfile, vcolors);

	if (colorRead == false)
	{
		cout << "\nError reading colors file.\n";

		//TODO:  Let's not use exit(1) here.  It's pretty harsh.  We can gracefully exit from out program.
		//TODO:  One way is to look at colorRead == true and continuing when all three reads are true.  
		//TODO:  Your program will continue iunside the last conditin.  There will be an else at the end of the
		//TODO:  program, which will say cout << "\nError reading colors file.\n";  and then goodbye.
		
		 exit(1);
	}
	else
	{
		
		sentRead= ReadSentFile(sentencefile, sentences);

	}

	if (sentRead == false)
	{
		cout << "\nError reading sentences file.\n";
		exit(1);

	}
	else
	{
		phraRead = ReadPhrasesFile(phrasesfile, vphrases);

	}

	if (phraRead == false)
	{
		cout << "\nError reading phrases file.\n";
		exit(1);
	}

	else 
	{
		originals = WriteOriginals(sentences, vphrases, vcolors);

		swapped = SwapColor(numswapped, sentences, vphrases, vcolors);

		results = WriteResults(numswapped, sentences, swapped);

	}
	
	cout << "\nPlease enter a name for the output text file.	";
	getline(cin, outfile);

	//TODO:  Ok, we were going to open the filestream here in main and pass the filestream object
	//TODO:  to the two Write functions.  -2
	filewrite = WritetoFile(header, originals, results, output, outfile);

	if (filewrite == false)
	{
		cout << "\nThere was an error writing the file.\n";
		exit(1);

	}

	else
	{
		cout << "\nThe file write was succesful.\n";
	}

	cout << "\n\nThanks for using my program! Until next time ;D\n";

	return 0;


}
