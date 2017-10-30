#include <iostream>
#include <list>
#include <vector>

using namespace std;

int main ()
{
	int ia[] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89};
	vector<int> ivec (ia, end(ia));
	list<int> ilist (ia, end(ia));
	
	for (auto beg = ivec.begin(), end = ivec.end(); beg != end; )
	{
		if (!(*beg % 2))
			beg = ivec.erase (beg);
		else 
			++beg;
	}
	
	for (auto beg = ilist.begin(), end = ilist.end(); beg != end; )
	{
		if (*beg % 2)
			beg = ilist.erase (beg);
		else
			++beg;
	}
	
	for (auto i : ivec)
		cout << i << " ";
	cout << endl;
	
	for (auto i : ilist)
		cout << i << " ";
	cout << endl;
	
}