#ifndef Circle_hpp
#define Circle_hpp

#include<iostream>
#include "GeometricForm.hpp"
using namespace std;


class Circle : GeometricForm
{
public:
    Circle(float radius);

    float calcArea();
    
private:
    float radius;
};

#endif