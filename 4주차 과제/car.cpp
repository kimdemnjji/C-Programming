#include "car.h"

int Car::getSpeed() {
	return speed;
}

void Car::setSpeed(int s) {
	if (s < 0) speed = 0;
	else if (s < 300) speed = 300;
	else
		speed = s;
}