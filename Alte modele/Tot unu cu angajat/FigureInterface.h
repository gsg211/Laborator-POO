#pragma once
#include <iostream>
#include <cstring>
using namespace std;

class FigureInterface
{
public:
    FigureInterface();
    virtual ~FigureInterface()=0;

    virtual double surfaceArea()=0;
    virtual double Perimeter()=0;

    virtual void setColor(char* color)=0;
    virtual char* getColor()=0;

    virtual void print();
};