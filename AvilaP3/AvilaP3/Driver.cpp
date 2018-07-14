//Alfonzo Avila		aavila28@cnm.edu
//File: Driver.cpp

#include <iostream>
#include "ColorSwap.h"
#include "Functions.h"

; using namespace std;



int main()
{
	string header;
	header = Writeheader();
	cout << header;
	string colorfile, sentencefile, phrasesfile, results, outputfile;


	bool enterfiles = AskUserForFiles();


	if (enterfiles)
	{
		getFileNames(colorfile, sentencefile, phrasesfile);

	}
	else
	{
		colorfile = "Colors.txt";
		sentencefile = "Sentences.txt";
		phrasesfile = "SwapPhrases.txt";
	}





	ColorSwap swap;


	bool filesread=swap.ReadFiles(colorfile, sentencefile, phrasesfile);

	if (filesread == false)
	{
		cout << "\nThere was an error reading in a file.\n";
		exit(1);

	}
	

	else
	{
		results=swap.GetResults();
		cout << results;
	
	}
	

	cout << "\nEnter the name of the output file.	";
	getline(cin, outputfile);


	bool filewrite = swap.WriteFile(outputfile);

	if (filewrite)
	{
		cout << "\nThe file has been written successfully!\n";
	}

	else
	{
		cout << "\nThere was an error writing to the file.\n";
	}



	cout << "\nThanks for using my program! Until next time! :D\n\n";

	return 0;





}