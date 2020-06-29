#include <iostream>
#include <vector>
#include <cstdio>

//ÐÇ¼ÊÃÜÂë
int main()
{
	int n;
	while (std::cin >> n)
	{
		int FibTable[10001] = { 0, 1, 2, 3 };
		for (int i = 4; i < 10001; ++i)
		{
			FibTable[i] = FibTable[i - 2] + FibTable[i - 1];
			FibTable[i] %= 10000;
		}
		int count = 0;
		for (int i = 0; i < n; ++i)
		{
			std::cin >> count;
			printf("%04d", FibTable[count]);
		}
		std::cout << std::endl;
	}
	return 0;
}