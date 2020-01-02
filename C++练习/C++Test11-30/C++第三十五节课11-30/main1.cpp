#include <iostream>

using namespace std;


int main()
{
	int i;
	int n = 10;
	int sum = 0;

	for (i = 0; i < n; ++i)
	{
		sum += i;
	}

	cout << sum;


	system("pause");
	return 0;
}