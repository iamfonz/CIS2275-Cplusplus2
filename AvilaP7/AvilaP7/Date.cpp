//Alfonzo Avila		aavila28@cnm.edu
//File: Date.cpp

#include <string>
#include <ctime>		//obtain system date
#include <sstream>
#include "Date.h"

using namespace std;

Date::Date()
{
	//Set the Date variables to the computer's date.
	time_t rawtime;
	/*tm *OStime; */
	tm OStime;  //declaring a local struct

	errno_t err;  //declare an error code, a typedef of an int return type

	//First obtain the raw time from the op system
	time(&rawtime);

	//localtime converts this to data struct
	//containing month, day, year
	//Jan month is 0, must add 1
	//0 year is 1900, 
	//must add 1900 to obtain correct year

	/*OStime = localtime(&rawtime);  localtime is deprecated*/

	//New way, not deprecated
	err = localtime_s(&OStime, &rawtime);


	if (err == 0)
	{
		month = OStime.tm_mon + 1;
		day = OStime.tm_mday;
		year = OStime.tm_year + 1900;

		description = "Today's Date";
		DetermineLeapYear();
		CalcDayOfYear();
	}
	//month = OStime->tm_mon + 1;
	//day = OStime->tm_mday;
	//year = OStime->tm_year + 1900;

	//description = "\nToday's Date";
	//DetermineLeapYear();
	//CalcDayOfYear();
}


Date::Date(int m, int d, int y, string desc)
{
	month = m;
	day = d;
	year = y;
	description = desc;
	DetermineLeapYear();
	CalcDayOfYear();
}


void Date::SetDate(int m, int d, int y, string desc)
{
	month = m;
	day = d;
	year = y;
	description = desc;
	DetermineLeapYear();
	CalcDayOfYear();
}


string Date::GetFormattedDate()
{
	stringstream strDate;
	strDate << description;

	string monName[12] = { "January",	"February ","March",
		"April", "May", "June", "July", "August",
		"September", "October", "November", "December" };


	strDate << ": " << monName[month - 1] << " " << day
		<< ", " << year;

	return strDate.str();
}

void Date::CalcDayOfYear()
{
	//set up array of days in each month
	//for non-leapyear year
	int dayCount[12] = { 31,28,31,30,31,30,
		31,31,30,31,30,31 };

	dayOfYear = 0;

	//add the days up to the previous month
	for (int i = 1; i < month; ++i)
	{
		dayOfYear += dayCount[i - 1];

		//if adding Feb, check if leap year
		if (i == 2 && bLeap == true)
			dayOfYear += 1;
	}

	dayOfYear += day;
}

void Date::DetermineLeapYear()
{
	//A year is a leap year if it is divisible by four, 
	//unless it is a century date (i.e,  1900). 
	//If it is a century date, it is a leap year only 
	//if it is divisible by 400 (i.e., 2000).

	if (year % 4 == 0 && year % 100 != 0)
		bLeap = true;
	else if (year % 400 == 0)
		bLeap = true;
	else
		bLeap = false;
}

bool Date::ValidateThisDate()
{
	int dayCount[12] = { 31,28,31,30,31,30,
		31,31,30,31,30,31 };

	if (bLeap)
	{
		dayCount[1] = 29;
	}
	/*check month ok
	check leapyear
	check if day is ok
	check if year ok
	return true or false*/
	if (month <= 0 || month > 12)
	{
		return false;
	}

	else if (day > dayCount[month - 1])
	{
		return false;
	}

	else if (bLeap == true && day > 29)
	{
		return false;
	}

	else if (year < 1970)
	{
		return false;
	}
	else
		return true;



}

bool Date::operator>(Date d1)
{
	if ((year > d1.year) || (year == d1.year) && (dayOfYear > d1.dayOfYear))
		return true;

	else
		return false;

}

bool Date::operator<(Date d1)
{
	if ((year < d1.year) || (year == d1.year) && (dayOfYear < d1.dayOfYear))
		return true;

	else
		return false;
}

int Date::operator -(Date d1)
{
	int ydiff = year - d1.year;
	int addDays = 365 * ydiff;

	int diff = (dayOfYear - d1.dayOfYear) + (addDays);
	
		return diff;
}