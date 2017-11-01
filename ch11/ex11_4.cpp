#include <iostream>
#include <map>
#include <set>
#include <string>
#include <algorithm>
using namespace std;

int main ()
{
	map<string, size_t> word_count;

	string word;
	while (cin >> word)
	{
		auto rm = remove_if (word.begin(), word.end(), [] (const char &c) { return isalpha (c) == 0;});
		word.erase (rm, word.end());
		transform (word.begin(), word.end(), word.begin(), tolower);
		++word_count[word];
	}
	
	for (auto &w : word_count)
	{
		cout << w.first << " occurs " << w.second 
			 << ((w.second > 1) ? " times" : " time") << endl;
	}	
}