#include <iostream>

using namespace std;

class Counter {
private:
	int value;
public:
	Counter() : value{ 0 } { };
	~Counter() { }
	int getValue() const;//value���� ��ȯ�ϴ� ������
	void setValue(int x); //value���� �����ϴ� ������
	Counter& operator++();	//���� ������ �ߺ�
	const Counter operator++(int i); //���� ������ �ߺ�.const�� ���� ���� �����ؾ� �Ѵ�.
};

