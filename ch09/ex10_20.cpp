#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int main ()
{
	vector<string> svec {"asdfasdf", "sad", "rgff"};
	cout << count_if (svec.begin(), svec.end(), [] (string &s) {return s.size() > 6;});
}