#ifndef cylinderType_H
#define cylinderType_H
#include "circleType.h"

    //inheriting public from circleType
class cylinderType : public circleType{     
    public:

        cylinderType(double radius, double height, double center);
        cylinderType();

        void calculateAndPrintVol();
        void calculateAndPrintSurfaceArea();
        void print();
        void setHeight(double height);
        void setRadius(double radius);
        void setCenter(double center);

    private:
        double volume;
        double surfaceArea;
        double height;
        double center;
        const double PI = 3.14159;
    
};


#endif
