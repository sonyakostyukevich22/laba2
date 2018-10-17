#include <iostream>
//3

int main()
{
	int a;
	std::cout << "a = " << std::endl;
	std::cin >> a;
	if (a % 7 == 0)
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