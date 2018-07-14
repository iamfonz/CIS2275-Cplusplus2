#include "PrimeShiftEnigma.h"

PrimeShiftEnigma::PrimeShiftEnigma()
{
	message = "";
	codedmessage = "";
	key = 1;
	srand(time(NULL));

}


void PrimeShiftEnigma::Encode()
{
	int prime[19] = { 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 101, 103, 107, 109, 113 };
	Enigma::Encode();

	int icodelength = codedmessage.length();
	for (int i = 0; i < icodelength; ++i)
	{
		int cchar = static_cast<int>(codedmessage.at(i));

		for (int j = 0; j < 19; ++j)
		{
			if (cchar == prime[j])
			{
				for (int k = 0; k < 19; ++k)
				{
					if (key == prime[k])
					{
						int jplusone = j + 1;
						if (jplusone > 18)
						{
							cchar = prime[0];
							codedmessage.at(i) = cchar;
							break;

						}
						else
						{
							cchar = prime[j + 1];
							codedmessage.at(i) = cchar;
							break;

						}
					}
					else if (key % 2 == 0)
					{
						int kplustwo = k + 2;
						if (kplustwo > 19)
						{
							cchar = prime[1];

						}
						else
						{
							cchar = prime[k + 2];
						}
					}
					else
						continue;
				}
				break;
			}

		}


	}
}

void PrimeShiftEnigma::Decode()
{

	int prime[19] = { 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 101, 103, 107, 109, 113 };
	message = codedmessage;

	int imesslength = message.length();
	for (int i = 0; i < imesslength; ++i)
	{
		int cchar = static_cast<int>(message.at(i));

		for (int j = 0; j < 19; ++j)
		{
			if (cchar == prime[j])
			{
				for (int k = 0; k < 19; ++k)
				{
					if (key == prime[k])
					{
						int jminusone = j - 1;
						if (jminusone < 0)
						{
							cchar = prime[18];
							message.at(i) = cchar;
							break;

						}
						else
						{
							cchar = prime[jminusone];
							message.at(i) = cchar;
							break;

						}
					}
					else if (key % 2 == 0)
					{
						int kplustwo = k - 2;
						if (kplustwo < 0)
						{
							cchar = prime[17];

						}
						else
						{
							cchar = prime[k - 2];
						}
					}
					else
						continue;
				}
				break;
			}

		}


	}

	codedmessage = message;
	Enigma::Decode();
}
