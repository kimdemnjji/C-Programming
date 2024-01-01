#include "Rectangle.h"
#include <iostream>
using namespace std;

void Rectangle::Resize(COOR_T width, COOR_T height)
{
    _width = width;
    _height = height;
}
void Rectangle::Draw() const {
    cout << "[Rectangle] POSITION = "
        << _originPt.toString()
        << " SIZE = ("
        << _width << ", " << _height
        << ")" << endl;
}

double Rectangle::getArea() const {
    return _width * _height;
}

Rectangle::Rectangle() {
    Resize(100, 100);
}

Rectangle::Rectangle(COOR_T x, COOR_T y, COOR_T width, COOR_T height)
    :Shape(x, y)
{
    Resize(width, height);
}
