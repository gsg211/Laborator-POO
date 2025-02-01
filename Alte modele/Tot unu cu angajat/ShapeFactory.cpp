#include "ShapeFactory.h"


Rectangle* ShapeFactory::CreateRectangle(char* color,double length,double width)
{
    return new Rectangle(color,length,width);
}
Circle* ShapeFactory::CreateCircle(char* color,double radius)
{
    return new Circle(color,radius);
}
