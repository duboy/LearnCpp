#include <iostream>
#include <string>

// using std::cin;
// using std::cout;
// using std::endl;
// using std::string;
using namespace std;
int main ()
{
	string str1, str2;
	cin >> str1 >> str2;

	if (str1.size() == str2.size())
		cout << "They are equal!";
	else
		cout << (str1.size() > str2.size() ? str1 : str2) << endl;
	
	return 0;
}