#include <iostream>
#include "Box.h"
using namespace std;


int main()
{
	Box b1(30.0, 30.0, 60.0), b2;
	b1.display();
	b2 = b1; //���� ������ ȣ��
	b2.display();
	return 0;
}
