#pragma once
#include <iostream>

using namespace std;
const int SIZE = 10;

class MyArray {
private:
	int a[SIZE];
public:
	MyArray();
	int& operator[](int i);
};
