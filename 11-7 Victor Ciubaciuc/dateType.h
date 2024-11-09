#ifndef dateType_H
#define dateType_H 

#include <iostream>
#include <string>
//#include "dateTypeImp.cpp"
using namespace std;

class dateType
{
public:
	void setDate(int x, int y, int z);
	void setMonth(int x);
	void setDay(int x);
	void setYear(int x);

	void print() const;

	int numberOfDaysPassed();

	int numberOfDaysLeft();

	void incrementDate(int nDays);

	int getMonth() const;
	int getDay() const;
	int getYear() const;

	int getDaysInMonth();
	int getDaysInMonth(int month);

	bool isLeapYear();
	bool isLeapYear(int month);

	dateType(); //default constructor
	dateType(int month, int day, int year);
private:
	int dMonth;
	int dDay;
	int dYear;
};
#endif
