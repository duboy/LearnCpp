#include <iostream>
#include <numeric>
#include <vector>
using namespace std;

int main ()
{
	vector<double> ivec {1,2,3,4,5,6,7,8,9,10};
	double sum = accumulate (ivec.cbegin(), ivec.cend(), 0.0);
	cout << sum << endl;
}