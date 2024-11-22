#include <iostream>
#include "complex.h"
#include "multime.h"
#include "MyString.h"
int main()
{
	String s("Gigel");
	String sub("ige");
	std::cout<<s.cauta(sub);
	return 0;
}
