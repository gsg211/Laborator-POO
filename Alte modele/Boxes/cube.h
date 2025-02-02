#pragma once
#include "object.h"

class cube:public object
{
private:
    size_t side;
public:
    cube(const char* owner, size_t sides=0);
    ~cube();

    cube(const cube& c);
    cube(cube&& c);

    cube& operator=(const cube& c);
    cube& operator=(cube&& c);

    Entity* getEntity(const char* EntOwner) override;
    int addEntity(Entity* ent) override;

    void WriteInfo()override;

    void visit()const override;
};

