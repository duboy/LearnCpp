#include <iostream>
#include <fstream>
#include <string>
#include <set>
using namespace std;

struct slength
{
	bool operator()(std::string s, size_t l)
	{
		return s.size() == l;
	}
};

int main ()
{
	
}