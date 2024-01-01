#include "Triangle.h"

void Triangle::Resize(COOR_T base, COOR_T height) {
    _base = base;
    _height = height;
}
void Triangle::Draw() const {
    cout << "[Triangle] POSITION = "
        << _originPt.toString()
        << " SIZE = ("
        << _base << ", " << _height
        << ")" << endl;
}

double Triangle::getArea() const {
	return _base * _height / 2;
}

Triangle::Triangle() {
    Resize(100, 100);
}
Triangle::Triangle(COOR_T x, COOR_T y, COOR_T base, COOR_T height) 
    :Shape(x, y) 
{
    Resize(base, height);
}