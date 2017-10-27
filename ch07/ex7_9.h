#include <string>
class Person 
{
	std::string name;
	std::string address;
public:
	std::string getName () const {return name;};
	std::string getAddres () const {return address;};
};

istream &read (istream &is, Person &person)
{
	is >> person.name >> person.address;
	return is;
}
ostream &print (ostream &os, Person &person)
{
	os << person.name << ' ' << person.address;
	return os;
}