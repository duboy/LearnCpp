#include <iostream>
#include "..\\ex15.15.16\\header.h"
#include <vector>
#include <memory>
using std::vector;
int main()
{
	vector<Quote> pvec;
	Bludk_quote b1("b1", 10, 5, 0.2);
	pvec.push_back(b1);
	Bludk_quote b2("b2", 10, 5, 0.2);
	pvec.push_back(b1);
	Bludk_quote b3("b3", 10, 5, 0.2);
	pvec.push_back(b2);
	
	for (auto beg = pvec.begin(); beg != pvec.end(); ++beg)
	{
		std::cout << beg->net_price(5) << std::endl;
	}
	pvec.clear();
	vector<std::shared_ptr<Quote>> sqvec;
	sqvec.push_back(std::make_shared<Quote>("b1", 10));
}