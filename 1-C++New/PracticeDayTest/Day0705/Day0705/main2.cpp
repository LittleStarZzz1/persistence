#include <iostream>
#include <algorithm>

//ºï×Ó·ÖÌÒ
int main()
{
	int n;
	while (std::cin >> n)
	{
		if (n == 0)
			break;
		std::cout << (long)pow(5, n) - 4 << " " << (long)pow(4, n) + n - 4 << std::endl;
	}

	return 0;
}