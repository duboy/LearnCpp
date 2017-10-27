#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main ()
{
	vector<int> vnum;
	for (int i; cin >> i; )
		vnum.push_back(i);
	for (int index = 1; index < vnum.size(); ++index)
		cout << vnum[index] + vnum[index - 1] << ' ';
}