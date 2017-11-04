#include <string>
#include <iostream>
static int tatalID;
class Employee
{
public:
	Employee() { ID = ++tatalID; }
	Employee(std::string &s) : name(s), ID(++tatalID) { }
	Employee(Employee &e) : name(e.name), ID(++tatalID) { }
	void print()
	{
		std::cout << "name: " << name << "\t" << ID << std::endl;
	}
private:
	std::string name;
	int ID;
	
};