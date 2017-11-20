#include <iostream>
#include <string>
#include <vector>
template<typename tlhs, typename trhs>
auto sum(tlhs lhs, trhs rhs) -> decltype(lhs + rhs)
{
	return lhs + rhs;
}

int main()
{
	auto s = sum(1111111111111111111,1111111111111);
	// std::cout << sum(111,111);
	std::cout << s;
}