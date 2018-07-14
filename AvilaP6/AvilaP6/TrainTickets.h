//Alfonzo Avila		aavila28@cnm.edu
//File: TrainTickets.h

#ifndef TrainTickets_H
#define TrainTickets_H

#pragma once
#include <string>
#include "Date.h"

using namespace std;
class TrainTickets
{
private:
	string reservation;	//passenger name for this reservation
	string errorString;	//string containing error information
	int numberOfPass;	//number of passengers booked under this res
	Date book, dep, ret;	//pertinent date pbjects
	bool bRoundTrip, bValidDate;
	string departureCity, dateString;
	float fare;
	static int resNumber;  // number of the reservation made,declaration only
	void CalculateFare();
	void ValidateDate();
public:
	TrainTickets();
	TrainTickets(string resN, int nPass, Date &bk, Date &dpt, Date &rtn);
	TrainTickets(string resN, int nPass, Date &bk, Date &dpt);
	void SetNumberOfPass(int n) { numberOfPass = n; }	//how many people?
	void SetDepartingCity(string city) { departureCity = city; }// ABQ or CHI
	void SetDates(Date &bk, Date &dpt, Date &rtn);
	void SetDates(Date &bk, Date &dpt);
	void SetReservationName(string name) { reservation = name; }
	float GetTotalFare() { return fare; }
	string GetReservationDescription();
	

};

#endif