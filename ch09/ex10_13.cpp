#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using std::cin; using std::cout; using std::string;using std::vector;

bool isLarger (const string &str)
{
	return str.size() >= 5;
}

int main ()
{
	vector<string> words {"This", "is", "a", "test", "of", "ex10_13.cpp"};
	auto it = partition (words.begin(), words.end(), isLarger);
	
	for (auto beg = words.begin(); it != beg; ++beg)
		cout << *beg << " ";
	cout << std::endl;
}