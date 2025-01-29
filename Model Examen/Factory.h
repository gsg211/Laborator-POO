#pragma once
#include "FlyingObjects.h"
#include "CAircraft.h"
#include "CAirplane.h"
#include "CGlider.h"


class Factory
{
public:
    static CAircraft* createAircraft(int type,int option);
};