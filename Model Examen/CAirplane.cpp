#include "Cairplane.h"
#include "CAircraft.h"
#include <iostream>
#include <cstring>
using namespace std;
CAirplane::CAirplane():CAircraft()
{
    m_propulsion=0;
    m_speed=0;
}
CAirplane::CAirplane(char* owner,int type, int propulsion, double speed):CAircraft(owner,type)
{
    m_propulsion=propulsion;
    m_speed=speed;
}
CAirplane::CAirplane(const CAirplane &c): CAircraft(c)
{
    this->m_propulsion=c.m_propulsion;
    this->m_speed=c.m_speed;
}

CAirplane::~CAirplane()
{
    cout<<"\n Airplane destructor called\n";
    this->m_propulsion=0;
    this->m_speed=0;
}

CAirplane& CAirplane::operator=(const CAirplane &c)
{
    if(this==&c)
    {
        return *this;
    }
    CAircraft::operator=(c);
    this->m_propulsion=c.m_propulsion;
    this->m_speed=c.m_speed;
    return *this;
}


void CAirplane::Read()
{
    CAircraft::Read();
    cout<<"Propulsion type: ";
    cin>>m_propulsion;
    cout<<"Speed : ";
    cin>>m_speed;
}

void CAirplane::Write()
{
    CAircraft::Write();
    cout<<"\nPropulsion type: "<<m_propulsion<<"\n";
    cout<<"Speed: "<<m_speed<<"\n";
}

ostream& operator<<(ostream& output, CAirplane& p)
{
    if(p.m_owner==nullptr)
    {
        output<<"\n\nOwner: N/A\n";
    }
    else
    {
        output<<"\n\nOwner: "<<p.m_owner<<"\n";
    }
    
    output<<"Type: "<<p.m_type;
    output<<"\nPropulsion type: "<<p.m_propulsion<<"\n";
    output<<"Speed: "<<p.m_speed<<"\n";
    return output;

}
istream& operator>>(istream& input, CAirplane& p)
{
    char buffer[100];
    
    input.get(buffer,100);
    

    if(p.m_owner!=nullptr)
    {
        delete[ ] p.m_owner;
    }
    p.m_owner=new char[strlen(buffer)+1];
    strcpy_s(p.m_owner,strlen(buffer)+1,buffer);

    input>>p.m_type;
    input.ignore(1,'\n');

    input>>p.m_propulsion;
    input.ignore(1,'\n');
    input>>p.m_speed;
    input.ignore(1,'\n');
    return input;
}


