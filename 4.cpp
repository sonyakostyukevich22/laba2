#include <iostream>
#include <cmath>
//4/5

int main()
{
	double x;
	std::cout << "x = " << std::endl;
	std::cin >> x;
	double a;
	a = (((3 - 4 * cos( 2 * x) + cos(4 * x)) / 8) * pow(sin(x),4) / pow(sin(x),2) + pow(cos(x),2);
	std::cout << a << std::endl;
	system("pause");
	return 0;
}