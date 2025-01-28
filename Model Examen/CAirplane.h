#pragma once
#include "CAircraft.h"
#include <iostream>
using namespace std;

class CAirplane: public CAircraft
{
private:
    int m_propulsion;
    double m_speed;

public:
    CAirplane();
    CAirplane(char* owner,int type, int propulsion, double speed);
    CAirplane(const CAirplane &c);
    ~CAirplane();

    CAirplane& operator=(const CAirplane& c);

    void Read();
    void Write();


    friend ostream& operator<<(ostream& output , CAirplane& p);
    friend istream& operator>>(istream& input, CAirplane& p);
};
