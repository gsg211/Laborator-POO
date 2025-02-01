#include "Shape.h"

class Rectangle: public Shape
{
private:
    double m_length;
    double  m_width;
public:
    Rectangle(/* args */);
    Rectangle(char* color,double length,double width);
    Rectangle(const Rectangle& r);
    ~Rectangle();

    double surfaceArea();
    double Perimeter();

    Rectangle& operator=(const Rectangle &r);

    void print();

};

