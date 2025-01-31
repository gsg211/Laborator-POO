#include <iostream>
#include "CEmployee.h"
#include "CProgrammer.h"  
#include "Cmanager.h"
#include "CCompany.h"
using namespace std;

int CEmployee::m_iEmploymentCount = 0;

int main()
{
    /*testat inainte de abstractizare

    CEmployee e,e1((char*)"Gica Popescu",1,100),e2(e1),e3;
    

    e.print();
    e2.print();

    e.setName((char*)"Ion");
    e.setSalary(1500);
    e.changePosition(2);

    //e.print();

    cout<<e.getName()<<" "<<e.getPosition()<<" "<<e.getSalary();

    e3=e;
    e3.print();

    e3=e3;
    e3.print();
    */


    cout<<"\nTesting Programers\n";

    CProgrammer p,p1((char*)"Gica Popescu",(char*)"C++",3,5000),p2(p1),p3;
    

    p.write();
    p2.write();

    p.setName((char*)"Ion");
    p.setSalary(1500);
    p.changePosition(2);
    p.changeTask((char*)"java");

    //e.print();

    cout<<p.getName()<<" "<<p.getPosition()<<" "<<p.getSalary();

    p3=p;
    p3.write();

    p3=p3;
    p3.write();


     cout<<"\nTesting Managers\n";

    CManager m,m1((char*)"Marius Vasile",(char*)"Marketing",4,50000),m2(m1),m3;
    

    m.write();
    m2.write();

    m.setName((char*)"Costel");
    m.setSalary(INT_MAX);
    m.changePosition(5);
    m.changeTask((char*)"LVL 1000 mafia boss");

    //e.print();

    cout<<m.getName()<<" "<<m.getPosition()<<" "<<m.getSalary();

    m3=m;
    m3.write();

    m3=m3;
    m3.write();

 

    //cod efectiv

    cout<<"\n\n---cod efectiv---\n\n";

    CManager *man1,*man2,*man3;
    CProgrammer *pr1,*pr2,*pr3;

    man1=new CManager((char*)"Marius ",(char*)"Marketing",4,50000);
    man2=new CManager((char*)" Vasile",(char*)"Analiza",3,25000);
    man3=new CManager((char*)"Marius Vasile",(char*)"Hq",5,INT_MAX);

    pr1=new CProgrammer((char*)"Gica",(char*)"C++",3,5000);
    pr2=new CProgrammer((char*)"Popescu",(char*)"Assembly",4,15000);
    pr3=new CProgrammer((char*)"Gica Popescu",(char*)"Python",2,500);
    
    CCompany comp;
    comp.Hire(man1);
    comp.Hire(pr1);
    comp.Hire(pr2);
    comp.Hire(man2);
    comp.Hire(man3);
    comp.Hire(pr3);
    comp.display();


    cout<<"\n\n------\n\n";
    comp.Fire(16);
    comp.Fire(9);

    comp.getEmployee(14)->setName((char*)"Vali");

    comp.getEmployee(12)->setName((char*)"Vijelie");

    comp.display();

    return 0;
}