#include <iostream>
#include <string>
using std::string;
using std::ostream;
class Quote
{
public: 
	Quote() = default;
	Quote(const string &book, double sale_price) :
			bookNO(book), price(sale_price) { }
	string isbn() const { return bookNO; }
	
	virtual double net_price(std::size_t n) const
	{
		return n * price;
	}
	virtual ~Quote() = default;
private:
	string bookNO;
protected:
	double price = 0.0;
};

double print_total(ostream &os, const Quote &item, std::size_t n)
{
	double ret = item.net_price(n);
	os << "ISBN: " << item.isbn()
		<< " # sold: " << n << " total due: " << ret << std::endl;
	
	return ret;
}