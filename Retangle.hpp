#ifndef Retangle_hpp
#define Retangle_hpp

#include<iostream>
#include "GeometricForm.hpp"
using namespace std;


class Retangle : GeometricForm
{
public:
    Retangle(float width, float length);
    
    float calcArea();

private:
    float width;
    float length;
};

#endif