#include "Box.h"

Box::Box(double l, double w, double h) : length{ l }, width{ w }, height{ h } {}

double Box::getVolume() const {
    return length * width * height;
}

Box Box::operator+(const Box& box) const { // 높이값만을 더하는 + 연산자 중복 함수. 상자를 쌓는다.
    double newLength = this->length;
    double newWidth = this->width;
    double newHeight = this->height + box.height;
    return Box(newLength, newWidth, newHeight); //Box객체값을 반환해줌.
}

bool Box::operator==(const Box& box) const {
    return this->getVolume() == box.getVolume(); // 부피에 대한 비교 연산자 중복 함수. boolean형으로 반환한다.
}

bool Box::operator<(const Box& box) const {
    return this->getVolume() < box.getVolume();
}

bool Box::operator>(const Box& box) const {
    return this->getVolume() > box.getVolume();
}

bool Box::operator<=(const Box& box) const {
    return this->getVolume() <= box.getVolume();
}

bool Box::operator>=(const Box& box) const {
    return this->getVolume() >= box.getVolume();
}

Box& Box::operator++() { //전위연산자
    length++;
    width++;
    height++; //각각의 속성값에 +1을 합니다.
    return *this; //객체 자신을 반환. 값을 증가시키고나서 다른 연산을 수행할 때 유용하다.
}

Box Box::operator++(int) { //후위 연산자. 정수 하나를 매개변수로 받습니다.
    Box temp = *this; //현재 상태를 임시 객체에 저장합니다.
    length++;
    width++;
    height++;
    return temp; //이전 상태를 갖고있는 객체를 반환합니다.
}

void printBox(const Box& box) {
    std::cout << "상자의 길이: " << box.length << ", 상자의 너비: " << box.width << ", 상자의 높이: " << box.height
        << ", 상자의 부피: " << box.getVolume() << std::endl;
    //Box 객체를 출력하는 함수.프렌드 함수로 Box 클래스 내에서 사용될 예정
}
