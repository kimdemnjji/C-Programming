#pragma once
#include <iostream>

class Box {
    double length, width, height; // 상자의 길이, 넓이, 높이

public:
    Box(double l, double w, double h);

    double getVolume() const; // 부피 값을 반환하는 접근자

    Box operator+(const Box& box) const; // 1. + 연산자

    bool operator==(const Box& box) const; // 2. 등호 비교 연산자
    bool operator<(const Box& box) const; // < 연산자
    bool operator>(const Box& box) const; // > 연산자
    bool operator<=(const Box& box) const; // <= 연산자
    bool operator>=(const Box& box) const; // >= 연산자

    Box& operator++(); // 전위형 증가 연산자
    Box operator++(int); // 후위형 증가 연산자

    friend void printBox(const Box& box); // 프렌드 함수 선언
};

void printBox(const Box& box); // 프렌드 함수 선언
