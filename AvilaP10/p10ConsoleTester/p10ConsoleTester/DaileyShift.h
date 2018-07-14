//Alfonzo Avila		aavila28@cnm.edu
//File : DaileyShift.h

#ifndef DaileyShift_H
#define DaileyShift_H
#pragma once

#include <string>
#include <stdlib.h>     /* srand, rand */
#include <ctime> 
#include "Enigma.h"

using namespace std;
class DaileyShift : public Enigma {
private:
	void Encode() override;
	void Decode() override;

public:
	DaileyShift();

};

#endif
