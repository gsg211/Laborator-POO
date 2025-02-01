#include "Shape.h"

Shape::Shape(/* args */)
{
    m_Shapecolor=nullptr;
    counter++;
}

Shape::~Shape()
{
    cout<<"shape destructor called\n";
    if(m_Shapecolor!=nullptr)
    {
        delete[] m_Shapecolor;
        m_Shapecolor=nullptr;
    }
    counter--;
}

Shape::Shape(char* color)
{
    if(color!=nullptr)
    {
        m_Shapecolor=new char[strlen(color)+1];
        strcpy_s(m_Shapecolor,strlen(color)+1,color);
    }
    counter++;
}

Shape::Shape(const Shape& g)
{
    if(g.m_Shapecolor!=nullptr)
    {
        m_Shapecolor=new char[strlen(g.m_Shapecolor)+1];
        strcpy_s(m_Shapecolor,strlen(g.m_Shapecolor)+1,g.m_Shapecolor);
    }
    counter++;
}

double Shape::surfaceArea()
{
    return 0;
}
double Shape::Perimeter()
{
    //
    return 0;
}
void Shape::setColor(char* color)
{
    if(m_Shapecolor!=nullptr)
    {
        delete[] m_Shapecolor;
    }
    if(color!=nullptr)
    {
        m_Shapecolor=new char[strlen(color)+1];
        strcpy_s(m_Shapecolor,strlen(color)+1,color);
    }
}
char* Shape::getColor()
{
    return m_Shapecolor;
}
void Shape::print()
{
    if(m_Shapecolor!=nullptr)
    {
        cout<<"Color: "<<m_Shapecolor<<"\n";
    }
    else
    {
        cout<<"Color: UNAVAILABLE"<<"\n";
    }
}
Shape& Shape::operator=(const Shape& g)
{
    if(this==&g)
    {
        return *this;
    }

   if(m_Shapecolor!=nullptr)
    {
        delete[] m_Shapecolor;
    }

    if(g.m_Shapecolor!=nullptr)
    {
        m_Shapecolor=new char[strlen(g.m_Shapecolor)+1];
        strcpy_s(m_Shapecolor,strlen(g.m_Shapecolor)+1,g.m_Shapecolor);
    }

    return *this;
}

int Shape::getCounter()
{
    return counter;
}