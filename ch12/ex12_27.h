#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <sstream>
#include <set>
#include <map>
#include <memory>

using namespace std;

class TextQuery
{
public:
	TextQuery() = default;
	TextQuery(ifstream &inFile);
	
	string &query(string &s);

private:
	using linePtr = shared_ptr<vector<string>>;
	using mapPtr = shared_ptr<map<string, set<int>>>;

	linePtr p;
	mapPtr wordMap;
};

TextQuery::TextQuery(ifstream &infile) : p(new vector<string>), wordMap(new map<string, set<int>>)
{
	string line;
	int lineNum = 1;
	while (getline(infile, line))
	{
		p->push_back(line); //save lines
		istringstream sline(line);
		string word;
		while (sline >> word)
		{
			(*wordMap)[word].insert(lineNum); //add lineNum into the set.
			// cout << word << " " << lineNum << endl;
		}
		++lineNum;
	}
}
string &TextQuery::query(string &s)
{
	cout << "element occurs " << (*wordMap)[s].size() << " times" << endl;
	for (auto beg = (*wordMap)[s].begin(); beg != (*wordMap)[s].end(); ++beg)
	{
		cout << "(line " << *beg << ") " << p->at(*beg - 1) << endl;
	}
	cout << endl;
	return s;
}
class QueryResult
{
	
};