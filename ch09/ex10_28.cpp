#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
#include <list>
using namespace std;
template <typename Sequence>
void print (const Sequence &ivec)
{
	for_each (ivec.begin(), ivec.end(), [] (const int &s) { cout << s << " ";});
	cout << endl;
}
int main ()
{
	vector<int> ivec  {1,2,3,4,5,6,7,8,9};
	list<int> iivec, bivec, fivec;
	//auto v1 = inserter (iivec, iivec.begin()), v2 = back_inserter (ivec), v3 = front_inserter;
	
	copy (ivec.begin(), ivec.end(), inserter (iivec, iivec.begin()));
	copy (ivec.begin(), ivec.end(), back_inserter (bivec));
	copy (ivec.begin(), ivec.end(), front_inserter (fivec));
	print (iivec);
	print (bivec);
	print (fivec);
	
}
