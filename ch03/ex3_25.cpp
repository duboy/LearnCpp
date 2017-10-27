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
	vector<unsigned> scores(11, 0);
	unsigned grade;
	while (cin >> grade)
		++ *(scores.begin() + grade / 10);
	
	for (auto score : scores)
		cout << score << ' ';
	
	return 0;
}