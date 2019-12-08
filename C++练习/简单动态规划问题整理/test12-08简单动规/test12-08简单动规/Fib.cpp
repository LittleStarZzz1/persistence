#include <iostream>

using namespace std;

//递归版本
int Fib(int n)
{
	if (n == 0)
	{
		return 0;
	}
	if (n <= 2)
	{
		return 1;
	}
	return Fib(n - 2) + Fib(n - 1);
}

//非递归版本
int FibN(int n)
{
	if (n == 0)
	{
		return 0;
	}

	if (n <= 2)
	{
		return 1;
	}
	int an_2 = 1;
	int an_1 = 1;
	int an;

	while (n > 2)
	{
		an = an_2 + an_1;
		an_2 = an_1;
		an_1 = an;
		n--;
	}
	return an;
}

int main1()
{
	int n;
	cin >> n;

	cout << "递归求解可得: " << Fib(n) << endl;
	cout << "非递归求解可得: " << FibN(n) << endl;


	system("pause");
	return 0;
}