#include "MyVector.h"


MyVector MyVector::operator+(const MyVector& v2) { //+ �����ڰ� ������ �� ���Ǵ� �Լ��� ���Ǹ� �ߴ�. �Ű������� ������
	MyVector v;
	v.x = this->x + v2.x;//���� ���� x �� �ǿ����� v2�� x�� ������.
	v.y = this->y + v2.y;//��������
	return v; //v�� ��ȯ�Ͽ���
}

string MyVector::toString() {
	return "(" + to_string(x) + "," + to_string(y) + ")";
}