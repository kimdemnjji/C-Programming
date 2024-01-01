#include "Counter.h"

int Counter::getValue() const {
	return value;
}

void Counter::setValue(int x) {
	value = x;
}
Counter& Counter::operator++() {
	++value; //�ϴ� value�� +1 ����. 
	return *this; //�� �ڽ��� ����Ű�� ��.�� �ڽ��� �������� ��Ƽ� ���۷����� ��ȯ����. 
}
const Counter Counter::operator++(int i) {
	Counter temp = { *this }; // ������ ���¸� �����Ѵ�.
	++value;
	return temp; //temp�� ��ȯ �� �Ҹ��. 
}