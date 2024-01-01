#include <iostream>
#include <string> //string이라고 하는 자료형을 클래스로 만든 것임. string 라이브러리.

using namespace std;

class MyVector {
private:
	double x, y;
public:
	MyVector(double x = 0.0, double y = 0.0) : x(x), y(y) {}
	string toString();
	MyVector operator+(const MyVector& v2);//반환값은 나 자신과 똑같은 타입. 줄 때도 나와 같은 타입을 주어야 한다.
};
