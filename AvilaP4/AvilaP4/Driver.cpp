//Alfonzo Avila		aavila28
// File : Driver.cpp

#include <iostream>
#include <string>

#include "Functions.h"
#include "ArrayAnalyzer.h"

using namespace std;

//TODO:  Good Job.  94/100

int main()
{

	string header = Writeheader();
	string filename;
	cout << header;

	bool bfiles = AskUserForFile();

	if (bfiles)
	{
		getFileNames(filename);

	}
	else
	{
		filename = "Numbers.txt";
	}

	ArrayAnalyzer arr(filename);

	if (arr.IsFileOpened())
	{
		int high, low, total;
		double median, average;

		arr.GetHighLow(high, low);
		total = arr.GetTotal();
		average = arr.GetAverage();
		median = arr.GetMedian();

		cout << "A total of " << total << " integers were read from the file.\n"
			<< "The highest value is " << high << " and the lowest is " << low << ".\n"
			<< "The average is " << average << " and the median value is " << median << ". \n";
		string outputname;

		AskForOutputName(outputname);
		bool write = arr.WriteSummary(outputname);
		if (write)
		{
			cout << "\nThe file was written successfully!";
		}
		else
		{
			cout << "\nThere was an error writing the file.";
		}


		int cont;

		do
		{
			cout << "\nEnter a number you'd like to search for. To exit, enter \"2\"\n";
			int  howmany;
			cin >>cont;
			
			//TODO:  Why don't you check if cont == 2 here, and if so, skip the search.  Otherwise,
			//TODO:  you have to search even when you want to exit  -2
			if (arr.FindValue(cont, howmany))
			{
				cout << "\n" << cont << " was found " << howmany << " times in the array.\n";
			}

			else
			{
				cout << "\n" << cont << " is not in the array.";
			}
			


		} while (cont != 2);



	}

	else
	{
		cout << "\nThere was an error opening the file. The program will now close.";
	}
	



	cout << "\nThanks for using my program! Until next time ;) \n";

	return 0;
}