#include <iostream>
#include "..\\ex15.3\\Quote.h"

class Disc_quote : public Quote
{
public:
	Disc_quote() = default;
	Disc_quote(const string &book, double sale_price, std::size_t qty, double disc) :
			Quote(book, sale_price), qty(qty), disc(disc) { }
	virtual double net_price(std::size_t n) const = 0;
protected:
	std::size_t qty;
	double disc;
};

class Bludk_quote : public Disc_quote
{
public:
	Bludk_quote() = default;
	Bludk_quote(const string &book, double sale_price, std::size_t qty, double disc) :
			Disc_quote(book, sale_price, qty, disc) { }
	virtual double net_price(std::size_t n) const override
	{ 
		if (n >= qty)
			return n * (1 - disc) * price;
		else
			return n * price;
	}
};