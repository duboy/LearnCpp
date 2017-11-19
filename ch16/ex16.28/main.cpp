#include<iostream>
#include "shared_pointer.h"
#include <string>
int main()
{
	
	shared_pointer<std::string> sp2(std::string("2"));
	shared_pointer<std::string> sp(std::string("World"));
	shared_pointer<std::string> sp1(std::string("1"));
	sp1 = sp;
}