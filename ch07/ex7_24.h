#include <string>

class Screen
{
public:
	using pos = std::string::size_type;
	
	Screen () = default;
	Screen (pos &w, pos &h) : cursor(w), width(h), contents(h*w, ' ') {}
	Screen (pos &w, pos &h, std::string &s) : cursor(w), width(h), contents(s) {}
private:
	pos cursor = 0;
	pos height = 0, width = 0;
	std::string contents;
};