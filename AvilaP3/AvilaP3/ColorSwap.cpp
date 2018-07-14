//Alfonzo Avila			aavila28@cnm.edu
//File :ColorSwap.cpp


#include <iostream>
#include "ColorSwap.h"



ColorSwap::ColorSwap()
{
	//initialize anything left such as vectors and sentence array
	vector<string> vcolors = {};
	vector<string> vphrases = {};

}

void ColorSwap::ReadColors()
{
	//same code as p1 for read. only difference, set bool(bRead[0])
	ifstream input;
	input.open(colorfile);
	//making sure file is open-AA
	if (!input)
	{
		bRead[0] = false;
	}

	//start reading in file-AA
	else
	{		
		string color, prev;

		for (int i = 0; i < MAX; ++i)
		{

			getline(input, color);

			if (color == prev)
			{
				continue;
			}
			else
			{
				vcolors.push_back(color);
				
			}
			prev = color;

		}
		bRead[0]= true;
	}
}

void ColorSwap::ReadSentences()
{
	ifstream input;
	string line;

	//check file is open
	int i = 0;
	input.open(sentencefile);
	if (!input)
	{
		bRead[1]= 0;
	}


	//read in file -AA
	else
	{
		string prev = "";
		for (int i = 0; i < MAX; ++i)
		{
			getline(input, line);
			

			if (line == prev)
			{
				continue;
			}

			else
			{
				sentences[i] = line;
				++totalsentences;
			}
			prev = line;

		}
		bRead[1]= 1;

	}

}


void ColorSwap::ReadPhrases()
{
	ifstream input;
	input.open(swapphrasesfile);

	//checking file opened -AA
	if (!input)
	{
		bRead[2]= 0;

	}

	//reading in file-AA
	else
	{
		string line, prev;
		for (int i = 0; i < MAX; ++i)
		{

			getline(input, line);

			if (line == prev)
			{
				continue;

			}

			else
			{
				vphrases.push_back(line);

			}
			prev = line;
			
		}
		bRead[2] = 1;
	}

}

void ColorSwap::WriteOriginals()
{
	stringstream ss;
	

	ss << "***Original Sentences***\n";

	for (int i = 0; i < totalsentences; ++i)
	{
		ss << i + 1 << ". " << sentences[i] << "\n";
	}



	ss << "\n***Colors***		***Phrases***\n";
	int csize = vcolors.size();
	int psize = vphrases.size();
	for (int i = 0; i < csize; ++i)
	{

		ss << vcolors.at(i) << "			"

		
			<< vphrases.at(i) << "\n";
	

	}




	originalresults = ss.str();
	
	

}

void ColorSwap::SwapColors()
{

	int position;
	string swacolor;

	//outer loop for sentences-AA
	for (int i = 0; i < totalsentences; ++i)

	{
		//intermediary variable to hold sentence
		string str = sentences[i];
		//lowercase all to find color
		str[0] = tolower(str[0]);

		int csize = vcolors.size();
		int psize = vphrases.size();


		//inner loop to find color in sentence-AA
		for (int j = 0; j < csize; ++j)

		{


			position = str.find(vcolors.at(j), 0);

			//replacing color with phrase and keeping track of how many changes-AA
			if (position >= 0)
			{

				swacolor = vphrases.at(j);
				int size = vcolors[j].size();
				str.replace(position, size, vphrases.at(j));
				++numswapped[i];

			}
			else continue;
		}
		//making first character upper again and rewriting value in sentence array
		str[0] = toupper(str[0]);
		sentences[i] = str;

		if (numswapped[i] > 0)
		{
			++sentenceswapped;
		}
		else continue;

		

	}

}


void ColorSwap::WriteResults()
{
	stringstream ss;
	

	ss << "\n***Swapped Phrases***\n";

	for (int i = 0; i < sentenceswapped; ++i)
	{
		if (numswapped[i] > 0)
		{
			ss << i + 1 << ". " << sentences[i] << "\n";
		}
	}

	ss << "\n";

	//loop through sentences to show 
	for (int i = 0; i < totalsentences; ++i)
	{
		if (numswapped[i] > 0)
		{
			//check to change swap singular or plural for output -AA
			string temp;
			if (numswapped[i] == 1)
			{
				temp = "swap";
			}
			else
			{
				temp = "swaps";
			}

			//writes out swaps.
			ss << numswapped[i] << " color " << temp << " in sentence "
				<< i + 1 << ".\n";
		}

	}

	ss << "\nIn total, " << sentenceswapped << " sentences were swapped and " <<totalsentences<<" were analyzed.\n";

	finalresults = ss.str();

	

}


bool ColorSwap::ReadFiles(string cfile, string sfile, string spfile)
{
	//setting files names -fonz
	colorfile = cfile;
	sentencefile = sfile;
	swapphrasesfile = spfile;

	//calling file reading methods
	ReadColors();
	ReadSentences();
	ReadPhrases();




	//checking all read before proceeding.
	if ((bRead[0] == 1) & (bRead[1] == 1) & (bRead[2] == 1))
	{
		WriteOriginals();
		SwapColors();
		WriteResults();
		return true;

	}

	else
	{
		return false;
	}




	
}

bool ColorSwap::WriteFile(string outputfile)
{
	outputFile = outputfile;
	ofstream output;
	output.open(outputfile);


	if (!output)
	{
		return 0;
	}


	else
	{
		output << originalresults << finalresults;
		output.close();
		return 1;

	}



}