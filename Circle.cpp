#include "Circle.hpp"
#include <math.h>

Circle::Circle(float radius) : GeometricForm()
{
    this->radius = radius;
}

float Circle::calcArea()
{
    float pi = 3.14;
    return pi * pow(radius, 2);
}