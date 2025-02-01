#include "Circle.h"

Circle::Circle(/* args */):Shape()
{
    m_Radius=0;

}

Circle::~Circle()
{
    m_Radius=0;

}

Circle::Circle(char* color,double radius):Shape(color)
{
    m_Radius=radius;

}

Circle::Circle(const Circle& r):Shape(r)
{
    m_Radius=r.m_Radius;

}



double Circle::surfaceArea()
{
    return pi*m_Radius*m_Radius;
}

double Circle::Perimeter()
{
    return 2*m_Radius*pi;
}


Circle& Circle::operator=(const Circle &r)
{
    if(this==&r)
    {
        return *this;
    }
    Shape::operator=(r);

    m_Radius=r.m_Radius;



    return*this;
}

void Circle::print()
{
    cout<<"\n<---Printing Circle--->\n";
    Shape::print();
    cout<<"Radius: "<<m_Radius<<"\n";
    cout<<"Surface Area: "<<this->surfaceArea()<<"\n";
    cout<<"Perimiter: "<<Perimeter()<<"\n";
}

