#pragma once
#include "vehicle.h"
#define N 5
namespace cars
{
    class Truckfleet
    {
    private:
        int size;
        vehicle *v[N];
    public:
        Truckfleet(/* args */);
        ~Truckfleet();


        class iterator
        {
        private:
            vehicle **p;
        public:
            iterator(vehicle **p);
            ~iterator();


        iterator& operator++();
        iterator operator++(int); //postfix

        bool operator==(iterator &right);
        bool operator!=(iterator &right);
        vehicle* operator*();
        };

        void push(vehicle* item);
        void pop();

        vehicle* operator[](int i);

        iterator begin();
        iterator end();
        
        
        
    };
    
 
    
}