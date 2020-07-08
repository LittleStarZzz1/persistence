#include <iostream>

//¿ÍËÆÔÆÀ´
int main()
{
	int from, to;
	long long FibTable[81] = { 0, 1, 1, 2, 3, 5 };
	for (int i = 6; i < 81; ++i)
	{
		FibTable[i] = FibTable[i - 2] + FibTable[i - 1];
	}

	while (std::cin >> from >> to)
	{
		long long sum = 0;
		for (int i = from; i <= to; ++i)
		{
			sum += FibTable[i];
		}
		std::cout << sum << std::endl;
	}

	return 0;
}


