#include <iostream>
#include "..\\ex15.3\\Quote.h"

class Bulk_quote : public Quote
{
public: 
	Bulk_quote() = default;
	Bulk_quote(const string &book, double sale_price, std::size_t qty, double disc) :
				Quote(book, sale_price), min_qty(qty), discount(disc) { }
	
	double net_price(std::size_t) const override;
	
private:
	std::size_t min_qty = 0;
	double discount = 0.0;
};
double Bulk_quote::net_price(std::size_t n) const
{
	if (n >= min_qty)
		return n * (1 - discount) * price;
	else
		return n * price;
}
int main ()
{
	Bulk_quote b1("1234", 50, 7, 0.2);
	print_total(std::cout, b1, 6);
}