#include "dateType.h"
#include <iostream>

using namespace std;

int main() 
{
   int month, day, year;
    
   cout << "Enter the month, day, year in the following format (mm dd yyyy): ";
   cin >> month >> day >> year;
   cout << endl;


   dateType date(month, day, year);
   date.print();
   cout << endl;

   date.numberOfDaysPassed();
   date.numberOfDaysLeft();

    cout << endl << endl;

    date.incrementDate(100);
    cout <<"Incrementing..." << endl;
    cout << "Results: ";
    date.print();

}
