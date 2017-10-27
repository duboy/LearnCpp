#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main ()
{
	string str1, str2;
	cin >> str1 >> str2;

	cin >> str1 >> str2;
	
	if (str1 == str2)
		cout << "They are equal!";
	else
		cout << (str1 > str2) ? (cout << str2) : (cout << str1) << endl;
	
	return 0;
}