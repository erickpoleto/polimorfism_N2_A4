#include "Retangle.hpp"

Retangle::Retangle(float width, float length) : GeometricForm()
{
    this->width = width;
    this->length = length;
}

float Retangle::calcArea()
{
    return width * length;
}