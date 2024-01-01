#pragma once
#include "Shape.h"

class Circle : public Shape{
public:
    void Draw() const;
    void SetRedius(COOR_T radius);
    double getArea() const;

    Circle();
    Circle(COOR_T x, COOR_T y, COOR_T radius);

protected:
    COOR_T _radius;
};

