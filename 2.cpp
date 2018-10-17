#include <iostream>
//2

int main()
{
	int a;
	std::cout << "a = " << std::endl;
	std::cin >> a;
	if (a / 100 == 6)
	{
		std::cout << "True" << std::endl;
	}
	else
	{
		std::cout << "false";
	}
	system("pause");
	return 0;
}