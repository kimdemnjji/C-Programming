#include "Box.h"

Box::Box(double l, double w, double h) : length{ l }, width{ w }, height{ h } {}

double Box::getVolume() const {
    return length * width * height;
}

Box Box::operator+(const Box& box) const { // ���̰����� ���ϴ� + ������ �ߺ� �Լ�. ���ڸ� �״´�.
    double newLength = this->length;
    double newWidth = this->width;
    double newHeight = this->height + box.height;
    return Box(newLength, newWidth, newHeight); //Box��ü���� ��ȯ����.
}

bool Box::operator==(const Box& box) const {
    return this->getVolume() == box.getVolume(); // ���ǿ� ���� �� ������ �ߺ� �Լ�. boolean������ ��ȯ�Ѵ�.
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

Box& Box::operator++() { //����������
    length++;
    width++;
    height++; //������ �Ӽ����� +1�� �մϴ�.
    return *this; //��ü �ڽ��� ��ȯ. ���� ������Ű���� �ٸ� ������ ������ �� �����ϴ�.
}

Box Box::operator++(int) { //���� ������. ���� �ϳ��� �Ű������� �޽��ϴ�.
    Box temp = *this; //���� ���¸� �ӽ� ��ü�� �����մϴ�.
    length++;
    width++;
    height++;
    return temp; //���� ���¸� �����ִ� ��ü�� ��ȯ�մϴ�.
}

void printBox(const Box& box) {
    std::cout << "������ ����: " << box.length << ", ������ �ʺ�: " << box.width << ", ������ ����: " << box.height
        << ", ������ ����: " << box.getVolume() << std::endl;
    //Box ��ü�� ����ϴ� �Լ�.������ �Լ��� Box Ŭ���� ������ ���� ����
}
