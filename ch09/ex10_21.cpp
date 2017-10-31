#include <iostream>

using namespace std;

int main ()
{
	int i = 1;
	auto f = [&i] () -> bool {
		if (!i) return 1;
		else --i; return 0;
	};
	
	cout << f() << "\t" << f();
}