#include <iostream>
#include <memory>
using namespace std;
void process(shared_ptr<int> ptr)
{
	cout << " ptr used counted: " << ptr.use_count() << endl;
}

int main ()
{
	shared_ptr<int> p(new int(42));
	auto q = p;

	cout << " p used counted: " << p.use_count() << endl;
	*p = 43;
	process(shared_ptr<int> (p));
	*p = 42;
	process(shared_ptr<int> (p));
}