#include "Cricle.h"

Circle::Circle() : x(0), y(0), radius(0) {	}
Circle::Circle(int x, int y, int r) {	
	setPoint(x, y);
	setRadius(r);
}

void Circle::setX(int x) { //설정자
	if (x < MIN_X) this->x = MIN_X;
	else if (x > MAX_X) this->x = MAX_X;
	else this->x = x;
}
void Circle::setY(int y) {
	if (y < MIN_Y) this->y = MIN_Y;
	else if (y > MAX_Y) this->y = MAX_Y;
	else this->y = y;
}

void Circle::setPoint(int x, int y) {
	setX(x);
	setY(y);
}

int Circle::getX() { return x; } //접근자
int Circle::getY() { return y; }

void Circle::setRadius(int r) {
	if (r < MIN_X) radius = MIN_X;
	else if (r > MAX_X / 2) radius = MAX_X / 2;
	else radius = r;
}
int Circle::getRadius() { return radius; }


void Circle::print() {
	cout << "반지름: " << radius << " @(" << x <<
		", " << y << ")" << endl;
}