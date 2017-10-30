#include <iostream>
#include <vector>

using namespace std;

int main ()
{
	vector<int> ivec;
	auto cap = ivec.capacity();
	for (int i = 1; i <= 100; ++i)
	{
		ivec.push_back (i);
		if (cap != ivec.capacity())
		{
			cap = ivec.capacity(); 
			cout << cap << " ";
		}
		
	}
	cout << endl;
	cout << "ivec: size"   << ivec.size()
		 << "\tcapacity: " << ivec.capacity() << endl;
}