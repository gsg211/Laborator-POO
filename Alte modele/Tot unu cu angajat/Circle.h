#include "Shape.h"
#define pi 3.14
class Circle: public Shape
{
private:
    double m_Radius;
public:
    Circle(/* args */);
    Circle(char* color,double radius);
    Circle(const Circle& r);
    ~Circle();

    double surfaceArea();
    double Perimeter();

    Circle& operator=(const Circle &r);

    void print();

};

