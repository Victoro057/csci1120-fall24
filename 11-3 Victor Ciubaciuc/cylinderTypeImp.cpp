#include <iostream>
#include <iomanip>
#include "circleType.h"
#include "cylinderType.h"

using namespace std;

    //r = radius, h = height, c = center
cylinderType::cylinderType(double r, double h, double c){
    setRadius(r);
    height = h;
    center = c;
}

    //default constructor
cylinderType::cylinderType(){
    setRadius(0);
    height = 0;
    center = 0;
}

void cylinderType::calculateAndPrintVol(){
    double radius = getRadius();
    double volume = PI * (radius * radius) * height;

    cout << fixed << setprecision(2);
    cout << "Volume: " << volume << endl;
}

void cylinderType::calculateAndPrintSurfaceArea(){
    double radius = getRadius();
    double surfaceArea = 2 * PI * radius * (height + radius);

    cout << fixed << setprecision(2);
    cout << "Surface area: " << surfaceArea << endl;
}

void cylinderType::print(){
    cout << fixed << setprecision(2);
    cout << "Radius: " << getRadius() << endl
         << "Height: " << height << endl
         << "Center: " << center << endl;

    calculateAndPrintVol();
    calculateAndPrintSurfaceArea();
}

void cylinderType::setHeight(double h){

    height = h;
}

void cylinderType::setRadius(double r){
    circleType::setRadius(r);
}

void cylinderType::setCenter(double c){
    center = c;
}


