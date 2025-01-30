#include <iostream>
#include "jucarie.h"
#include "minge.h"
#include "container.h"

using namespace std;

int jucarie::contor=0;

int main()
{
    /*
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

    cout<<"j2+j3: "<<*j2 + *j3<<"\n\n\n";
    cout<<*j<<*j2;
    *j=(*j2)++;
    cout<<*j<<*j2;
    *j=++(*j2);
    cout<<*j<<*j2;
    //cout<<"dupa j2++: "<<++(*j).getPret()<<"\n";


    delete j;
    delete j1;
    delete j2;
    delete j3;
    */
    /*
    minge m,m1((char*)"Carpa",10,10,20,minge::fotball,minge::dezumflata),m2(m1);

    m1.afisare();
    m1=m2;
    m2.afisare();
    m1.afisare();

    cin>>m2>>m1;

    cout<<m2<<m1;
    */
    container<minge> v;
    v.PushBack(minge((char*)"piele",5,25,5, minge::tenis,minge::umflata));
    v.PushBack(minge((char*)"cauciuc",11,50,15,minge::fotball,minge::dezumflata));
    v.PushBack(minge((char*)"carpa",6,0,10,minge::volley,minge::sparta));
    v.display();

    for(container<minge>::iterator it = v.begin(); it!= v.end();it++)
    {
        cout<<(*it).getMaterial()<<" \n";
    }
    return 0;
}