//Alfonzo Avila		aavila28@cnm.edu
//File : ArrayAnalyzer.cpp
#include <fstream>
#include <sstream>

#include "ArrayAnalyzer.h"
#include "P3_TemplateSort.h"

using namespace std;

ArrayAnalyzer::ArrayAnalyzer()
{
	//TODO:  Initialize the variables that were not initialized in the .h file  -2
}

ArrayAnalyzer::ArrayAnalyzer(string file)
{
	//TODO:  Initialize the variables that were not initialized in the .h file  -2
	filename = file;
	ReadFile();




}

void ArrayAnalyzer::SetFile(string file)
{
	filename = file;
	ReadFile();

}

void ArrayAnalyzer::ReadFile()
{
	///read file code then set bool if read or not
	//same code as p1 for read. only difference, set bool(bRead[0])

	ifstream input;
	input.open(filename);
	if (!input)
	{
		bOpen = false;
	}

	else
	{
		for (int i = 0; i < SIZE; ++i)
		{

			if (input.eof()) break;
			else
			{
				int x;
				input >> x;
				n[i] = x;
				++total;
			}

		}
		SortArray();
		Calculate();
		bOpen = true;

	}


}
void ArrayAnalyzer::SortArray()
{
	TemplateSort<int> tsort;
	tsort.shellSort(n, total);


}

void ArrayAnalyzer::Calculate()
{
	double sum = 0;
	//calculate average-fonz
	for (int i = 0; i < total; ++i)
	{
		sum += n[i];
	}

	average = sum / total;

	//calculate median -fonz

	if (total % 2 == 0)
	{
		median = (n[total / 2] + n[(total / 2) + 1]) / 2.0;
	}
	else
	{
		median = n[(total / 2) + 1];
	}

	// high and low values -fonz
	low = n[0];
	high = n[total - 1];
}

int ArrayAnalyzer::GetTotal()
{
	return total;

}

double ArrayAnalyzer::GetAverage()
{
	return average;

}

double ArrayAnalyzer::GetMedian()
{
	return median;

}
void ArrayAnalyzer::GetHighLow(int &rhigh, int &rlow)
{
	rhigh = high;
	rlow = low;
}

bool ArrayAnalyzer::IsFileOpened()
{
	return bOpen;

}

bool ArrayAnalyzer::WriteSummary(string fileout)
{
	ofstream output;
	output.open(fileout);
	if (!output)
	{
		return false;

	}
	else
	{
		string summary;
		stringstream ss;
		ss << "Alfonzo Avila	aavila28@cnm.edu\n"
			<< "Program 4 : Array Analyzer\n\n"
			<< "The objective of this program is to read in a text file containing integers.\nThe program "
			<< "will sort the numbers and find the median, average, low, and high value.\n\n"
			<< "A total of " << total << " integers were read from the file.\n"
			<< "The highest value is " << high << " and the lowest is " << low << ".\n"
			<< "The average is " << average << " and the median value is " << median << ". \n";

		summary = ss.str();
		output << summary;


		return true;
	}



}

bool ArrayAnalyzer::FindValue(int value, int &howmany)
{
	int counter = 0;



	for (int i = 0; i < total; ++i)
	{
		if (n[i] == value)
		{
			++counter;
			howmany = counter;

		}

	}

	if (counter > 0)
	{
		return 1;

	}

	else
	{
		return 0;
	}
}