#include <iostream>
#include <string> //string�̶�� �ϴ� �ڷ����� Ŭ������ ���� ����. string ���̺귯��.
#include "MyVector.h"

using namespace std;

int main() { //���ʿ� ���� ���� break point. f10�� ���� ���� �Ѿ��. �� ���忡�� f11�� �Լ��� ȣ���ߴٸ�, �Լ��� ��� ���ư����� �����ִ� ����Ű. 
	MyVector v1(1.0, 2.0), v2(3.0, 4.0);
	MyVector v3 = v1 + v2; //���� + �����ڰ� �������� �� ��� �����ϴ��� . �� '+' �����ڴ� operator �Լ��� ȣ���ϰ� �ִ±���. => ������ �ߺ��� ������ �� �� �ִ�.
	
	cout << v1.toString() << "+" << v2.toString() << "=" << v3.toString() << endl;

	return 0;
}