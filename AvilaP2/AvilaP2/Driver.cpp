//Alfonzo Avila	aavila28@cnm.edu
//File: Driver.cpp

#include <iostream>
#include "SimpleCalc.h"


using namespace std;


int main()
{
	//header
	cout << "Alfonzo Avila	aavila28@cnm.edu\n"
		<< "Program 2 : The Simple Calculator\n"
		<<"\nThe objective of this program is to perform as a simple calculator."
		<<"\nThe calculator only operates addition, subtraction, multiplication and \ndivision.\n";

	string again;
	string result;
	

	SimpleCalc calc;

	int n1, n2;
	char op;

	do 
	{
		cout << "\nPlease enter the first number/operand.	";
		cin >> n1;
		cin.ignore();

		cout << "\nWhat operation would like to perform?\n"
			<< "Enter \"+\" for addition, \"-\" for subtraction, \"*\" for multiplication,\n"
			<< "and \"/\" for division.	";

		cin >> op;
		cin.ignore();


		cout << "\n\nFinally, enter the second number/operand.	";
		cin >> n2;
		cin.ignore();


		if (op == '/' & n2 == 0)
		{
			cout << "\nDivision by 0 is undefined";

		}

		else
		{
			calc.SetOperation(op, n1, n2);

			result = calc.GetResults();


			cout << result;
		}



		cout << "\n\nWould you like to do another calculation?\n"
			<< "Enter \"y\" for YES and \"n\" NO.	";
		cin >> again;

	} while (again == "y");



	cout << "\nThanks for using my program! Until next time ;D\n";

	return 0;

}