//Alfonzo Avila		aavila28@cnm.edu
//File : Enigma.cpp

#include "Enigma.h"

using namespace std;

Enigma::Enigma()
{
	message = "";
	codedmessage = "";
	key = 1;
	srand(time(NULL));//seed random number

}

void Enigma::SetMessage(string m, int k)
{
	message = m;

	if (k >= 1 || k <= 50)
	{
		key = k;
	}
	else
	{
		key = 1;
	}

	Encode();
}

void Enigma::SetMessage(string m)
{
	message = m;
	int numkey;
	numkey = rand() % 51 + 0;
	key = numkey;
	Encode();
}

void Enigma::SetCodedMessage(string cm, int k)
{
	codedmessage = cm;
	key = k;
	Decode();

}

void Enigma::Encode()
{
	codedmessage = message;//this is to make sure the array length is the same.

						   /*use for loop to examine message, change char to int */
	for (int i = 0; i < codedmessage.length(); ++i)
	{
		int cchar = static_cast<int>(codedmessage.at(i));
		//then add the key to the int.

		cchar += key;

		//acceptable ASCII characters 32-126. check if number is greater than 126. if so, wrap to 32 etc.
		if (cchar > 126)
		{
			cchar -= 95;
		}

		//create coded message.

		codedmessage.at(i) = cchar;
	}


}

void Enigma::Decode()
{
	//same as encode but reverse
	message = codedmessage;//this is to make sure the array length is the same.

						   /*use for loop to examine message, change char to int */
	for (int i = 0; i < message.length(); ++i)
	{
		int cchar = static_cast<int>(message.at(i));
		//then add the key to the int.

		cchar -= key;

		//acceptable ASCII characters 32-126. check if number is greater than 126. if so, wrap to 32 etc.
		if (cchar < 32)
		{
			cchar += 95;
		}

		//create coded message.

		message.at(i) = cchar;
	}

}

