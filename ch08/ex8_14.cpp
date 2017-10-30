#include <iostream>
#include <vector>
#include <list>
#include <string>
using namespace std;
int main ()
{
	list<char *> pChar = {"adf", "gsfg"};
	vector<string> vString;
	vString.assign (pChar.begin(), pChar.end());

	for (auto s : vString)
		cout << s << endl;
}