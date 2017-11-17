#include <iostream>
#include <string>
using namespace std;
template <typename T>
int compare(T lhs, T rhs)
{
	if (lhs < rhs)
		return 1;
	if (rhs < lhs)
		return -1;
	else
		return 0;
}

int main()
{
	string s1("sss"), s2("sss");
	cout << compare(s1, s2);
}