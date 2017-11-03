#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <sstream>
#include "ex12_27.h"

using namespace std;

void runQueries(ifstream &infile)
{
	TextQuery tq(infile);
	while (true)
	{
		cout << "Enter word to look for, or q to quit: ";
		string s;
		
		if (!(cin >> s) || s == "q")
			break; 
		// print(cout, tq.query(s)) << endl;
		tq.query(s);
	}
}

int main ()
{
	string fileName("..\\data\\storyDataFile.txt");
	ifstream infile(fileName);
	// TextQuery tq(infile);
	runQueries(infile);
	
}