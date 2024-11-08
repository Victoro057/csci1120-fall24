#include <iostream>
#include "dateType.h"

using namespace std;

int main() {
    // Write your main here

    int day, month, year;

    cout << "Enter the month, day, year if format (mm dd yyyy)" << endl;
    cin >> month >> day >> year;
    cout << endl;

    dateType date (month, day, year);
    date.printDate();

    return 0;
}