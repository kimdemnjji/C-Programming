#pragma once
#include "Point.h"

class Shape
{
public:
	void Move(COOR_T x, COOR_T y);
	virtual void Draw() const = 0;  //순수가상함수
	virtual double getArea() const = 0; //순수가상함수

	Shape();
	Shape(COOR_T x, COOR_T y);
	Shape(const Point& pt);

protected:	
	Point _originPt;
};

