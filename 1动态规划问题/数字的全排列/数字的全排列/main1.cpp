#include <iostream>
#include <algorithm>

using namespace std;

//Êý×ÖÈ«ÅÅÁÐ
bool entrance(double * num, int n, int end)
{
	if (n >= end)
	{
		for (int i = 0; i < end; ++i)
		{
			cout << num[i] << ' ';
		}
		cout << endl;
		return true;
	}

	int i;
	for (i = n; i < end; ++i)
	{
		swap(num[i], num[n]);
		entrance(num, n + 1, end);
		swap(num[n], num[i]);
	}

	return false;
}

int main()
{
	double num[4];
	for (auto & e : num)
	{
		cin >> e;
	}

	entrance(num, 0, 4);

	system("pause");
	return 0;
}