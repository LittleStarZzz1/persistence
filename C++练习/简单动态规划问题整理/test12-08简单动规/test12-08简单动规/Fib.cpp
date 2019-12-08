#include <iostream>

using namespace std;

//�ݹ�汾
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

//�ǵݹ�汾
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

	cout << "�ݹ����ɵ�: " << Fib(n) << endl;
	cout << "�ǵݹ����ɵ�: " << FibN(n) << endl;


	system("pause");
	return 0;
}