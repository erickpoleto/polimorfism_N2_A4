#ifndef Triangle_hpp
#define Triangle_hpp

#include<iostream>
#include "GeometricForm.hpp"
using namespace std;


class Triangle : GeometricForm
{
public:
    Triangle(float base, float height);
    
    float calcArea();

private:
    float base; 
    float height;
};
#endif