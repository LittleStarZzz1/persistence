#include <iostream>

using namespace std;

//ÆûË®Æ¿ÎÊÌâ
int maxDrinkNum(int n)
{
	int total = 0;
	int tmp;
	while (n >= 3)
	{
		total += (n / 3);
		tmp = n % 3;
		n = tmp + (n / 3);
	}
	if (n == 2)
		return total + 1;
	return total;
}

int main()
{
	int n;
	while (cin >> n)
	{
		if (n == 0)
			break;
		cout << maxDrinkNum(n) << endl;
	}
	return 0;
}
