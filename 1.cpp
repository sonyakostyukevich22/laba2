#include <iostream>
//1Дано целое число, большее 99999. Найти цифру, соответствующую разряду сотен тысяч в записи этого числа.


int main()
{
	int a;
	std::cout << "a = " << std::endl;
	std::cin >> a;
	int e = a / 100000;
	std::cout << e << std::endl;

	system("pause");
	return 0;
}