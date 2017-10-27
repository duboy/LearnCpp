#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main ()
{
	string str;
	vector<string> text;
	while (getline(cin, str))
	{
		text.push_back(str);
	}
	for (auto &word : text)
	{
		for (auto &chr : word)
		{
			chr = toupper(chr);
		}
		cout << word << ' ';
	}
	return 0;
}