#include <iostream>
template<typename T>
class shared_pointer
{
public:
	shared_pointer(const T &pointer) : use(new std::size_t(1)), p(new T(pointer)) { }
	shared_pointer(const shared_pointer &oldP) : p(oldP.p)
	{
		++*use;
	}
	shared_pointer &operator=(const shared_pointer &rhs);
	~shared_pointer();
//private:
	std::size_t *use;
	T *p;
};
template<typename T> 
shared_pointer<T> &shared_pointer<T>::operator=(const shared_pointer &rhs)
{
	++*rhs.use;
	if (--*use == 0)
	{
		std::cout << "delete shared_pointer." << *p << std::endl;
		delete p;
		delete use;
	}
	p = rhs.p;
	use = rhs.use;
	return *this;
}
template<typename T>
shared_pointer<T>::~shared_pointer()
{
	if (--*use == 0)
	{
		std::cout << "delete shared_pointer. ~ " << *p << std::endl;
		delete p;
		delete use;
	}
}
