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

	int MAX_X = 1920; //���������� ���س���. const�� ����. �׳� ��� ������ ������ٸ�? ����ڰ� �ִ� ũ�� ���� ����.
	int MIN_X = 0;

	int MAX_Y = 1080;
	int MIN_Y = 0;
};

