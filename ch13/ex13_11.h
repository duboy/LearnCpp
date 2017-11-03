#include <string>
#include <iostream>
class HasPtr
{
public:
	HasPtr(const std::string &s = std::string()) :
		ps(new std::string(s)), i(0) { }
		
	HasPtr(const HasPtr &);
	HasPtr &operator=(const HasPtr &orig);
	~HasPtr()
	{
		delete ps;
		std::cout << "deconstructor called!" << std::endl;
	}
	void print()
	{
		std::cout << *ps << std::endl;
	}
private:
	std::string *ps;
	int i;
};

HasPtr::HasPtr(const HasPtr &orig) : ps(new std::string(*orig.ps)), i(orig.i) { }

HasPtr &HasPtr::operator=(const HasPtr &orig) 
{
	delete ps; //此时ps已经初始化，指向一个空的string，不释放会产生内存泄漏。
	ps = new std::string(*orig.ps);
	i = orig.i;
	
	return *this;
}