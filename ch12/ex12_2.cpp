#include <iostream>
#include "ex12_2.h"

int main ()
{
	const StrBlob csb{ "hello", "world", "pezy"};
	StrBlob sb{"Hello", "wprld", "Mooophy"};
	
	std::cout << csb.front() << " " << csb.back() << std::endl;
	sb.back() = "pezy";
	std::cout << sb.front() << " " << sb.back() << std::endl;
}