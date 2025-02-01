#include <iostream>
#include "class.h"
using namespace std;


int main()
{
    SmartPointer<int> p(new int);
    *p=2;

    SmartPointer<int> p1(p);
    SmartPointer<int> p2(p);
    


    return 0;
}