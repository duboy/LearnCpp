#include <iostream>
#include <vector>
#include <list>
using std::cout; using std::endl;

template<typename T>
void print(const T &var)
{
	for (auto beg = var.begin(); beg != var.end(); ++beg)
		cout << *beg << " ";
}

int main()
{
	std::vector<int> ivec = {1, 2, 3, 4, 5};
	std::list<int> ilist = {1, 2, 3, 4, 5};
	print(ivec);
	cout << endl;
	print(ilist);
}