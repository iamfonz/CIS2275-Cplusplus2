// Alfonzo Avila		aavila28@cnm.edu
// File : SimpleCalc.cpp

#include <string>
#include <sstream>
#include <iostream>
#include "SimpleCalc.h"

using namespace std;

//constructors first

SimpleCalc::SimpleCalc()
{
	operation = '+';
	num1 = 0;
	num2 = 1;
	answer = 0;
	results = "";
	desc = "";

}



void SimpleCalc::SetOperation(char op, double n1, double n2)
{

	operation = op;
	num1 = n1;
	num2 = n2; 
	//check num2 and operation for division by zero.-AA
	
	
		Calculate();
	
	
}


void SimpleCalc::Calculate()
{

	switch (operation)
	{
	case '+':
		answer = num1 + num2;
		desc = "addition";
		break;
	
	case '-':
		answer = num1 - num2;
		desc = "subtraction";
		break;

	case '/':
		if (num2 == 0)
		{
			break;
		}
		else
		{
			answer = num1 / num2;
			desc = "division";
			break;
		}
	case '*':

	
		
			answer = num1*num2;
			desc = "multiplication";
			break;
		
	}


}



string SimpleCalc::GetResults()
{
	// your operation is addition : 5+7=12

	stringstream ss;

	if (operation == '/' & num2 == 0)
	{
		ss << "Cannot divide by zero. Undefined.";
	}


	else
	{
		ss << "\n\nYour operation is " << desc << " : " << num1 << " " << operation << " " << num2
			<< " = " << answer;
	}
	results = ss.str();

	return results;


}