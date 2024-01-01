#include <iostream>

using namespace std;

class Counter {
private:
	int value;
public:
	Counter() : value{ 0 } { };
	~Counter() { }
	int getValue() const;//value값을 반환하는 접근자
	void setValue(int x); //value값을 설정하는 설정자
	Counter& operator++();	//전위 연산자 중복
	const Counter operator++(int i); //후위 연산자 중복.const를 붙인 이유 이해해야 한다.
};

