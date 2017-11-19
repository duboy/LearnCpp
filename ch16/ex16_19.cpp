#include <iostream>
#include <vector>
#include <list>
using std::cout; using std::endl;

template<typename T>
void print(const T &var)
{
	for (T::size_type i = 0; i != var.size(); ++i)
		cout << var[i] << " ";
}

int main()
{
	std::vector<int> ivec = {1, 2, 3, 4, 5};
	std::list<int> ilist = {1, 2, 3, 4, 5};
	print(ivec);
	// print(ilist); //list hasnot [];
}