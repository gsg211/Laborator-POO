#pragma once
#include "calendarDate.h"
#include "Entity.h"
class object:public Entity 
{
private: 
    char* owner;
    DateandTime manufactureDate;
public:
    object(const char* owner=nullptr);
    object(const object &o); //copy
    object(object&& o);
    ~object();
    
    object& operator=(const object &o);
    object& operator=(object&& o);

    const char* GetOwner()const override;
    const char* getManufactureDate() override;
    void WriteInfo();

};

