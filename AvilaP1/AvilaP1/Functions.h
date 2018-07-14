//Alfonzo Avila		aavila28@cnm.edu
// File : Functions.h

#include <string>
#include <vector>

using namespace std;


string Writeheader();
bool AskUserForFiles();
void getFileNames(string &color, string &sentences, string &phrases);
bool ReadColorFile(string colorfile, vector<string> &vcolors);
bool ReadSentFile(string sentencefile, string sentence[]);
bool ReadPhrasesFile(string phrasefile, vector<string> &phrases);
string WriteOriginals(string sentence[], vector<string> phrases, vector<string> colors);
int SwapColor(int numswapped[],string sentence[], vector<string> &phrases, vector<string> &colors);
string WriteResults(int numswapped[], string sentence[], int swapped);
bool WritetoFile(string header, string originals, string results, ofstream &output, string outfile);




