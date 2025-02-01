#include "Rectangle.h"

Rectangle::Rectangle(/* args */):Shape()
{
    m_length=0;
    m_width=0;
}

Rectangle::~Rectangle()
{
    cout<<"Rectangle destructor\n";
    m_length=0;
    m_width=0;
}

Rectangle::Rectangle(char* color,double length,double width):Shape(color)
{
    m_length=length;
    m_width=width;
}

Rectangle::Rectangle(const Rectangle& r):Shape(r)
{
    m_length=r.m_length;
    m_width=r.m_width;
}



double Rectangle::surfaceArea()
{
    return m_length*m_width;
}

double Rectangle::Perimeter()
{
    return 2*m_length+2*m_width;
}


Rectangle& Rectangle::operator=(const Rectangle &r)
{
    if(this==&r)
    {
        return *this;
    }
    Shape::operator=(r);

    m_length=r.m_length;
    m_width=r.m_width;


    return*this;
}

void Rectangle::print()
{
    cout<<"\n<---Printing Rectangle--->\n";
    Shape::print();
    cout<<"Length: "<<m_length<<"\n";
    cout<<"Width: "<<m_width<<"\n";
    cout<<"Surface Area: "<<this->surfaceArea()<<"\n";
    cout<<"Perimiter: "<<Perimeter()<<"\n";
}

