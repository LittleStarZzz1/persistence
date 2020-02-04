#include <iostream>

using namespace std;

int f(int n)
{
	if (n)
	{
		return f(n - 1) + n;
	}
	else
	{
		return n;
	}
}

int main1()
{
	cout << f(4) << endl;

	system("pause");
	return 0;
}