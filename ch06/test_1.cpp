#include <iostream>
#include <string>
using namespace std;

const string &shorerString ( const string &s1,  const string &s2)
{
	return s1.size() <= s2.size() ? s1 : s2;
}
 
int main ()
{
	string s1("saa"), s2("s");
	string &s3 = shorerString (s1, s2);//无法从“const std::string”转换为“std::string &”
	cout << s3;
	
}