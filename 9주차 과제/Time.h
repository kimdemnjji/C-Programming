#include <iostream>
#include <string> //string�̶�� �ϴ� �ڷ����� Ŭ������ ���� ����. string ���̺귯��.

using namespace std;

class Time
{
	int hour, min, sec;
public:
	Time(int h = 0, int m = 0, int s = 0) : hour(h), min(m), sec(s) { }
	bool operator==(Time& t2);
	bool operator!=(Time& t2);
};
