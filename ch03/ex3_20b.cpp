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
	for (int index_front = 0, index_end = vnum.size() - 1; (index_front < vnum.size()) && (index_end > 0); ++index_front, --index_end)
		cout << vnum[index_front] + vnum[index_end] << ' ';
}