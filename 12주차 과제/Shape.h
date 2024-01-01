#pragma once
#include "Point.h"

class Shape
{
public:
	void Move(COOR_T x, COOR_T y);
	virtual void Draw() const = 0;  //���������Լ�
	virtual double getArea() const = 0; //���������Լ�

	Shape();
	Shape(COOR_T x, COOR_T y);
	Shape(const Point& pt);

protected:	
	Point _originPt;
};

