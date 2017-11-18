#include <iostream>
#include "Blob.h"
int main()
{
	Blob<std::string> b1;
	Blob<std::string> b2({"a", "b", "c"});
	b2.pop_back();
	b2.push_back("d");
	b2[1] = std::string("f");
	b2[1] = "G";
	b2.back() = "A";
	std::cout << b2.back() + ' ' << b2[1] << std::endl;

	
	const Blob<int> b3({1});
	// b3.back() = 2;
	// b3[0] = 3;
	std::cout << b3.back();
}