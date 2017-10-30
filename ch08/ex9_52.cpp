#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main ()
{
	stack<char> exp;
	string inExp("This is ((asd)pezy).");
	bool bSeen = false;
	for (auto &s : inExp)
	{
		if (s == '(')
		{
			bSeen = true;
			continue;
		}
		else if (s == ')')
			bSeen = false;
		if (bSeen)
			exp.push (s);			
	}
	string result;
	while (!exp.empty())
	{
		result += exp.top ();
		exp.pop ();
	}
	
	inExp.replace (inExp.find ("(") + 1, result.size (), result);
	
	cout << inExp << endl;
	cout << result << endl;
	
}