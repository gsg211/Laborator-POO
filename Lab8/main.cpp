#include <iostream>
#include "student.h"
int main()
{
	StudentMaster m[4],*max=&m[0];
	m[0]=StudentMaster("Cnp","Ionel","Iasi",2,5,"AI");
	m[1]=StudentMaster("Cnp","Gigel","Iasi",2,7,"AI");
	m[2]=StudentMaster("Cnp","Costel","Iasi",2,10,"AI");
	m[3]=StudentMaster("Cnp","Mirel","Iasi",2,2,"AI");
	

	for(int i=0;i<4;i++)
	{
	max=(StudentMaster*)max->comparaStudent(&m[i]);
	}
	max->AfisareProfil();
	
}
