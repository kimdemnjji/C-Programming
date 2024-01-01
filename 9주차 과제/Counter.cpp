#include "Counter.h"

int Counter::getValue() const {
	return value;
}

void Counter::setValue(int x) {
	value = x;
}
Counter& Counter::operator++() {
	++value; //일단 value를 +1 했음. 
	return *this; //나 자신을 가르키는 것.나 자신을 원본으로 삼아서 레퍼런스를 반환해줌. 
}
const Counter Counter::operator++(int i) {
	Counter temp = { *this }; // 현재의 상태를 저장한다.
	++value;
	return temp; //temp는 반환 후 소멸됨. 
}