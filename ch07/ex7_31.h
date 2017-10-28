#include <string>

class Y;

class X
{
public:
	std::string x;
	Y *y;
};

class Y
{
public:
	std::string y;
	X x;
}