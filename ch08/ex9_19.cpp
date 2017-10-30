#include <iostream>
#include <list>
#include <string>

using namespace std;

int main ()
{
	list<string> sdeq;
	string temp;
	while (cin >> temp)
		sdeq.push_back (temp);
	
	for (auto beg = sdeq.cbegin(), end = sdeq.cend(); beg != end; ++beg)
		cout << *beg << endl;
}