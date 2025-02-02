#include <iostream>
#include "object.h"
#include "box.h"
#include "cube.h"
using namespace std;

int box::level=0;
int main()
{
    
    //nu am mai testat aia abstracta;
    box *b1=new box("Cutie");
    b1->addEntity(new box("smal1"));
    b1->addEntity(new box("smal2"));
    b1->addEntity(new cube("Cube",6));
    box b("BIG");
    b.addEntity(b1);
   

    b.addEntity(new cube("cubu rubik",8));
    b.visit();

    cout<<"\n\n\n";
    
    b.visit();
    cout<<"\n";
    b.WriteInfo();
    return 0;
}