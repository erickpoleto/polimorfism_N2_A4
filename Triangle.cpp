#include "Triangle.hpp"

Triangle::Triangle(float base, float height)
{
    this->base = base;
    this->height = height;
}

float Triangle::calcArea()
{
    return 0.5 * height * base;
}