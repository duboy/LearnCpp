#include <iostream>
#include <vector>
#include <list>
#include <string>
using std::vector;
using std::list;
using std::string;
template <typename T1, typename T2>
auto myfind(T1 beg, T1 end, T2 target)
{
	for ( ; beg != end; ++beg)
	{
		if (*beg == target)
			return beg;
	}
	return end;
}

int main()
{
	vector<int> ivec{1,2,3,4,5};
	list<string> slist{"a", "b", "c", "d"};
	auto local = myfind(ivec.begin(), ivec.end(), 1);
	std::cout << *local << std::endl;
	auto slocal = myfind(slist.begin(), slist.end(), "a");
	std::cout << *slocal << std::endl;
}