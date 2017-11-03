#include <iostream>
#include "ex13_8.h"

int main ()
{
	HasPtr p1("s");
	p1.print();
	
	HasPtr p2(p1);
	p2.print();
	
	HasPtr p3 = p2;
	p3.print();
}