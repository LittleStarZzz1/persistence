#include <iostream>

//给定三条边判断能否构成三角形
int main()
{
	double a, b, c;
	while (std::cin >> a >> b >> c)
	{
		if (a > b)
			std::swap(a, b);//保证a <= b
		if (b < c)
			std::swap(b, c);//保证b <= c
		if ((a + b > c) && (b - a < c))
			std::cout << "Yes" << std::endl;
		else
			std::cout << "No" << std::endl;
	}

	return 0;
}