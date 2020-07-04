#include <iostream>
#include <algorithm>

//因子个数
int main()
{
	int n;
	while (std::cin >> n)
	{
		int count = 0;

		for (int i = 2; i <= sqrt(n); ++i)
		{
			if (n % i == 0)
			{
				while (n % i == 0)
				{
					n /= i;
				}
				++count;
			}
		}
		if (n != 1)
			++count;
		std::cout << count << std::endl;
	}

	return 0;
}