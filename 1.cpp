#include <iostream>
//1���� ����� �����, ������� 99999. ����� �����, ��������������� ������� ����� ����� � ������ ����� �����.


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