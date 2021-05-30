#include "Circle.hpp"
#include "Triangle.hpp"
#include "Retangle.hpp"

int main()
{
    Circle circle(5.5);
    Triangle triangle(4.2, 5.4);
    Retangle retangle(4.2, 5.4);

    cout << "Circle: " << circle.calcArea() << endl;
    cout << "Triangle: " << triangle.calcArea() << endl;
    cout << "Retangle: " << retangle.calcArea() << endl;
}