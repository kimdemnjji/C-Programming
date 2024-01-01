#pragma once
#include <iostream>
#include <string>
using namespace std;

typedef int COOR_T; //int�� typedef �� ��������.
enum {MIN_X = 0, MAX_X = 1920, MIN_Y = 0, MAX_Y = 1080};

class Point
{
public:
	//������
	Point();
	Point(COOR_T x, COOR_T y);
	Point(const Point& pt);

	//������
	COOR_T getX() const { return _x; }
	COOR_T getY() const { return _y; }
	//������
	void setX(COOR_T value);
	void setY(COOR_T value);

	//����Լ�
	void print() const;
	void offset(COOR_T x_delta, COOR_T y_delta);
	void offset(const Point& pt);
	string toString() const {
		return "(" + to_string(_x) + ", " + to_string(_y) + ")";
	}

	Point operator+(const Point& pt2) const;
	Point operator-(const Point& pt2) const;

private:
	//�������
	COOR_T _x, _y;
};

inline void Point::setX(COOR_T value) {
	if (value < MIN_X) _x = MIN_X;
	else if (value > MAX_X) _x = MAX_X;
	else _x = value;
}

inline void Point::setY(COOR_T value) {
	if (value < MIN_Y) _y = MIN_Y;
	else if (value > MAX_Y) _y = MAX_Y;
	else _y = value;
}