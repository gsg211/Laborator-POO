#pragma once

#include "Shape.h"
#include "Rectangle.h"
#include "Circle.h"

class ShapeFactory
{
public:
    static Rectangle* CreateRectangle(char* color,double length,double width);
    static Circle* CreateCircle(char* color,double radius);
};
