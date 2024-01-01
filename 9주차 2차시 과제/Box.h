#pragma once
#include <iostream>

class Box {
    double length, width, height; // ������ ����, ����, ����

public:
    Box(double l, double w, double h);

    double getVolume() const; // ���� ���� ��ȯ�ϴ� ������

    Box operator+(const Box& box) const; // 1. + ������

    bool operator==(const Box& box) const; // 2. ��ȣ �� ������
    bool operator<(const Box& box) const; // < ������
    bool operator>(const Box& box) const; // > ������
    bool operator<=(const Box& box) const; // <= ������
    bool operator>=(const Box& box) const; // >= ������

    Box& operator++(); // ������ ���� ������
    Box operator++(int); // ������ ���� ������

    friend void printBox(const Box& box); // ������ �Լ� ����
};

void printBox(const Box& box); // ������ �Լ� ����
