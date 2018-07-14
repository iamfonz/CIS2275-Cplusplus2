//Alfonzo Avila		aavila28@cnm.edu
//File : Shifty.h

#ifndef Shifty_H
#define Shifty_H
#pragma once

#include <string>
#include <stdlib.h>     /* srand, rand */
#include <ctime> 
#include "Enigma.h"

using namespace std;
class Shifty : public Enigma {
private:
	void Encode() override;
	void Decode() override;

public:
	Shifty();

};

#endif
