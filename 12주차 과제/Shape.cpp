#include "Shape.h"
#include <iostream>
using namespace std;

void Shape::Move(COOR_T x, COOR_T y) {
	_originPt.setX(x);
	_originPt.setX(y);
}

Shape::Shape() {
	Move(0, 0);
}

Shape::Shape(COOR_T x, COOR_T y) {
	Move(x, y);
}

Shape::Shape(const Point& pt) {
	_originPt = pt;
}