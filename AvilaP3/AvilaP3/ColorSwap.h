


#ifndef Color_Swap_H
#define Color_Swap_H

#include <string>
#include <vector>
#include <fstream>
#include <sstream>

using namespace std;

const int MAX = 10;


class ColorSwap
{
private:
	int numswapped[MAX] = {};
	vector<string> vcolors; //
	string sentences[MAX] = {};
	vector<string> vphrases;//
	int totalsentences = 0;
	int sentenceswapped = 0;
	string originalresults = "", finalresults = "";
	//filenames
	string colorfile = "Colors.txt";
	string sentencefile = "Sentences.txt";
	string swapphrasesfile = "SwapPhrases.txt";
	string outputFile = "Out.txt";

	bool bRead[3] = {};


	void ReadColors();
	void ReadSentences();
	void ReadPhrases();

	//Creates a string with the original information.
	void WriteOriginals();

	//Creates a string with the final information.
	void WriteResults();

	//Checks the sentences for the colors, and performs the swaps
	void SwapColors();
public:
	//Default constructor, initialize variables
	ColorSwap();

	//Calls the three Read methods, checks that they were successful, assigns the     
	//correct filename into the class variables and if all went well, calls 
	// WriteOriginals(), SwapColors() and WriteResults().
	bool ReadFiles(string cfile, string sfile, string spfile);

	
	bool WriteFile(string outputFile);

	string GetResults() { return originalresults + finalresults; };






};



#endif