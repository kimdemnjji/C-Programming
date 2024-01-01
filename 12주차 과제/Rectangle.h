#pragma once
#include "Shape.h"
class Rectangle : public Shape {
public:
    void Resize(COOR_T width, COOR_T height);
    void Draw() const;
    double getArea() const;

    Rectangle();
    Rectangle(COOR_T x, COOR_T y,
        COOR_T width, COOR_T height);

protected:
    COOR_T _width;
    COOR_T _height;
};

