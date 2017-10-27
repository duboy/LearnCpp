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
	
	auto beg = vnum.begin();
	auto end = vnum.end();
	auto mid = vnum.begin() + (end - beg)/2;
	while (mid != end && mid != beg)
	{
		cout << *(end - 1) + *beg << ' ';
		--end;
		++beg;
	}
}