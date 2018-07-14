//Alfonzo Avila		aavila28@cnm.edu
//File: TrainTickets.cpp

#include <ctime>
#include <sstream>
#include "TrainTickets.h"
#include <iostream>

using namespace std;

//constructors
TrainTickets::TrainTickets()
{
	reservation = "TBD";

	numberOfPass = 0;

	fare = 0.0;


}
//TODO:  Need Constructor initializer  -5
TrainTickets::TrainTickets(string resN, int nPass, Date &bk, Date &dpt, Date &rtn)
{
	reservation = resN;
	numberOfPass = nPass;
	book = bk;
	dep = dpt;
	ret = rtn;
	bRoundTrip = true;
	ValidateDate();
	//TODO:  When do you call Calculatefare()?  Do this is all methods that call ValidateDate().

	if (bValidDate)
		CalculateFare();

}
//TODO   here, too
TrainTickets::TrainTickets(string resN, int nPass, Date &bk, Date &dpt)
{
	reservation = resN;
	numberOfPass = nPass;
	book = bk;
	dep = dpt;
	bRoundTrip = false;
	ValidateDate();
	if (bValidDate)
		CalculateFare();
}

int TrainTickets::resNumber = 0;

void TrainTickets::SetDates(Date &bk, Date &dpt, Date &rtn)
{
	book = bk;
	dep = dpt;
	ret = rtn;
	ValidateDate();
	if (bValidDate)
		CalculateFare();

}
void TrainTickets::SetDates(Date &bk, Date &dpt)
{
	book = bk;
	dep = dpt;
	ValidateDate();
	if (bValidDate)
		CalculateFare();

}

void TrainTickets::ValidateDate()
{
	time_t rawtime;
	time(&rawtime);


	if (bRoundTrip == true)
	{
		if (dep.ValidateThisDate() && ret.ValidateThisDate())
		{
			//TODO:  The point of OOP is to let the objects do the job of their classes.   -5
			//TODO:  You are doing it all over again.	


			struct tm bookin, depart, ireturn;
			bookin = *localtime(&rawtime);
			depart = *localtime(&rawtime);
			ireturn = *localtime(&rawtime);

			bookin.tm_mon = book.GetMonth() - 1;
			bookin.tm_mday = book.GetDay();
			bookin.tm_year = book.GetYear() - 1900;

			depart.tm_mon = dep.GetMonth() - 1;
			depart.tm_mday = dep.GetDay();
			depart.tm_year = dep.GetYear() - 1900;

			ireturn.tm_mon = ret.GetMonth() - 1;
			ireturn.tm_mday = ret.GetDay();
			ireturn.tm_year = ret.GetYear() - 1900;

			long long depbookseconds = difftime(mktime(&depart), mktime(&bookin));

			//TODO:  You have to take into account that you might be validating dates that do not include a return trip
			//TODO:  For a one-way trip, this is negative and bValidDate is false.

			//TODO:  I put in a prefectly valid ddeparture date and got back the error string.
			long long depreturnseconds = difftime(mktime(&ireturn), mktime(&depart));

			/*if (depbookseconds >= 0 && depreturnseconds >= 0)*/
			if (depbookseconds >= 0 )
			{
				bValidDate = true;
			}
			else
			{
				bValidDate = false;
				errorString = "Unable to determing fare. The dates are invalid.";
			}

		}


	}
	else
	{
		if (dep.ValidateThisDate())
		{

			struct tm bookin, depart;

			bookin = *localtime(&rawtime);
			depart = *localtime(&rawtime);


			bookin.tm_mon = book.GetMonth() - 1;
			bookin.tm_mday = book.GetDay();
			bookin.tm_year = book.GetYear() - 1900;

			depart.tm_mon = dep.GetMonth() - 1;
			depart.tm_mday = dep.GetDay();
			depart.tm_year = dep.GetYear() - 1900;


			long long seconds = difftime(mktime(&depart), mktime(&bookin));

			if (seconds >= 0)
			{
				bValidDate = true;
			}
			else
			{
				bValidDate = false;
				errorString = "Unable to determing fare. The departure date cannot be before the booking date.";
			}


		}

		else
		{
			bValidDate = false;
			errorString = "Unable to determine fare. The departure date is invalid.";
		}



	}

}






void TrainTickets::CalculateFare()
{
	time_t rawtime;
	time(&rawtime);

	struct tm bookin, depart;
	bookin = *localtime(&rawtime);
	depart = *localtime(&rawtime);

	bookin.tm_mon = book.GetMonth() - 1;
	bookin.tm_mday = book.GetDay();
	bookin.tm_year = book.GetYear() - 1900;

	depart.tm_mon = dep.GetMonth() - 1;
	depart.tm_mday = dep.GetDay();
	depart.tm_year = dep.GetYear() - 1900;

	//TODO:  You don't need these. Just use the class variables, book, dep, ret
	long long seconds = difftime(mktime(&depart), mktime(&bookin));

	long long mins = seconds / 60;
	double hours = mins / 60;
	int days = hours / 24;

	//TODO:  For all of the fares, you need to multiply by 2 if it is round-trip.  -2

	if (days >= 30)
	{
		fare = 39.0 * numberOfPass;
		resNumber++;



	}

	else if (days >= 14)
	{
		fare = 79.0 * numberOfPass;
		resNumber++;

	}

	else
	{
		fare = numberOfPass * 129.0;
		resNumber++;
	}
}

string TrainTickets::GetReservationDescription()
{
	//create confirmation number
	//string confirmationnum must be in this format 1000[resnum] + initials of res name
	// example 10001AA (alfonzo avila)

	//in calculate fare increment resNumber
	
	string confirmationNum = to_string(10000 + resNumber);
	

	int i = 0;
	char c;
	string initials, str = "";
//TODO:  This loop is hanging you up.  You just need to ToUpper the first two letters of the reservation name.  -2
	//while (reservation[i])
	//{
	//	c = reservation[i];
	//	int position = isspace(c);
	//	string init ="";
	//	str.replace(position, 2, init);

	//}

	confirmationNum += str;

	stringstream ss;

	ss << "Your reservation has been booked successfully. Below are the details.\r\nReservation Name: "<< reservation << " Number of Passengers: "<<numberOfPass
		<<"\r\nDate Booked: "<<book.GetMonth()<<"/"<<book.GetDay()<<"/"
		<<book.GetYear()<<"\nDate of Departure: " <<dep.GetMonth()<<"/"<<dep.GetDay()<<"/"<<dep.GetYear()<<"\n";

	if (bRoundTrip == true)
	{
		ss << "Date of Return: " << ret.GetMonth() << "/" << ret.GetDay() << "/" << ret.GetYear() <<"\n";
	}

	ss << "Total Fare: "<<fare<<"\nConfirmation Number: " << confirmationNum ;


	if (bValidDate == true)
	{
		//TODO:  You never converted the stringstream to a string to return it.  -2
		/*return reservation;*/

		cout << "\n\n ss.str()";
		return ss.str();
	}
	else
	{
		return errorString;
	}
}
