#include <iostream>
using namespace std;

class Box
{
private:
	double length, width, height;
public:
	Box(double l = 0.0, double w = 0.0, double h = 0.0)
		: length{ l }, width{ w }, height{ h } { }
	void display();
	Box& operator=(const Box& b2);
};
