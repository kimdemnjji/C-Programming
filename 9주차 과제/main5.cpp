#include <iostream>
#include "MyArray.h"

using namespace std;
const int SIZE = 10;


int main() {
	MyArray A;
	A[3] = 9;
	cout << "A[3]= " << A[3] << endl;
	cout << "A[16]= " << A[16] << endl;
	return 0;
}