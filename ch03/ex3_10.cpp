#include <iostream>
#include <string>

using std::cout;
using std::string;
using std::endl;
using std::cin;

int main ()
{
	for (string s; getline (cin, s); cout << endl)
		for (auto &c : s)
			if (!ispunct(c))
				cout << c;
	
	return 0;
}