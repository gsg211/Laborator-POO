#pragma once
#include "object.h"
#include "Entity.h"
class box:public object
{
private:
    static const size_t M=23;
    Entity *k[M]={};
    size_t no;
public:
    box(const char* bx=nullptr);
    ~box();

    int addEntity(Entity* ent);

    Entity* getEntity(const char* entOwner)override;

    void visit()const override;
    void WriteInfo()override;

};

