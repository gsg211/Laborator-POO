#include <iostream>
#include "truck.h"

using namespace std;
using namespace cars;


int main()
{
    truck t;
    vehicle* t1=truck::buildObj((char*)"Suzuki",200,3,truck::box);
    t1->print();
    //t.read();
    //t.print();
    return 0;
}