#include "object.h"

object::~object()
{
    if(owner!=nullptr)
    {
        delete []owner;
    }
}

object::object(const char* owner)
{
    DateandTime d;
    d.getSytemDateandTime();
    manufactureDate=d;
    if(owner!=nullptr)
    {
        this->owner=new char[strlen(owner)+1];
        strcpy_s(this->owner,strlen(owner)+1,owner);
    }
}

object::object(const object &o):manufactureDate()
{
    manufactureDate.getSytemDateandTime();
    if(o.owner!=nullptr)
    {
        this->owner=new char[strlen(o.owner)+1];
        strcpy_s(this->owner,strlen(o.owner)+1,o.owner);
    }
    
}

//move
object::object(object&& o):manufactureDate()
{
    swap(this->owner,o.owner);
    swap(this->manufactureDate,o.manufactureDate);
}


object& object::operator=(const object &o)
{

    if(this==&o)
    {
        return*this;
    }
    if(this->owner!=nullptr)
    {
        delete [] owner;
    }
    if(o.owner!=nullptr)
    {
        this->owner=new char[strlen(o.owner)+1];
        strcpy_s(this->owner,strlen(o.owner)+1,o.owner);
    }
    manufactureDate.getSytemDateandTime();

    return*this;

}
object& object::operator=(object&& o)
{
    if(this==&o)
    {
        return*this;
    }
    swap(this->owner,o.owner);
    swap(this->manufactureDate,o.manufactureDate);
    return *this;
}

const char* object::GetOwner()const 
{   
    return owner;
}

const char* object::getManufactureDate() 
{
    return manufactureDate.toString();
}

void object::WriteInfo()
{
    cout<<"Owner:"<<owner<<"\n";
    cout<<"Manufacture Date:"<<getManufactureDate()<<"\n";

}