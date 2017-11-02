#include <iostream>
#include <vector>
using namespace std;

vector<int> *vp()
{
	return new vector<int>;
}

vector<int> *readVp(vector<int> *vp)
{
	int i;
	while (cin >> i)
	{
		(*vp).push_back(i);
	}
	return vp;
}
void print(vector<int> *vp)
{
	for (auto i : *vp)
	{
		cout << i << " ";
	}
	cout << endl;
	
	delete vp;
}
int main ()
{
	auto p = vp();
	print(readVp(p));
	
}