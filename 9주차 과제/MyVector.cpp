#include "MyVector.h"


MyVector MyVector::operator+(const MyVector& v2) { //+ 연산자가 사용됐을 때 사용되는 함수를 정의를 했다. 매개변수는 참조자
	MyVector v;
	v.x = this->x + v2.x;//내가 가진 x 와 피연산자 v2의 x를 더했음.
	v.y = this->y + v2.y;//마찬가지
	return v; //v를 반환하였음
}

string MyVector::toString() {
	return "(" + to_string(x) + "," + to_string(y) + ")";
}