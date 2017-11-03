#include <iostream>
#include "ex13_11.h"

int main ()
{
	HasPtr p1("s");
	p1.print();
	{
	HasPtr p2("p2");
	p2.print();
	}
	HasPtr p3 = p1;
	p3.print();
}