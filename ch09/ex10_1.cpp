#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main ()
{
	vector<int> ivec;
	int i, val;
	while (cin >> i)
		ivec.push_back (i);

	auto cnt = count (ivec.begin (), ivec.end (), 1);
	cout << cnt << endl;
}