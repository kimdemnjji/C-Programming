#include "MyArray.h"

MyArray::MyArray() {
	for (int i = 0; i < SIZE; i++)
		a[i] = 0;
}

int& MyArray::operator[](int i) {
	if (i >= SIZE || i < 0) {
		cout << "잘못된 인덱스:";
		return a[0];
	}
	return a[i];
}