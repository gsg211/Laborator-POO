#include "cube.h"



cube::~cube()
{
    side=0;
}

cube::cube(const char* owner, size_t sides):object(owner)
{
    side=sides;
}
cube::cube(const cube& c): object(c)
{   
    side=c.side;
}
cube::cube(cube&& c):object(move(c))
{
    swap(side,c.side);
}
cube& cube::operator=(const cube& c)
{
    if(this==&c)
    {
        return*this;
    }
    object::operator=(c);
    side=c.side;
    return *this;
}
cube& cube::operator=(cube&& c)
{
    if(this==&c)
    {
        return*this;
    }

    swap(side,c.side);
    return *this;
}
Entity* cube::getEntity(const char* EntOwner) 
{
    return this; // i dont iknow
}
int cube::addEntity(Entity* ent) 
{
    return -4;
}
void cube::WriteInfo()
{
    object::WriteInfo();
}

void cube::visit()const 
{
    cout<<this->GetOwner()<<"."<<side<<"\n";
}
