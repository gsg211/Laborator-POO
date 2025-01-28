#include "FlyingObjects.h"

using namespace FlyingObjects;

char * CAircraftType::getTypeName(int typeNr)
{
    if(typeNr==AIRPLANE)
    {
        return (char *) "Airplane";
    }
    return (char*) "Glider";
}

char * CpropulsionType::getTypeName(int typeNr)
{
    if(typeNr==NONE)
    {
        return (char *) "NONE";
    }
    if(typeNr==JET)
    {
        return (char *) "JET";
    }
    return (char*) "PROPELLER";
}


char * CGliderType::getTypeName(int typeNr)
{
    if(typeNr==CLUB)
    {
        return (char *) "CLUB";
    }
    if(typeNr==STANDARD)
    {
        return (char *) "STANDARD";
    }
    if(typeNr==DUAL_SEATS)
    {
        return (char *) "DUAL_SEATS";
    }
    return (char*) "OPEN";
}
