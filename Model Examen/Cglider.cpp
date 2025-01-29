#include "CGlider.h"
#include <cstring>

CGlider::CGlider(/* args */): CAircraft()
{
    m_load=0;
    m_class=1;
}

CGlider::~CGlider()
{
    cout<<"Destructor Glider apelat";
    m_load=0;
    m_class=0;
}

CGlider::CGlider(char* owner, int type,int glider_class,double load): CAircraft(owner,type)
{
    m_class=glider_class;
    m_load=load;
}
CGlider::CGlider(const CGlider &c): CAircraft(c)
{
    m_class=c.m_class;
    m_load=c.m_load;
}


void CGlider::Read()
{
    CAircraft::Read();
    cout<<"Class: ";
    cin>>m_class;
    cin.ignore(1,'\n');
    cout<<"Load: ";
    cin>>m_load;
    cin.ignore(1,'\n');

}
void CGlider::Write()
{
    CAircraft::Write();

    FlyingObjects::CGliderType type;
    cout<<"\nClass: "<<FlyingObjects::CGliderType::getTypeName(m_class)<<"\n";
    cout<<"Load: "<<m_load<<"\n";
}

CGlider& CGlider::operator=(const CGlider &c)
{
    if(this==&c)
    {
        return *this;
    }

    CAircraft::operator=(c);
    this->m_load=c.m_load;
    this->m_class=c.m_class;

    return *this;
}

ostream& operator<<(ostream& output , CGlider& p)
{
    if(p.m_owner==nullptr)
    {
        output<<"\n\nOwner: N/A\n";
    }
    else
    {
        output<<"\n\nOwner: "<<p.m_owner<<"\n";
    }
    FlyingObjects::CAircraftType type_craft;
    FlyingObjects::CGliderType type_glider;
    output<<"Type: "<<type_craft.getTypeName(p.m_type);
    output<<"\nGlider Class: "<<type_glider.getTypeName(p.m_class)<<"\n";
    output<<"Load: "<<p.m_load<<"\n";
    return output;
}
istream& operator>>(istream& input, CGlider& p)
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

    input>>p.m_class;
    input.ignore(1,'\n');
    input>>p.m_load;
    input.ignore(1,'\n');
    return input;
}