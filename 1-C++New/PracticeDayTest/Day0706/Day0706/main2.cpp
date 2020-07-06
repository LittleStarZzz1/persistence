// write your code here cpp
#include <iostream>
#include <algorithm>

using namespace std;

//分解因数
bool isLeap(int n)
{
	if (n == 2)
		return true;
	for (int i = 2; i <= sqrt(n); ++i)
	{
		if (n % i == 0)
			return false;
	}
	return true;
}

int main()
{
	int n;
	while (cin >> n)
	{
		cout << n << ' ' << "=" << ' ';
		//cout << n << "=";
		for (int i = 2; i <= sqrt(n); ++i)
		{
			while (n % i == 0 && isLeap(i))
			{
				cout << i << ' ';
				//cout << i << '*';
				n /= i;
				if (n != 1)
					cout << '*' << ' ';
			}
		}
		if (n != 1)
			cout << n;
		cout << endl;
	}

	return 0;
}