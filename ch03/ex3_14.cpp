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
	int i;
	vector<int> num;
	while (cin >> i) {
		num.push_back(i);
	}
	
	return 0;
}