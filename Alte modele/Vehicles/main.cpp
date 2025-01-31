#include <iostream>
#include "truck.h"
#include "Truckfleet.h"
using namespace std;
using namespace cars;


int main()
{
    truck t;
    vehicle* t1=truck::buildObj((char*)"Suzuki",200,7,truck::box);
    vehicle* t2=truck::buildObj((char*)"Honda",5000,2,truck::tank);
    vehicle* t3=truck::buildObj((char*)"Suzuki",200,3,truck::flat_bed);

    Truckfleet fleet;
    fleet.push(t1);
    fleet.push(t2);
    fleet.push(t3);

    Truckfleet::iterator i=fleet.begin();
    Truckfleet::iterator end=fleet.end();
    for(;i!=end;i++)
    {
        (*i)->print();
        cout<<"\n";
    }
    //t.read();
    //t.print();
    return 0;
}