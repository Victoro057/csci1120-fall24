#include "extClockType.h"

int main(){ 
    extClockType clock (12, 20, 50, "EST");     //Creating an object

    clock.printWithZone();
    clock.setTimeZone("UTC");
    clock.setTime(10, 50, 30);  //Sets new time //part of clockType.h

    clock.printWithZone();  //prints

    return 0;
}