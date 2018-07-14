
#include <iostream>
#include <string>
#include <sstream>
#include "Enigma.h"
#include "PrimeShiftEnigma.h"
#include "Shifty.h"
#include "DaileyShift.h"

using namespace std;

string DisplayEncoded(Enigma *e, string m, int k)
{
	e->SetMessage(m, k);
	stringstream ss;
	string coded = e->GetEncodedMessage();


	ss << "Original Message: " << m << "\nCodedMessage: "<< coded ;
	string dis = ss.str();
	return dis;


}

string DisplayDecoded(Enigma *e, string cm, int k)
{
	e->SetCodedMessage(cm, k);

	string decoded = e->GetDecodedMessage();;
	stringstream ss;
	ss << "\nDecodedMessage: " << decoded << "\n";
	string dis = ss.str();
	return dis;


}
int main()
{

	//*****************Enigma original testing**************************
	Enigma enig;
	string mess = "Black bears say Hey!";
	string coded = "k6+-5I,/+<=I=+CIq/CJ";

	string disE = DisplayEncoded(&enig, mess, 41);

	Enigma edecode;
	string disD = DisplayDecoded(&edecode, coded, 41);

	cout << "Regular Enigma:\n" << disE << disD;
	//************Prime shift testing***************************

	PrimeShiftEnigma pse;
	string psecoded = "m6/-;O,5/<COC/GO%5GJ";
	string psedisE = DisplayEncoded(&pse, mess, 41);

	PrimeShiftEnigma psed;
	string psedisD = DisplayDecoded(&psed, psecoded, 41);



 cout << "\n\nPrimeShift Enigma:\n" << psedisE << psedisD << "\n";

 //**************Shifty Testing*********************************
	Shifty sty;
	string stydisE = DisplayEncoded(&sty, mess, 41);

	Shifty dSty;
	string stydisD = DisplayDecoded(&dSty, "*(#($^(%&(%%($&(@&(%^(%#(%&($)(#((@&(#((%&(##(@&**&(%#(##(@^", 41);

	cout << "\nShifty Enigma: \n" << stydisE<<stydisD;

//******************Dailey Testing*******************
	

	DaileyShift dse;
	string dseEncode = DisplayEncoded(&dse, mess, 41);
	DaileyShift dseDec;
	string dseDecode = DisplayDecoded(&dseDec, "6{k|+e5~-iIX/Y,`+E=1<vI~+}=ZC$q|IG//JXCQ", 41);

	cout << "\nDailey Enigma: " << dseEncode<<dseDecode;



	return 0;

}



	


