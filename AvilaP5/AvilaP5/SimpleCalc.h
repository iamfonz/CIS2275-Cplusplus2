//Alfonzo Avila		aavila28@cnm.edu
//File:SimpleCalc.h

#ifndef SimpleCalc_H
#define SimpleCalc_H


#include<string>
using namespace std;

class SimpleCalc
{

private:

	char operation; //+ - / *
	double num1;
	double num2; //worried about this one being 0. will check for this
	double answer;
	
	string results; //formt string
	string desc; //"addition", "subtraction" etc
	void Calculate();//does the math


public:

	SimpleCalc();
	void SetOperation(char op, double n1, double n2);
	string GetResults();
	double GetAnswer() { return answer; };



};




#endif