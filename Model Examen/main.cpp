#include <iostream>
#include "FlyingObjects.h"
#include "CAircraft.h"
#include "CAirplane.h"
using namespace FlyingObjects;
using namespace std;

int CAircraft::m_counter = 0;

int main()
{
    /*
    CAircraftType type;
    cout<<"TYPE 1: "<<type.getTypeName(1)<<" \n";
    */

    /*
    Comentat pt a arata testarea inainte de a o face pur virtuala

    CAircraft a1,a2((char*)"Ion",2),a((char*)"Gigel",1),a3(a);
    a1.Write();
    a2.Write();
    a3.Write();

    CAircraft a5((char*)"fice",2),a6;

    a6=a5;
    a6.Write();
    

    cout<<"\n<---------------->";
    //a1.Read();
    //a1.Write();

    //a1.Read();
    //a1.Write();

    std::cout<<"\n\nCounter: "<<a1.getCounter();
    */
    
    CAirplane c,c1((char*)"Ion",1,0,15),c2((char*)"Gica Popescu",1,2,200),c3(c2);
    c.Write();
    c1.Write();
    c2.Write();
    c3.Write();

    c=c1;
    c.Write();
    c=c;
    c.Write();

    //c.Read();
    //c.Write();

    cin>>c1>>c3;
    cout<<c1<<c3;


    return 0;
}