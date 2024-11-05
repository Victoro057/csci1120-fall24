#include "extClockType.h"
#include <iostream>
#include <string>

using namespace std;

extClockType::extClockType(int hours, int minutes, int seconds, string timeZn)
            : clockType(hours, minutes, seconds), timeZone(timeZn){}

void extClockType::setTimeZone(const string& timeZn){
    timeZone = timeZn;
}

string extClockType::getTimeZone() const{
    return timeZone;
}

void extClockType::printWithZone() const{
    printTime();    //Gets this from the base class
    cout << " " << timeZone << endl;
}



