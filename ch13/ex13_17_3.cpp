#include <iostream>
using namespace std;

static int sn;

class numbered 
{
public:
	numbered() : mysn(++sn) { }
	// numbered(numbered &nu) : mysn(++sn) { }
	int mysn;
};

void f(const numbered &s)
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