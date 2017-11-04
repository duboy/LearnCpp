#include <algorithm>
#include <vector>
#include "ex13_31.h"
using std::vector;
int main ()
{
	HasPtr h1(string("h5"));
	HasPtr h2(string("h4"));
	vector<HasPtr> HP = {h1, h2};
	sort(HP.begin(), HP.end());
	// int i;
	// cin >> i;
	
}