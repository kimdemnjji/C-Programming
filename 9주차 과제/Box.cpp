#include "Box.h"

void Box::display() {
	cout << "(" << length << ", " << width << ", " <<
		height << ")" << endl;
}

Box& Box::operator=(const Box& b2) { //자기자신의 레퍼런스를 반환함. 복사하기 때문에. 복사생성자 기념을 잘 이해해야 한다. 거의 유사하기 때문.
	this->length = b2.length;
	this->width = b2.width;
	this->height = b2.height; //깊은 복사를 하는 동작
	return *this;
}