#include <iostream>
#include "Counter.h"

using namespace std;



int main()
{
	Counter c;
	cout << "카운터의 값: " << c.getValue() << endl; //0 출력
	++c;	//연산자 중복 가능. (++(++c))도 가능. 
	cout << "카운터의 값: " << c.getValue() << endl; //1 출력
	cout << "카운터의 값: " << c++.getValue() << endl; //1 출력
	cout << "카운터의 값: " << c.getValue() << endl; //2 출력
	return 0;
}