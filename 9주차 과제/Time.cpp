#include "Time.h"

bool Time::operator==(Time& t2) { //���� ��� true ��ȯ
	return (hour == t2.hour &&
		min == t2.min &&
		sec == t2.sec);
}
bool Time::operator!=(Time& t2) { //���� �ִ� operatorȣ��. this�� t2 �� �Ű������� �༭ ���ϰ� !return.
	return !(*this == t2);
}