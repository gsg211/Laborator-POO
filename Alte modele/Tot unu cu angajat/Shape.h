#pragma once
#include "FigureInterface.h"
class Shape:public FigureInterface
{
protected:
    char* m_Shapecolor;

    static int counter;

public:
    Shape(/* args */);
    Shape(char* color);
    Shape(const Shape& g);
    virtual ~Shape()=0;

    virtual double surfaceArea()=0;
    virtual double Perimeter()=0;

    void setColor(char* color);
    char* getColor();

    virtual void print()=0;

    virtual Shape& operator=(const Shape& g);

    static int getCounter();

};

