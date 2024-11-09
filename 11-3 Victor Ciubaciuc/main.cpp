#include <iostream>
#include "cylinderType.h"

using namespace std;

int main() {
    // Write your main here
    double radius, height, center;

    cout << "What is the radius? ";
    cin >> radius;
    cout << endl;

    cout << "What is the height? ";
    cin >> height;
    cout << endl;

    cout << "What is the center? ";
    cin >> center;
    cout << endl;

    cylinderType cylinder (radius, height, center);

        //Printing the volume
    cylinder.calculateAndPrintVol();
        //Printing the surface area
    cylinder.calculateAndPrintSurfaceArea();
    cout << endl;

    cout << "Before changes: " << endl;    
    cylinder.print();
    cout << endl;

    cylinder.setRadius(12.5);
    cylinder.setHeight(8.1);
    cylinder.setCenter(1);

    cout << "After changes: " << endl;
    cylinder.print();


    return 0;
}
