#include "truck.h"
using namespace cars;

truck::truck(/* args */): cargo_vehicle()
{
    truck_type=UNKNOWN;
}

truck::~truck()
{
    truck_type=UNKNOWN;
}


truck::truck(char *brand_name, double cargo_load,int passagers,type truck_type):cargo_vehicle(brand_name,cargo_load,passagers)
{
    this->truck_type=truck_type;
}
truck::truck(const truck &t):cargo_vehicle(t)
{
    this->truck_type=t.truck_type;

}

truck& truck::operator=(const truck& t)
{
    if(this==&t)
    {
        return *this;
    }
    
    return *this;
}

char* truck::get_type()
{
    switch (truck_type)
    {
    case tank:
        return (char*)"tank";
    case flat_bed:
        return (char*)"flat bed";
    case box:
        return (char*)"box";

    }
    return (char*)"UNKNOWN";
}

void truck::print()
{
    cargo_vehicle::print();
    cout<<"Truck type: "<<get_type()<<" truck";
}

void truck::read()
{
    cargo_vehicle::read();
    cout<<"Type-> choose option: \n\n";
    cout<<"1: tank\n2: flat-bed\n3: box\n";
    cout<<"Option: ";
    int option;
    cin>>option;
    cin.ignore(1,'\n');
    switch (option)
    {
        case 1:
            truck_type=tank;
            break;
        case 2:
            truck_type=flat_bed;
            break;
        case 3:
            truck_type=box;
            break;
        default:
            truck_type=UNKNOWN;
            break;
    }
}

char* truck::get_object_type()
{
    return (char*)"truck";
}

vehicle* truck::buildObj(char *brand_name, double cargo_load,int passagers,type truck_type)
{
    vehicle* p=new truck(brand_name,cargo_load,passagers,truck_type);
    return p;
}