//file ArrayAnalyzer.h
//define the class, ArrayAnalyzer
#ifndef Array_Analyzer_H
#define Array_Analyzer_H

#include <string>
#include "P3_TemplateSort.h"

using namespace std;

const int SIZE = 1000;

class ArrayAnalyzer
{
private:
	int n[SIZE];
	int total=0;
	double average=0, median=0;
	string filename;			//input file
	bool bOpen;				//true if file is opened
							//false if file is not opened

	int high, low;			//data's high, low values

	void ReadFile();			//read the data, if possible
							//set the bOK flag, too
	void SortArray();	//sorts the array, low to high, uses P3_TemplateSort 
	void Calculate();
					// YOU SHOULD ALSO HAVE PRIVATE CALCULATE FUNCTIONS TO TAKE CARE OF CALCULATING
					// THE AVERAGE AND MEDIAN VALUES!  THESE ARE CALLED FROM WITHIN THE CLASS. 

public:
	ArrayAnalyzer();		//constructor
							//job is to initial class data

	explicit ArrayAnalyzer(string filein);	//overloaded constructor, is passed input file.

	void SetFile(string filein);	//pass in file that contains the 
									//numbers, must be 1000 or less

	bool IsFileOpened();		//returns true if file opened and data read
								//false if file not opened
								//programmer should check this before calling other functions!

	int GetTotal();			//returns total number of values read
	double GetMedian();
	double GetAverage();
	void GetHighLow(int &rHigh, int &rLow);


	bool FindValue(int value, int &howMany);	//returns true if found, false if not.
												//howMany is total, 0 if  not found        

	bool WriteSummary(string fileout);	//writes the header, input file name, 
										// total, average, median, high, low

};

#endif