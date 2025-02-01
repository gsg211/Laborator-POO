#pragma once
#include <iostream>
#include <cstring>

using namespace std;

class Entity
{

public:
    virtual const char* GetOwner()const=0;
    virtual void WriteInfo()=0;

    virtual void visit() const =0;

    virtual Entity* getEntity(const char* EntOwner)=0;
    virtual int addEntity(Entity*ent)=0;

    virtual const char* getManufactureDate()=0;


};

