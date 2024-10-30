#include <iostream>
#include "dayType.h"


int main(){

    int dayNumber;
    int daysAhead;

    cout << "Enter a day number: ";
    cin >> dayNumber;
    cout << endl;

    dayType day1(dayNumber);

    cout << "The day is " << day1.identifyDay() << endl;
    cout << "The next day is " << day1.getNextDay() << endl;
    cout << "The previous day is " << day1.getPreviousDay() << endl;

    cout << "Enter the amount days you want to see ahead: ";
    cin >> daysAhead;
    cout << endl;

    cout << "In " << daysAhead << " day/s, it will be a " << day1.addingToDay(daysAhead) << endl;;

}



