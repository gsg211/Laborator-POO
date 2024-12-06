#include <iostream>
#include "carte.h"
#include "manual.h"

using namespace biblioteca;
using namespace std;
int main()
{
    cout<<"<---TESTARE METODE--->\n\n";
    carte c1((char * )"Ion ");
    c1.afisare();

    carte c2,c3;
    
    c2=c3=c1;
    
    c3.afisare();
    c2.afisare();

    //c3.citire();
    c3.afisare();

    manual m1((char*)"info",9);
    manual m2(m1);
    manual m3;
    m3=m2;

    m1.afisare();
    m2.afisare();
    m3.afisare();

    manual m4((char*)"fizica",11);
    m3=m2=m4;

    m1.afisare();
    m2.afisare();
    m3.afisare();

    cout<<"<------>\n\n";
    cout<<"<---TESTARE VECTOR--->\n\n";

    int optiune;
    manual *vector[4];
    for(int i=0;i<4;i++)
    {
        vector[i]=new manual;
        vector[i]->citire();
    }
    for(int i=0;i<4;i++)
    {
        vector[i]->afisare();
        delete vector[i];
    }

    cout<<"<------>\n\n";
    return 0;
}