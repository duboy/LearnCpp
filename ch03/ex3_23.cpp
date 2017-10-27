#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main ()
{
/* 	vector<int> vnum;
	for (int num, index = 0; index < 10 && cin >> num; ++index)
	{
		vnum.push_back(num);
	}
	
	for (auto &num : vnum)
	{
		num *= 2;
		cout << num << ' ';
	}
	cout << endl;
	for (auto &num : vnum)
		cout << num << ' ';
 */
 
	vector<int> vnum{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	for (auto it = vnum.begin(); it != vnum.end(); ++it)
	{
		*it *= 2;
	}
	for (auto &num : vnum)
		cout << num << ' ';
	cout << endl;
	
	return 0;
}