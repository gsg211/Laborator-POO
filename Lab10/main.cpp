#include <iostream>
#include "Functii.h"

using namespace std;

int main()
{
    /*
    int a1=4;
    int a2=7;

    cout<<maxim(a1,a2);
    cout<<"\n\n";

    float vect[10]={9.3, 3.6, 7.9, 8.7, 2.5, 2.8, 10, 6.7, 4.2, 5};
    for(int i=0;i<10;i++)
    {
        cout<<vect[i]<<" ";
    }
    sortare(vect,10);
    cout<<"\n\n";
    
    */
   float vect[10]={9.3, 3.6, 7.9, 8.7, 2.5, 2.8, 10, 6.7, 4.2, 5};
    float vect2[5]={1,1,1,1,1};
    Multime<float> m((float*)vect,10,10);
    Multime<float> m2((float*)vect2,5,5);
    m.afisare();
    cout<<"\n\n";
    
    

    Multime<float> m3=aduna<Multime<float>>(m,m2);
    //aduna(m,m2);
    m3.afisare();
    return 0;
}