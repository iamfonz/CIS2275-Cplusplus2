//Alfonzo Avila		aavila28@cnm.edu
//File : Engima.h

#ifndef Enigma_H
#define Enigma_H
#pragma once

#include <string>
#include <stdlib.h>     /* srand, rand */
#include <ctime> 

using namespace std;

class Enigma
{
protected:
	string message;//english language
	string codedmessage;//encoded message 
	int key;


	virtual void Encode();
	virtual void Decode();

public:
	Enigma();
	void SetMessage(string m, int k);
	void SetMessage(string m);
	void SetCodedMessage(string m, int k);
	string GetDecodedMessage() { return message; }
	string GetCodedMessage() { return codedmessage; }
	int GetKey() { return key; }


};
#endif



