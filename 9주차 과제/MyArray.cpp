#include "MyArray.h"

MyArray::MyArray() {
	for (int i = 0; i < SIZE; i++)
		a[i] = 0;
}

int& MyArray::operator[](int i) {
	if (i >= SIZE || i < 0) {
		cout << "�߸��� �ε���:";
		return a[0];
	}
	return a[i];
}