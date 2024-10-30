#ifndef H_dayType
#define H_dayType 
    
#include <string>
#include <iostream>

using namespace std;

class dayType
{
    private:
        string daysInWeek[7] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
        int dayNum;

    public:

        dayType(int dayNumber){
            dayNum = dayNumber;
        }
            //Empty constructor
        dayType(){

        }

        string identifyDay(){
            string dayIdentified; 
            
            dayIdentified = daysInWeek[dayNum - 1];

            return dayIdentified;
        }

        string getNextDay(){
            string currentDay = identifyDay();
            string nextDay;
                //If the day is anything but saturday(7th) then increment day by one and check daysInWeek array to see what day it is, and assign
            if(dayNum < 7){
                nextDay = daysInWeek[dayNum];   
            }
            else{       //If day is saturda, means next day is sunday. So we reset to 0
                nextDay = daysInWeek[0];
            }

            return nextDay;
        }

        string getPreviousDay(){
            string currentDay = identifyDay();
            string previousDay;


                //If the day is anything but a sunday, calculate previous day
            if(dayNum > 0 && dayNum != 1){
                previousDay = daysInWeek[dayNum - 2];   
            }
            else{   //If a day is a sunday, the previous day is saturday.
                previousDay = daysInWeek[6];
            }

            return previousDay;
        }

        string addingToDay(int numDaysAdded){
            string currentDay = identifyDay();
            string dayToBe;

            int dayFinal = dayNum + numDaysAdded;

                //Calculation to get the number of the day no matter how big the numDaysAdded number is
            while (dayFinal > 7){
                dayFinal -= 7;
            }
            dayToBe = daysInWeek[dayFinal - 1];
            return dayToBe;         
        }

        void setDayNum(int dayNumber){
            dayNum = dayNumber;
        }
        int getDayNum(){
            return dayNum;
        }

};

#endif