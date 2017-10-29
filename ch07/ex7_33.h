#include <string>
#include <vector>
#include <iostream>

class Screen;

class Window_mgr
{
public:
	using ScreenIndex = std::vector<Screen>::size_type;
	std::vector<Screen> screens;
	inline void clear (ScreenIndex i);
}; 
class Screen
{
public:
	friend void Window_mgr::clear (ScreenIndex i); //申明友元
	
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
	pos Screen::size () const;
	
private:
	pos cursor = 0;
	pos height = 0, width = 0;
	std::string contents;
	
	void do_display (std::ostream &os) const
	{
		os << contents;
	}
};
inline Screen &Screen::move (pos r, pos c)
{
	cursor = r * width + c;
	return *this;
}
inline Screen &Screen::set (char c)
{
	contents[cursor] = c;
	return *this;
}

Screen::pos Screen::size () const  //7.33
{
	return height * width;
}

inline void Window_mgr::clear (ScreenIndex i) //7.32
{
	Screen &s = screens[i];
	s.contents = std::string (s.height * s.width, ' ');
}



