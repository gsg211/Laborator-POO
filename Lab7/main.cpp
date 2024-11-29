#include <iostream>
#include "Student.h"
#include "data.h"
int main()
{
	int n=5;
	Student **v=new Student*[3];

	Data d(18,9,2004);
	v[0]=new Student((char*)"iom",(char*)"gigel",&d,1211);
	v[1]=new Student((char*)"33",(char*)"mii",&d,1207);
	v[2]=new Student((char*)"costel",(char*)"hioom",&d,1209);

	//v[0]->afisare();
	sortare(v,n);
	afisare(v,n);
}
