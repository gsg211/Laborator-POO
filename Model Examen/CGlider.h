#pragma once

#include "CAircraft.h"
#include <iostream>
#include "FlyingObjects.h"
using namespace std;

class CGlider:public CAircraft
{
private:
    double m_load;
    int m_class;
public:
    CGlider(/* args */);
    CGlider(char* owner, int type,int glider_class,double load);
    CGlider(const CGlider &c);
    ~CGlider();

    void Read();
    void Write();

    CGlider& operator=(const CGlider &c);

    friend ostream& operator<<(ostream& output , CGlider& p);
    friend istream& operator>>(istream& input, CGlider& p);
    
};

