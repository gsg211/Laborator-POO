#include "Factory.h"

CAircraft* Factory::createAircraft(int type,int option)
{
    if(type==1 && option>=0 && option<=2)
    {
        return new CAirplane;
    }

    if(type==2 && option>=1 && option<=4)
    {
        return new CGlider;
    }
    return nullptr;
}