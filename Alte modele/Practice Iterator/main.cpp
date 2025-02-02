#include <iostream>
#include "container.h"
using namespace std;


int main()
{
    container c;
    c.push(2);
    c.push(3);
    c.display();
    c.push(6);
    c.push(7);
    c.display();
    c.push(9);
    c.display();
    c.push(43);
    c.push(35);
    c.display();

    cout<<"\n\n";
    container::iterator i=c.begin();
    container::iterator e=c.end();
    for(container::iterator i=c.begin(); i!=c.end();i++)
    {
        cout<<*i<<" ";
    }
    return 0;
}