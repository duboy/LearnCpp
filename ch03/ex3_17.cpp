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
	vector<string> vstr;
	// getline (cin, str);
		
	while (cin >> str) {
		vstr.push_back(str);
	}
	
	for (auto &word : vstr) {
		for (auto &c : word) {
			c = toupper (c);
		}
		//cout << c;
	}
	
	for (int i = 0; i < vstr.size(); ++i) 
	//for (auto &word : vstr) 
		//cout << word;
		cout << vstr[i] << vstr.size();
}
