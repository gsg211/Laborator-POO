#include <iostream>
#include "jucarie.h"
using namespace std;

int jucarie::contor=0;

int main()
{
    jucarie *j,*j1,*j2,*j3;
    j=new jucarie;
    j1=new jucarie((char*)"lemn",10,15);
    j2=new jucarie(*j1);
    j3=new jucarie;
    *j3=*j1;

    j->afisare();
    j1->afisare();
    j2->afisare();
    j3->afisare();

    j->setMaterial((char*)"Metal");
    j->setPret(30);
    j->setVarsta(12);

    cout<<"\nTestare getteri/setteri\n\n";
    cout<<j->getMaterial()<<" "<<j->getVarsta()<<" ani "<<j->getPret()<<" lei\n";
    cout<<"Counter: "<<jucarie::getContor<<"\n";

    *j3=*j2=*j;
    //j2->afisare();
    //j3->afisare();

    //j2->citire();
    //j3->citire();

    //cin>>*j2>>*j3;
    cout<<*j2<<*j3;

    cout<<"j2+j3: "<<*j2 + *j3<<"\n";
    cout<<"j:"<<j->getPret()<<"\n";
    cout<<"j:"<<j->getPret()<<"\n";
    cout<<"dupa j2++: "<<(*j)++.getPret()<<"\n";
    //cout<<"dupa j2++: "<<++(*j).getPret()<<"\n";


    delete j;
    delete j1;
    delete j2;
    delete j3;
    return 0;
}