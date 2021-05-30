#ifndef GeometricForm_hpp
#define GeometricForm_hpp

#include<iostream>
using namespace std;


class GeometricForm
{
public:
    GeometricForm();
    
    virtual float calcArea() = 0;

private:
    float area;
};

#endif