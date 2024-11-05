#ifndef H_ExtClockType
#define H_ExtClockType

#include "clockType.h"      //Includes the base class header
#include <string>

using namespace std;

class extClockType : public clockType{
    public:

        extClockType(int hours = 0, int minutes = 0, int seconds = 0, string timeZn = "UTC");

        void setTimeZone(const string& timeZone);
        string getTimeZone() const;
        void printWithZone() const;


    private:
            //Will be using this string variable to store time zone
        string timeZone;

   
};


#endif