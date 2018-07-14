//Alfonzo Avila		aavila28@cnm.edu
//File : Shifty.cpp

#include <sstream>
#include "Shifty.h"

using namespace std;

Shifty::Shifty()
{
	codedmessage = "";
	message = "";
	key = 1;
	srand(time(NULL));

}

void Shifty::Encode()
{
	Enigma::Encode();
	int ilength = codedmessage.length();
	string shifts = ")!@#$%^&*(";
	string newcode="";


	for (int i = 0; i < ilength; ++i)
	{
		int cchar = static_cast<int>(codedmessage.at(i));
		int thous = 1000 - cchar;
		int onesplace = thous % 10;
		int tenthsplace = thous / 10 % 10;
		int hundsplace = thous / 100 % 10;
		newcode += shifts.at(hundsplace);
		newcode += shifts.at(tenthsplace);
		newcode += shifts.at(onesplace);		
	}

	codedmessage = newcode;
}

void Shifty::Decode()
{
	int ilength = codedmessage.length();
	string decoded="";
	char shifts[10] = {')', '!', '@', '#', '$', '%', '^', '&', '*', '('};
	for (int i = 0; i < ilength; i)
	{
		int hundreds = static_cast<int>(codedmessage.at(i));
		int tenths = static_cast<int>(codedmessage.at(i + 1));
		int ones = static_cast<int>(codedmessage.at(i + 2));
		for (int j = 0; j < 10; ++j)
		{
			if (hundreds == shifts[j])
			{
				hundreds = j;
				break;
			}
		}
		for (int j = 0; j < 10; ++j)
		{
			if (tenths == shifts[j])
			{
				tenths = j;
				break;
			}
		}
		for (int j = 0; j < 10; ++j)
		{
			if (ones == shifts[j])
			{
				ones = j;
				break;
			}
		}

		stringstream ss;
		ss << hundreds << tenths << ones;
		string together = ss.str();

		int number =1000- stoi(together);
		
		decoded += number;
		i += 3;
	}
	codedmessage = decoded;
	Enigma::Decode();
}