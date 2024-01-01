#include <iostream>
#include "Point.h"
#include "Circle.h"
#include "Rectangle.h"
#include "Triangle.h"

int main()
{
    Shape* shapes[5] = { NULL };

    shapes[0] = new Circle(100, 100, 50);
    shapes[1] = new Rectangle(200, 150, 50, 200);
    shapes[2] = new Rectangle(300, 200, 150, 50);
    shapes[3] = new Circle(400, 100, 50);
    shapes[4] = new Triangle(500, 250, 150, 100);

    double sumArea = 0;

    for (int i = 0; i < 5; ++i) {
        shapes[i]->Draw();
        sumArea += shapes[i]->getArea();
    }

    cout << "전체 도형의 면적의 합: " << sumArea << endl;

    for (int i = 0; i < 5; ++i) {
        delete shapes[i];
        shapes[i] = NULL;
    }
    
    return 0;
}
