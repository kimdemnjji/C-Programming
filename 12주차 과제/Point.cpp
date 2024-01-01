#include "Point.h"

Point::Point() 
	:_x(0), _y(0)
{
}

Point::Point(COOR_T x, COOR_T y) {
	setX(x);
	setY(y);
}

Point::Point(const Point& pt) {
	cout << "복사 생성자 호출됨!!" << endl;
	_x = pt._x;
	_y = pt._y;
}

void Point::print() const {
	cout << "(" << _x << ", " << _y << ")" << endl;
}

void Point::offset(COOR_T x_delta, COOR_T y_delta)
{
	setX(_x + x_delta);
	setY(_y + y_delta);
}

void Point::offset(const Point& pt)
{
	offset(pt._x, pt._y);
}

Point Point::operator+(const Point& pt2) const {
	Point pt;
	pt.setX(_x + pt2._x);
	pt.setY(_y + pt2._y);
	
	return pt;
}
Point Point::operator-(const Point& pt2) const {
	Point pt;
	pt.setX(_x - pt2._x);
	pt.setY(_y - pt2._y);

	return pt;
}