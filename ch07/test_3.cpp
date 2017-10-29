#include <iostream>
#include "ex7_32.h"

int main ()
{
	Window_mgr winMgr;
	Screen s(2, 3, 'X');
	winMgr.screens.push_back (s);
	winMgr.screens[0].display (std::cout);
	std::cout << '\n';
	winMgr.clear(0);
	winMgr.screens[0].display (std::cout);
	std::cout << '\n';
}