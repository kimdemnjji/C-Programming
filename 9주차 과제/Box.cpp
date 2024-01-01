#include "Box.h"

void Box::display() {
	cout << "(" << length << ", " << width << ", " <<
		height << ")" << endl;
}

Box& Box::operator=(const Box& b2) { //�ڱ��ڽ��� ���۷����� ��ȯ��. �����ϱ� ������. ��������� ����� �� �����ؾ� �Ѵ�. ���� �����ϱ� ����.
	this->length = b2.length;
	this->width = b2.width;
	this->height = b2.height; //���� ���縦 �ϴ� ����
	return *this;
}