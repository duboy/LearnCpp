#include <iostream>
#include <vector>
#include <memory>
using namespace std;
using ptr = shared_ptr<vector<int>>;

ptr vp()
{
	return make_shared<vector<int>>();
}

ptr readVp(ptr vp)
{
	int i;
	while (cin >> i)
	{
		vp->push_back(i);
	}
	return vp;
}
void print(ptr vp)
{
	for (auto i : *vp)
	{
		cout << i << " ";
	}
	cout << endl;
}
int main ()
{
	auto p = vp();
	print(readVp(p));
	
}