#include <iostream>
#include "mobilier.h"

int main()
{
    canapea c1((char *)"maro",6);
    canapea c2=c1;
    c2.afisare();
    return 0;
}