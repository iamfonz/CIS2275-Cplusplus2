//Alfonzo Avila		aavila28@cnm.edu
//File : DaileyShift.cpp
#include<random>
#include "DaileyShift.h"

using namespace std;

DaileyShift::DaileyShift()
{
	codedmessage = "";
	message = "";
	key = 1;
	srand(time(NULL));
}

void DaileyShift::Encode()
{
	Enigma::Encode();
	string insertrand;
	default_random_engine generator;
	uniform_int_distribution<int> distribution(32, 126);

	for (int i = 0; i < codedmessage.length(); ++i)
	{
		int randomnumber = distribution(generator);

		insertrand += codedmessage.at(i);
		insertrand += randomnumber;

	}

	int division = (key % 4) + 2;
	string divideandreverse;
	int ilength = insertrand.length();
		
	for (int i = 0; i < ilength; i)
	{
		string grouping;
		bool endgroup=false;

		for (int j = 0; j < division; ++j)
		{
			int iplusj = i + j;
			if(iplusj>=ilength)
			{ 
						
				endgroup = true;
				break;
				
				
			}
			else {
				int cchar = static_cast<int>(insertrand.at(iplusj));
				grouping += cchar;

			}
		}

		if (endgroup == false)
		{
			//use for loop to go through every 

		/*	divideandreverse += grouping.at(division - 1);
			divideandreverse += grouping.at(division - 2);
			divideandreverse += grouping.at(0);*/

			for (int i = division-1; i >=0; --i)
			{
				divideandreverse += grouping.at(i);

			}
		}
		else
		{
			divideandreverse += grouping;
		}
		i += division;
	}

	codedmessage = divideandreverse;


}

void DaileyShift::Decode()
{
	int division = (key % 4) + 2;
	string divideandreverse;
	int ilength = codedmessage.length();

	for (int i = 0; i < ilength; i)
	{
		string grouping;
		bool endgroup = false;

		for (int j = 0; j < division; ++j)
		{
			int iplusj = i + j;
			if (iplusj >= ilength)
			{

				endgroup = true;
				break;


			}
			else {
				int cchar = static_cast<int>(codedmessage.at(iplusj));
				grouping += cchar;
			}
		}

		if (endgroup == false)
		{
					for (int i = division-1; i >=0; --i)
			{
				divideandreverse += grouping.at(i);

			}
		}
		else
		{
			divideandreverse += grouping;
		}
		i += division;
	}

	
	int newlength = ilength / 2;
	string removedrandom;
	for (int i = 0; i < ilength; )
	{
		removedrandom += divideandreverse.at(i);
		i += 2;
	}

	codedmessage = removedrandom;
	Enigma::Decode();

}