#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

void fstream2Vector (const string &fileName, vector<string> &fileContents)
{
	ifstream in (fileName);
	string temp;
	while (in >> temp)
	{
		fileContents.push_back (temp);
	}
}

int main ()
{
	string fileName ("..\\data\\book.txt");
	vector<string> fileContents;
	fstream2Vector (fileName, fileContents);
	for (auto s : fileContents)
		cout << s << endl;
}