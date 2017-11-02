#include <iostream>
#include <memory>
using namespace std;
using Upint = unique_ptr<int>;
int main ()
{
	Upint up(new int(42));
	Upint up1;
	up1 = up;
}