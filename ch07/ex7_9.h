#include <string>
#include <iostream>
struct Person 
{
	std::string name;
	std::string address;
	
	std::string getName () const {return name;};
	std::string getAddres () const {return address;};
};

std::istream &read (std::istream &is, Person &person)
{
	is >> person.name >> person.address;
	return is;
}
std::ostream &print (std::ostream &os, Person &person)
{
	os << person.name << ' ' << person.address;
	return os;
}