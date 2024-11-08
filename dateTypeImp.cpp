//Implementation file

#include "dateType.h"
#include <iostream>

using namespace std;


    //Constructors
dateType::dateType(int month, int day, int year){
    if(everythingValid(month, day, year)){
        dMonth = month;
        dDay = day;
        dYear = year;
    }
    else{
        cout << "Could not take the date that you entered. Invalid." << endl;
    }
}
dateType::dateType(){
    
    dMonth = 0;
    dDay = 0;
    dYear = 0;
}



void dateType::setDate(int month, int day, int year){

    if(everythingValid(month, day, year)){
        dMonth = month;
        dDay = day;
        dYear = year;
    }
    else{
        cout << "Could not take the date that you entered. Invalid." << endl;
            //Setting the default values
        dMonth = 1; dDay = 1; dYear = 2000;
        
    }
}

int dateType::getMonth() const{
    return dMonth;
}
int dateType::getDay() const{
    return dDay;
}
int dateType::getYear() const{
    return dYear;
}
void dateType::printDate(){
    cout<< dMonth << "-"
        << dDay  << "-"
        << dYear << endl;

    if(isLeapYear()){
        cout << "this is a leap year" << endl;
    }
}

bool dateType::everythingValid(int month, int day, int year){
    if(monthValid(month) && dayValid(day, month) && yearValid(year)){
        return true;
    }
    else{
        return false;
    }

}

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

bool dateType::monthValid(int month){
    bool validity;
    if(month <= 12 && month >= 1){
        validity = true;
    }
    else{
        validity = false;
    }

    return validity;
}

    //This function checks if the year is not below 0
bool dateType::yearValid(int year){
    if(year > 0){
        return true;
    }
    else{
        return false;
    }
}



bool dateType::dayValid(int day, int month){
    if(day < 1){
        return false; 
    }

    int days;
    
    switch(month){
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            days = 31;
            break;
        case 4: case 6: case 9: case 11:
            days = 30;
            break;
        case 2:
            days = (isLeapYear() ? 29 : 28);
            break;
        default:   
            return false;
    }
   
    return day <= days; 
}







