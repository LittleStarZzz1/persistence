#include <iostream>
#include <cstdio>

//年会抽奖
//错排问题

int main()
{
	long long nogetGift[21] = { 0, 0, 1 };
	long long all[21] = { 0, 1, 2 };

	for (int i = 3; i < 21; ++i)
	{
		nogetGift[i] = (i - 1) * (nogetGift[i - 1] + nogetGift[i - 2]);
		all[i] = i * all[i - 1];
	}
	int n;
	while (std::cin >> n)
	{
		printf("%4.2lf%%\n", 100 * double(nogetGift[n]) / all[n]);
	}


	return 0;
}