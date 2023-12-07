#include <iostream>
#include <cmath>
int main()
{
	double a;
	double b;
	std::cin >> a; std::cin >> b;
	double c = sqrt((a * a) + (b * b));

	std::cout << c  << std::endl;
}