#pragma once
#include "Shape.h"
class Triangle : public Shape{
public:
    void Resize(COOR_T base, COOR_T height);
    void Draw() const;
    double getArea() const;

    Triangle();
    Triangle(COOR_T x, COOR_T y, COOR_T base, COOR_T height);

protected:
    COOR_T _base;
    COOR_T _height;

};

