#include <iostream>
#include <string> //string�̶�� �ϴ� �ڷ����� Ŭ������ ���� ����. string ���̺귯��.

using namespace std;

class MyVector {
private:
	double x, y;
public:
	MyVector(double x = 0.0, double y = 0.0) : x(x), y(y) {}
	string toString();
	MyVector operator+(const MyVector& v2);//��ȯ���� �� �ڽŰ� �Ȱ��� Ÿ��. �� ���� ���� ���� Ÿ���� �־�� �Ѵ�.
};
