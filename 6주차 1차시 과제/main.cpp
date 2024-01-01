#include <iostream>
#include<vector>
using namespace std;
#include "Cricle.h"
#include <algorithm>

bool compare(Circle& p, Circle& q) {
	return p.getRadius() < q.getRadius();
}

int main() {
	vector<Circle> objArray ;

	for (int i = 0; i < 10; i++) {
		Circle obj(rand() % 300, rand() % 300, rand() % 100);
		objArray.push_back(obj);
	}
	for (Circle& c : objArray)
		c.print(); //sort 거치기 전

	cout << endl;
	sort(objArray.begin(), objArray.end(), compare);
	for (Circle& c : objArray)
		c.print(); //sort 거친 후 

	return 0;
}