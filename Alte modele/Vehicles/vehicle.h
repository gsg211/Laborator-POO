#pragma once

#include <iostream>
#include <cstring>

using namespace std; 

namespace cars
{
    class vehicle   //interface
    {
    public:
        virtual ~vehicle()=0;

        virtual char* get_brand()=0;
        virtual void set_brand(char* brand)=0;
        
        virtual double get_load()=0;
        virtual void set_load(double new_load)=0;

        virtual int get_passagers()=0;
        virtual void set_passagers(int passagers)=0;

        virtual void print()=0;
        virtual void read()=0;
    };


    inline vehicle::~vehicle()
    {
    }

    inline char* vehicle::get_brand()
    {
        return nullptr;
    }
    inline void vehicle::set_brand(char* brand)
    {
    }
    
    inline double vehicle::get_load()
    {
        return -1;
    }
    inline void vehicle::set_load(double new_load)
    {
    }

    inline int vehicle::get_passagers()
    {
        return -1;
    }
    inline void vehicle::set_passagers(int passagers)
    {
    }
    inline void vehicle::print()
    {
    }
    inline void vehicle::read()
    {

    }
};

