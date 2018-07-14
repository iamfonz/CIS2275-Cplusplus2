//Alfonzo Avila		aavila28@cnm.edu
//File : PrimeShiftEngima.h

#ifndef PrimeShiftEnigma_H
#define PrimeShiftEnigma_H
#pragma once

#include <string>
#include <stdlib.h>     /* srand, rand */
#include <ctime> 
#include "Enigma.h"

using namespace std;
class PrimeShiftEnigma : public Enigma {
private:
	 void Encode() override;
	 void Decode() override;

public:
	PrimeShiftEnigma();

};

#endif
