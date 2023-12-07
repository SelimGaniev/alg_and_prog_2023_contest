#include <iostream>
#include <cmath>
int main()
{
	double a;
	double b;
	double c;
	std::cin >> a; std::cin >> b; std::cin >> c;
	if (abs(a - b) < abs (a - c)) {

		if (a > b) {
			std::cout << "B" << " " << a - b << std::endl;
		}
		if (a < b) {
			std::cout << "B" << " " << b - a << std::endl;
		}

	}
	if (abs(a - b) > abs(a - c)) {
		if (a > c) {
			std::cout << "C" << " " << a - c << std::endl;
		}
		if (a < c) {
			std::cout << "C" << " " << c - a << std::endl;
		}


	}
}