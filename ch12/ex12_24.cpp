#include <iostream>
#include <memory>
#include <string>
using namespace std;

int main ()
{
	char *p = new char[10];
	cin.get(p, 10);
	cout << p;
}