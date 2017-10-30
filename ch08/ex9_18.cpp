#include <iostream>
#include <deque>
#include <string>

using namespace std;

int main ()
{
	deque<string> sdeq;
	string temp;
	while (cin >> temp)
		sdeq.push_back (temp);
	
	for (auto beg = sdeq.cbegin(), end = sdeq.cend(); beg != end; ++beg)
		cout << *beg << endl;
}