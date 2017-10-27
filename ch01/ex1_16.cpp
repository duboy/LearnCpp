#include <iostream>

int main ()
{
	std::cout << "Please input a series numbers." << std::endl;
	
	int sum = 0, value = 0;
	while (std::cin >> value) {
		sum += value;
	}
	std::cout << "The sum of those numbers is " << sum << std::endl;
	
	return 0;
	
}