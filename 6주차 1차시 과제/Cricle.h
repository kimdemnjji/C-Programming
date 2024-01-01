#pragma once
#include <iostream>
using namespace std;

class Circle
{
public:
	Circle();
	Circle(int x, int y, int r);

	void setX(int x);
	void setY(int y);
	void setPoint(int x, int y);
	int getX();
	int getY();

	void setRadius(int r);
	int getRadius();

	void print();

private:
	int x, y;
	int radius;

	int MAX_X = 1920; //정적변수로 정해놓음. const로 만듬. 그냥 멤버 변수로 만들었다면? 사용자가 최대 크기 변경 가능.
	int MIN_X = 0;

	int MAX_Y = 1080;
	int MIN_Y = 0;
};

