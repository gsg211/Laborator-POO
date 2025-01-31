#include "Truckfleet.h"

using namespace cars;

Truckfleet::Truckfleet()
{
    size=0;
}

Truckfleet::~Truckfleet()
{
    for(int i=0;i<size;i++)
    {
        delete v[i];
    }
}

void Truckfleet::push(vehicle* item)
{
    if(size!=N)
    {
        v[size]=item;
        size++;
    }
    else
    {
        throw("vector plin");
    }
}
void Truckfleet::pop()
{
    if(size!=0)
    {
        delete v[size];
        size--;
    }
    else
    {
        throw("vector gol");
    }
}
vehicle* Truckfleet::operator[](int i)
{
    return v[i];
}
Truckfleet::iterator Truckfleet::begin()
{
    return Truckfleet::iterator (v);
}
Truckfleet::iterator Truckfleet::end()
{
    return Truckfleet::iterator ((v)+size);
}


Truckfleet::iterator::iterator(vehicle **p)
{
    this->p=p;
}

Truckfleet::iterator::~iterator()
{
    p=nullptr;
}


Truckfleet::iterator& Truckfleet::iterator::operator++()
{
    this->p++;
    return *this;
}
Truckfleet::iterator Truckfleet::iterator::operator++(int)
{
    Truckfleet::iterator temp(*this);
    this->p++;
    return temp;
}

bool Truckfleet::iterator::operator==(iterator &right)
{
    return this->p == right.p;
}
bool Truckfleet::iterator::operator!=(iterator &right)
{
    return this->p != right.p;
}


vehicle* Truckfleet::iterator::operator*()
{
    return *p;
}