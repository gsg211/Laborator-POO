#pragma once
#include "object.h"

class cube:public object
{
private:
    size_t side;
public:
    cube(/* args */);
    ~cube();
};

cube::cube(/* args */)
{
}

cube::~cube()
{
}
