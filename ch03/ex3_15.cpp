#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::string;
using std::endl;
using std::cin;
using std::vector;

int main ()
{
	string i;
	vector<string> str;
	while (cin >> i) {
		str.push_back(i);
	}
	
	return 0;
}