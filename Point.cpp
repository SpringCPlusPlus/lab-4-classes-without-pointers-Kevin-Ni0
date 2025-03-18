#include <iostream>
#include <cmath> // For sqrt() and pow()
#include "Point.h"

using namespace std;

Point::Point(double xCoord, double yCoord) {
    x=xCoord;
    y=yCoord;
}

double Point::distanceTo(const Point& other) const {
    double dx = other.x - x;
    double dy = other.y - y;
    return sqrt(pow(dx, 2) + pow(dy, 2));
}
 

void Point::print() const{
cout <<x <<" , "<< y;
}
