#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

void fstream2Vector (const string &fileName, vector<string> &fileContents)
{
	ifstream in (fileName);
	string temp;
	while (getline (in, temp))
	{
		string world;
		for (auto beg = temp.begin(), end = temp.end(); beg != end; ++beg)
		{
			world += *beg;
			// cout << world << endl;
			if ((*beg) == ' '  )
			{
				
				fileContents.push_back (world);	
				world.clear ();
			}
		}
		fileContents.push_back (world);	
		world.clear ();
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