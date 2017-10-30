#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>
using namespace std;

int main ()
{
	string fileName ("..\\data\\book.txt");
	ifstream in (fileName);
	vector<string> fileLine;
	string line;
	while (getline (in, line))
		fileLine.push_back (line);
	
	for (auto s : fileLine)
	{
		istringstream sLine (s);
		string world;
		while (sLine >> world)
			cout << world << endl;
	}
}