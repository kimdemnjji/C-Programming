#include <iostream>
#include "Counter.h"

using namespace std;



int main()
{
	Counter c;
	cout << "ī������ ��: " << c.getValue() << endl; //0 ���
	++c;	//������ �ߺ� ����. (++(++c))�� ����. 
	cout << "ī������ ��: " << c.getValue() << endl; //1 ���
	cout << "ī������ ��: " << c++.getValue() << endl; //1 ���
	cout << "ī������ ��: " << c.getValue() << endl; //2 ���
	return 0;
}