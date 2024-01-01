#include <iostream>
#include <string> //string이라고 하는 자료형을 클래스로 만든 것임. string 라이브러리.
#include "MyVector.h"

using namespace std;

int main() { //왼쪽에 빨간 점이 break point. f10이 다음 열로 넘어가기. 그 문장에서 f11은 함수를 호출했다면, 함수가 어떻게 돌아가는지 보여주는 단축키. 
	MyVector v1(1.0, 2.0), v2(3.0, 4.0);
	MyVector v3 = v1 + v2; //실제 + 연산자가 동작했을 때 어떻게 동작하느냐 . 이 '+' 연산자는 operator 함수를 호출하고 있는구나. => 연산자 중복의 동작을 알 수 있다.
	
	cout << v1.toString() << "+" << v2.toString() << "=" << v3.toString() << endl;

	return 0;
}