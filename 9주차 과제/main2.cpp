#include <iostream>
#include <string> //string이라고 하는 자료형을 클래스로 만든 것임. string 라이브러리.
#include "Time.h"
using namespace std;

int main()
{
	Time t1(1, 2, 3), t2(1, 2, 3);
	// 참과 거짓을 1, 0이 아니라 true, false로 출력하도록 설정한다.
	cout.setf(cout.boolalpha);
	cout << (t1 == t2) << endl; //연산자 중복 활용으로 연산한 결과 같으므로 true 출력
	cout << (t1 != t2) << endl; //연산자 중복 활용으로 연산한 결과 같지 않으므로 false 출력
	return 0;
}