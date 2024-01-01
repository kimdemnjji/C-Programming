#include <iostream>
#include <string> //string이라고 하는 자료형을 클래스로 만든 것임. string 라이브러리.

using namespace std;

class Time
{
	int hour, min, sec;
public:
	Time(int h = 0, int m = 0, int s = 0) : hour(h), min(m), sec(s) { }
	bool operator==(Time& t2);
	bool operator!=(Time& t2);
};
