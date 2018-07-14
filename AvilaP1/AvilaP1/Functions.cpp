//Alfonzo Avila			aavila28@cnm.edu
//File : Functions.cpp

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

#include "Functions.h"

using namespace std;

string Writeheader()
{
	stringstream ss;
	string header;

	ss << "Alfonzo Avila	aavila28@cnm.edu\n"
		<<"Program 1 : Color Swap\n\n"
		<<"The objective of this program is to read in 3 text files. The program\n"
		<<"will find colors in sentences and replace them with a phrase.\n\n";

	

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

//TODO:  Start function names with a capital letter
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


bool ReadColorFile(string colorfile, vector<string> &vcolors)
{
	ifstream input;
	input.open(colorfile);
	//making sure file is open-AA
	if (!input)
	{

		return 0;

	}


	//start reading in file-AA
	else
	{
		int i = 0;

		string color;

		do
		{

			input >> color;
			vcolors.push_back(color);
			++i;

		} while (i < 7);
		return 1;
	}

}

bool ReadSentFile(string sentencefile, string sentence[])
{

	ifstream input;
	string line;
	
	//check file is open
	int i = 0;
	input.open(sentencefile);
	if (!input)
	{
		return 0;
	}


	//read in file -AA
	else
	{ 
		//TODO:  You don't actually know for sure how many sentences there are, so read to end of file  -2
		for (int i = 0; i < 5; ++i)
		{
			getline(input, line);
			
			sentence[i] = line;
			

		}
		return 1;

	}
}


bool ReadPhrasesFile(string phrasefile, vector<string> &phrases)
{

	ifstream input;
	input.open(phrasefile);

	//checking file opened -AA
	if (!input)
	{
		return 0;

	}

	//reading in file-AA
	else
	{
		string line;
		for (int i = 0; i < 7; ++i)
		{

			getline(input, line);
			phrases.push_back(line);
			
		}
		return 1;

	}




}

string WriteOriginals(string sentence[], vector<string> phrases, vector<string> colors)
{
	stringstream ss;
	string originals;

		ss << "***Original Sentences***\n";

		for (int i = 0; i < 5; ++i)
		{
			ss << i+1<<". "<< sentence[i] << "\n";
		}



		ss << "\n***Colors***		***Phrases***\n";

		for (int i = 0; i < 7; ++i)
		{
			
			ss << colors.at(i) << "			"
				<< phrases.at(i) << "\n";

		}




		originals = ss.str();
		cout << originals;
		return originals;
	
}


int SwapColor(int numswapped[], string sentence[], vector<string> &phrases, vector<string> &colors)
{
	int totalswapped = 0;

	// intializing numswapped array to all values being 0
	for (int i = 0; i < 5; ++i)
	{
		numswapped[i] = 0;

	}

	int position;
	string swacolor;

	//outer loop for sentences-AA
	for (int i = 0; i < 5; ++i)

	{
		string str = sentence[i];
		str[0] = tolower(str[0]);
		


		//inner loop to find color in sentence-AA
		for (int j = 0; j < 7; ++j)

		{
			

			position = str.find(colors.at(j), 0);

			//replacing color with phrase and keeping track of how many changes-AA
			if (position >= 0)
			{
				
				swacolor = phrases.at(j);
				int size = colors[j].size();
				str.replace(position, size, phrases.at(j));
				++numswapped[i];

			}
		}
		//making first character upper again and rewriting value in sentence array
		str[0] = toupper(str[0]);
		sentence[i] = str;

		//TODO:  totalSwapped is actually 4 from the default sentences, because  one did not have a swap.  -2
		//TODO:  So check and only increment if that is true
		if(numswapped[i] > 0)
			++totalswapped;

	}


	
	return totalswapped;

}

string WriteResults(int numswapped[], string sentence[], int swapped)
{
	stringstream ss;
	string results;

		ss << "\n***Swapped Phrases***\n";

		for (int i = 0; i < 5; ++i)
		{
			if (numswapped[i] > 0)
			{
				ss << i + 1 << ". " << sentence[i] << "\n";
			}
		}

		ss << "\n";

		
		for (int i = 0; i < 5; ++i)
		{
			if (numswapped[i] > 0)
			{
				string temp;
				if (numswapped[i] > 1)
				{
					temp = "swaps";
				}
				else
				{
					temp = "swap";
				}
				ss << numswapped[i] << " color "<< temp << " in sentence "
					<< i + 1 << ".\n";
			}

		}
		
	


		ss << "\nIn total, " << swapped <<" sentences were swapped and 5 were analyzed.\n";

		results = ss.str();

		cout << results;
		return results;


}

bool WritetoFile(string header, string originals, string results, ofstream &output, string outfile)
{

	//TODO:  This is very neat, but not to spec.
	output.open(outfile);

	if (!output)
	{
		return 0;
	}

	else
	{

		output << header << originals << results;
		output.close();
		return 1;


	}




}