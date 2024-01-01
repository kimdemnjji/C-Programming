#include "Circle.h"
#include <iostream>
using namespace std;

void Circle::Draw() const {
    cout << "[Circle] POSITION = "
        << _originPt.toString()
        << " RADIUS = "
        << _radius << endl;
}

void Circle::SetRedius(COOR_T radius) {
    _radius = radius;
}

double Circle::getArea() const {
    return 3.14 * _radius * _radius;
}

Circle::Circle() {
    SetRedius(100);
}

Circle::Circle(COOR_T x, COOR_T y, COOR_T radius)
    :Shape(x, y)
{
    SetRedius(radius);
}