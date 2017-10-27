#include <string>
class Person 
{
	std::string name;
	std::string address;
public:
	std::string getName () const {return name;};
	std::string getAddres () const {return address;};
};