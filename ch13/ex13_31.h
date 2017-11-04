#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::cin;
using std::endl;

class HasPtr
{
public:
	HasPtr(const string &s = string()) :
		ps(new string(s)), i(0), use(new std::size_t(1)) { }
		
	HasPtr(const HasPtr &p) :
		ps(p.ps), i(p.i), use(p.use) { ++*use; }
		
	HasPtr &operator=(const HasPtr&);
	friend void swap(HasPtr &, HasPtr &);
	bool HasPtr::operator<(const HasPtr &rhs);
	~HasPtr();
private:
	string *ps;
	int i;
	std::size_t *use;
};
HasPtr::~HasPtr()
{ 
	if (--*use == 0)
	{
		cout << "delete " << *ps << endl;
		delete ps;
		delete use;
	}
}
HasPtr &HasPtr::operator=(const HasPtr &rhs)
{
	++*rhs.use;
	if (--*use == 0)
	{
		cout << "delete " << *ps << endl;
		delete use;
		delete ps;
	}
	use = rhs.use;
	ps = rhs.ps;
	return *this;
}

void swap(HasPtr &lhs, HasPtr &rhs)
{
	using std::swap;
	swap(lhs.ps, rhs.ps);
	swap(lhs.i, rhs.i);
	cout << "swap called!" << endl;
}

bool HasPtr::operator<(const HasPtr &rhs)
{
	return *ps < *rhs.ps;
}