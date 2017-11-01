#include <iostream>
#include <utility>
#include <vector>
#include <string>

using namespace std;

int main ()
{
	vector<pair<string, int>> pvec;
	string first;
	int second;
	while (cin >> first >> second)
		// pvec.push_back ( make_pair (first, second) );
		// pvec.push_back ( {first, second} );
		pvec.emplace_back (first, second);
	for (auto &p : pvec)
		cout << p.first << " " << p.second << "\t";
}