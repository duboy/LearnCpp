#include <iostream>
#include "ex13_18_19.h"

int main ()
{
	std::string name("nq");
	Employee n1(name);
	n1.print();
	
	Employee n2 = n1;
	n2.print();
}