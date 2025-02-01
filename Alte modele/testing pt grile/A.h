#pragma once
#include <iostream>
using namespace std;
class A
{
public:
    A(/* args */)
    {
        cout<<"\nconstructor\n";
    }
    ~A()
    {
        cout<<"\ndestructor\n";
    }

    void print()
    {
        cout<<"\nprint\n";
    }
    
};


