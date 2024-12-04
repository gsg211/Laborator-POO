#include <iostream>
#include "electrocasnice.h"
using namespace electrocasnice;

int main()
{
    cuptor c1((char*)"Philips",200);
    c1.afisare();
    cuptor c2(c1);
    c2.afisare();
    cuptor c3((char*)"ex");
    c3=c2;
    c3.citire();
    c3.afisare();
    return 0;
}