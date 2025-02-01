#include <iostream>

#include "Shape.h"
#include "Rectangle.h"
#include "Circle.h"
#include "ShapeFactory.h"

int Shape::counter=0;

using namespace std;

int main()
{
    /* Inainte de abstractizare
    Shape s,s1((char*)"Blue"),s2(s1),s3;
    s.print();
    cout<<"\n";
    s1.print();
    cout<<"\n";
    s2.print();
    s.setColor((char*)"Pink");
    s3=s;
    cout<<"\n";
    s3.print();

    */
    Rectangle r,r1((char*)"Blue",200,30),r2(r1),r3;
    r.print();
    cout<<"\n";
    r1.print();
    cout<<"\n";
    r2.print();
    r.setColor((char*)"Pink");
    r3=r;
    cout<<"\n";
    r3.print();


    Circle c,c1((char*)"Yellow",79),c2(c1),c3;
    c.print();
    cout<<"\n";
    c1.print();
    cout<<"\n";
    c2.print();
    c.setColor((char*)"Pink");
    c3=c;
    cout<<"\n";
    c3.print();

    cout<<"\n\n\n";

    Shape *pr=ShapeFactory::CreateRectangle((char*)"Auriu",20,3);
    Shape *pc=ShapeFactory::CreateCircle((char*)"orange",200);

    pr->print();
    pc->print();
    cout<<"\n\n\n";

    return 0;
}