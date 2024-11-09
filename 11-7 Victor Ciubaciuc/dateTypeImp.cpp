// Write your code here
#include <iostream>
#include <string>
#include "dateType.h"

using namespace std;

//Constructors
dateType::dateType(){   //This is the default constructor
    dMonth = 1;
    dDay = 1;
    dYear = 1900;
}

dateType::dateType(int m, int d, int y){
    dMonth = m;
    dDay = d;
    dYear = y;
}


void dateType::setDate(int x, int y, int z){
    dMonth = x;
    dDay = y;
    dYear = z;

}

    //setters
void dateType::setMonth(int x){
    dMonth = x;
}

void dateType::setDay(int x){
    dDay = x;
}

void dateType::setYear(int x){
    dYear = x;
}
    //getters
int dateType::getMonth() const{
    return dMonth;
}
int dateType::getDay() const{
    return dDay;
}
int dateType::getYear() const{
    return dYear;
}




void dateType::print() const{
    cout << dMonth << "-"
         << dDay << "-"
         << dYear << endl;
}



    //This function returns the number of days in the month
int dateType::getDaysInMonth(){
    switch(getMonth()){
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            return 31;
            break;
        case 4: case 6: case 9: case 11:
            return 30;
            break;
        case 2:
            if(isLeapYear()){
                return 29;
            }
            else{
                return 28;
            }
        default:
            return false;
    }
}
int dateType::getDaysInMonth(int month){
    switch(month){
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            return 31;
            break;
        case 4: case 6: case 9: case 11:
            return 30;
            break;
        case 2:
            if(isLeapYear(month)){
                return 29;
            }
            else{
                return 28;
            }
        default:
            return false;
    }
}

    //This function is returning the
bool dateType::isLeapYear(){
        /*
            The logic behind this is that if a year is 
            divisible by 4 and
            not divisible by 100 unless
            it is divisible by 400
        */
    if((dYear % 4 == 0 && dYear % 100 != 0) || (dYear % 400 == 0)){
        return true;
    }
    else{
        return false;
    }
}
bool dateType::isLeapYear(int month){
      /*
            The logic behind this is that if a year is 
            divisible by 4 and
            not divisible by 100 unless
            it is divisible by 400
        */
    if((month % 4 == 0 && month % 100 != 0) || (month % 400 == 0)){
        return true;
    }
    else{
        return false;
    }    
}

int dateType::numberOfDaysPassed(){
    int fullMonthsPassed;
    int daysPassed = 0;
    int daysPassedInMonth = getDay();
        //the below cout statement is there to test, uncomment and run the code to see the result.
    //cout << "Days passed in the month: " << daysPassedInMonth << endl;

        //deciding how many full monts have passed.
    if(dMonth > 1){
        fullMonthsPassed = dMonth - 1;
    }
    else if(dMonth == 1){
        fullMonthsPassed = 0;
    }

        //If we are not on the first month still below are cout statements to test the code. If you are testing, uncomment them and run the code
    if(fullMonthsPassed != 1){
        for (int i = 1; i <= fullMonthsPassed; i++){
            daysPassed += getDaysInMonth(i);
        }
        if(!isLeapYear()){
            //cout << "days passed: (more than 1 month passed) " << daysPassed + daysPassedInMonth << endl;
            return daysPassed + daysPassedInMonth;
        }
        else{
            //cout << "days passed: (more than 1 month passed) " << daysPassed + daysPassedInMonth  + 1<< endl;
            return daysPassed + daysPassedInMonth + 1;
        }

    }
    else{
        //cout << "number of days passed before adding: " << daysPassed << endl;
        if(!isLeapYear()){
            return daysPassed + daysPassedInMonth;
        }
        else{
            return daysPassed + daysPassedInMonth + 1;
        }
    }


}

int dateType::numberOfDaysLeft(){
    int numDaysPassed = numberOfDaysPassed();
    int totalDaysInYr = 0;
     //Deciding how many days are in a year (different when it is leap year)
    if(isLeapYear()){
        totalDaysInYr = 366;
    }
    else{
        totalDaysInYr = 365;
    }

    cout << "The number of days left in the year: " << totalDaysInYr - numDaysPassed;

}

void dateType::incrementDate(int days){
    int currentMonth = getMonth();
    int daysInCurrentMonth;
    for (int i = 0; i < days; i++){
        daysInCurrentMonth = getDaysInMonth(currentMonth);

        if(dDay != daysInCurrentMonth){ //if the day is not the last day of the month
            dDay += 1;
        }
        else{   //if the current day is the last day of the month
                //If the month is not december
            if(dMonth != 12){
                dMonth += 1;
            }
            else{   //if the month is december
                dMonth = 1;
                dYear += 1;
            }
            dDay = 1;
        }

    } 

}
