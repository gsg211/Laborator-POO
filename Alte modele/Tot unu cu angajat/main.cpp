#include <iostream>

#include "Shape.h"
#include "Rectangle.h"
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

    
    
    return 0;
}