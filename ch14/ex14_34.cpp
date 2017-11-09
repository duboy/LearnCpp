#include <iostream>

struct ifThenElse
{
	int operator() (int a, int b, int c)
	{
		if (a > 0)
			return b;
		else 
			return c;
	}
};

int main ()
{
	ifThenElse IF;
	std::cout << IF(1, 2, 3);
	std::cout << IF(-1, 2, 3);
}