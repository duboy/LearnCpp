#include <string>

class Screen
{
public:
	using pos = std::string::size_type;
	
	Screen () = default;
	Screen (pos w, pos h) : width(w), height(h), contents(h*w, ' ') {}
	Screen (pos w, pos h, char s) : width(w), height(h), contents(w*h, s) {}
	Screen &move (pos r, pos c);
	Screen &set (char c);
	Screen &display (std::ostream &os)
	{
		do_display (os);
		return *this;
	}
	const Screen &display (std::ostream &os) const
	{
		do_display (os);
		return *this;
	}
private:
	pos cursor = 0;
	pos height = 0, width = 0;
	std::string contents;
	
	void do_display (std::ostream &os) 
	{
		os << contents;
	}
};
inline Screen &Screen::move (pos r, pos c) const
{
	cursor = r * width + c;
	return *this;
}
inline Screen &Screen::set (char c)
{
	contents[cursor] = c;
	return *this;
}