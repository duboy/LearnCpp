#include <iostream>
#include <utility>
template <typename F, typename T1, typename T2>
void flip1(F f, T1 t1, T2 t2)
{
	f(t2, t1);
}

template <typename F, typename T1, typename T2>
void flip2(F f, T1 &&t1, T2 &&t2)
{
	f(t2, t1);
}

template <typename F, typename T1, typename T2>
void flip(F f, T1 &&t1, T2 &&t2)
{
	f(std::forward<T2>(t2), std::forward<T1>(t1));
}

void f(int v1, int &v2)
{
	std::cout << v1 << ++v2 << std::endl;
}
void g(int &&i, int &&j)
{
	std::cout << i << " " << std::endl;
}

int main()
{
	int v1 = 1, v2 = 1;
	flip1(f, v1, v2);
	std::cout << v1 << v2 << std::endl;
	
	flip2(f, v1, v2);
	std::cout << v1 << v2 << std::endl;
	
	int i = 0;
	flip(f, i, 42);
	std::cout << i << std::endl;
}