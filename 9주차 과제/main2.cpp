#include <iostream>
#include <string> //string�̶�� �ϴ� �ڷ����� Ŭ������ ���� ����. string ���̺귯��.
#include "Time.h"
using namespace std;

int main()
{
	Time t1(1, 2, 3), t2(1, 2, 3);
	// ���� ������ 1, 0�� �ƴ϶� true, false�� ����ϵ��� �����Ѵ�.
	cout.setf(cout.boolalpha);
	cout << (t1 == t2) << endl; //������ �ߺ� Ȱ������ ������ ��� �����Ƿ� true ���
	cout << (t1 != t2) << endl; //������ �ߺ� Ȱ������ ������ ��� ���� �����Ƿ� false ���
	return 0;
}