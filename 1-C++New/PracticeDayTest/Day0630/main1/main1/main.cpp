#include <iostream>

//�쵽������
int main()
{
	long double n, r;
	while (std::cin >> n >> r)
	{
		long double lengthOfRing;
		lengthOfRing = 3.14 * 2 * r;
		if (lengthOfRing < n)
			std::cout << "No" << std::endl;
		else
			std::cout << "Yes" << std::endl;
	}

	return 0;
}