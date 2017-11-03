#include <string>
#include <memory>
class HasPtr
{
public:
	HasPtr(const std::string &s = std::string()) :
		ps(new std::string(s)), i(0) { }
		
	HasPtr(const HasPtr &);
private:
	std::string *ps;
	int i;
};

HasPtr::HasPtr(const HasPtr &orig) : ps(new std::string(*orig.ps)), i(orig.i) { }