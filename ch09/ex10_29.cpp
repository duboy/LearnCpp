#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <iterator>
#include <algorithm>
using namespace std;

template <typename Sequence>
void print (const Sequence &ivec)
{
	for (auto s : ivec)
		cout << s << " ";
	cout << endl;
}

int main ()
{
	string fileName ("..//data//book.txt");
	ifstream fin (fileName);
	istream_iterator<string> in (fin);
	istream_iterator<string> eof;
	vector<string> str;
	// copy (in, eof, back_inserter (str));
	
	while (in != eof)
	{
		str.push_back (*in++);
		// cout << *in << endl;
	}
	
	print (str);
	
}