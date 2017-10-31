#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <list>
#include <iterator>
using namespace std;

int main ()
{
	vector<string> svec {"aaa", "aaa", "ccc", "aaa", "bbb"};
	list<string> slist;
	// slist.resize (10);

	unique_copy (svec.begin(), svec.end(), back_inserter (slist));
	for_each (slist.begin(), slist.end(), [] (const string &s) { cout << s << " ";});
}