#include <iostream>
#include "object.h"
#include "box.h"
using namespace std;


int main()
{
    
    //nu am mai testat aia abstracta;
    box *b1=new box("Cutie");
    b1->addEntity(new box("smal1"));
    b1->addEntity(new box("smal2"));

    box b("BIG");
    b.addEntity(b1);
    b.visit();

    b.WriteInfo();
    return 0;
}