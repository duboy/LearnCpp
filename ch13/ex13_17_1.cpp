#include <iostream>
using namespace std;

class numbered 
{
public:
	numbered() = default;

	int mysn;
};

void f(numbered s)
{
	cout << s.mysn << endl;
}

int main ()
{
	numbered a, b = a, c = b;
	f(a);
	f(b);
	f(c);
}