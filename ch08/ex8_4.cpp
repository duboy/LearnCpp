#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

vector<string> fstream2Vextor (const string &fileName)
{
	ifstream in (fileName);
	vector<string> fileContents;
	string temp;
	while (getline (in, temp))
	{
		fileContents.push_back (temp);
	}
	return fileContents;
}

int main ()
{
	string fileName ("..\\data\\book.txt");
	vector<string> contents;
	contents = fstream2Vextor (fileName);
	for (auto s : contents)
		cout << s << endl;
}