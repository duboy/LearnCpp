#include <iostream>
#include <vector>
#include <list>

using namespace std;

int main ()
{
	list <int> inter = {1, 2, 3};
	vector<double> doub (inter.begin(), inter.end());
	for (auto i : doub)
		cout << i << " ";
	cout << endl;
	
	vector<int> vInt = {4, 5, 6};
	vector<double> int2double (vInt.begin(), vInt.end());
	for (auto d : int2double)
		cout << d << " ";
	cout << endl;
}