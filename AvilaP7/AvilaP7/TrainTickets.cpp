//Alfonzo Avila		aavila28@cnm.edu
//File: TrainTickets.cpp

#include <ctime>
#include <sstream>
#include "TrainTickets.h"

using namespace std;

//constructors
TrainTickets::TrainTickets()
{
	reservation = "TBD";
	numberOfPass = 0;
	fare = 0.0;
}

TrainTickets::TrainTickets(string resN, int nPass, Date &bk, Date &dpt, Date &rtn)
{
	reservation = resN;
	numberOfPass = nPass;
	book = bk;
	dep = dpt;
	ret = rtn;
	bRoundTrip = true;
	ValidateDate();

}

TrainTickets::TrainTickets(string resN, int nPass, Date &bk, Date &dpt)
{
	reservation = resN;
	numberOfPass = nPass;
	book = bk;
	dep = dpt;
	bRoundTrip = false;
	ValidateDate();
}

int TrainTickets::resNumber = 0;

void TrainTickets::SetDates(Date &bk, Date &dpt, Date &rtn)
{
	book = bk;
	dep = dpt;
	ret = rtn;
	ValidateDate();

}
void TrainTickets::SetDates(Date &bk, Date &dpt)
{
	book = bk;
	dep = dpt;
	ValidateDate();

}

void TrainTickets::ValidateDate()
{

	if (bRoundTrip == true)
	{
		if (dep.ValidateThisDate() && ret.ValidateThisDate())
		{
			int depBookDiff = dep - book;
			int retDepDiff = ret - dep;			

			if (depBookDiff >= 0 && retDepDiff >= 0)
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
			int diff = dep - book;

			if (diff >= 0)
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
	int days = dep - book;


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
{	//create confirmation number in this format 1000[resnum] + initials of res name
	// example 10001AA (alfonzo avila)	
	string confirmationNum = to_string(10000 + resNumber);	
	int i = 0;
	char c;
	string initials, str = "";

	while (reservation[i])
	{
		c = reservation[i];
		int position = isspace(c);
		string init ="";
		str.replace(position, 2, init);
	}

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
		return reservation;
	}
	else
	{
		return errorString;
	}
}
