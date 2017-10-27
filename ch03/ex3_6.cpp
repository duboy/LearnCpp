#include <iostream>
#include <string>

using std::cout;
using std::string;
using std::endl;

int main ()
{
	string s("hello, world!");
	for (char &c : s)
		c = 'x';
	
	cout << s << endl;
	
	return 0;
}