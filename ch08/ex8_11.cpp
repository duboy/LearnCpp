#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>

using namespace std;

int main ()
{
	struct PersonInfo
	{
		string name;
		vector<string> phones;
	};
	
	string line, world;
	vector<PersonInfo> people;
	istringstream record;
	
	while (getline (cin, line))
	{
		PersonInfo info;
		record.clear();
		record.str(line);
		record >> info.name;
		while (record >> world)
			info.phones.push_back (world);
		people.push_back (info);
	}
	for (auto str : people)
	{
		cout << "name: " << str.name + "\t";
		cout << "phone " ;
		for (auto phoneNun : str.phones)
			cout << phoneNun + " ";
		cout << endl;
	}
}
