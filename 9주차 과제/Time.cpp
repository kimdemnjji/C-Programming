#include "Time.h"

bool Time::operator==(Time& t2) { //같을 경우 true 반환
	return (hour == t2.hour &&
		min == t2.min &&
		sec == t2.sec);
}
bool Time::operator!=(Time& t2) { //위에 있는 operator호출. this와 t2 를 매개변수로 줘서 비교하고 !return.
	return !(*this == t2);
}