#include <iostream>
#include "car.h"
using namespace std;

int main() {
	Car myCar;
	myCar.getSpeed(80);
	cout << "���� �ӵ��� ? " << myCar.getSpeed()<< endl;

	return 0;
}