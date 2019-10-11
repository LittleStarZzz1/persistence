#include <iostream>

using namespace std;

void InsertSort(int * src, int n)
{
	int i, j;
	int tmp;

	for (i = 1; i < n; ++i)
	{
		tmp = src[i];
		for (j = i; j > 0 && src[j - 1] > tmp; --j)
		{
			src[j] = src[j - 1];
		}
		src[j] = tmp;
	}
}

void InsertSort(float * src, int n)
{
	int i, j;
	float tmp;

	for (i = 1; i < n; ++i)
	{
		tmp = src[i];
		for (j = i; j > 0 && src[j - 1] > tmp; --j)
		{
			src[j] = src[j - 1];
		}
		src[j] = tmp;
	}
}

int main()
{
	int a[5] = { 5, 1, 4, 2, 3 };
	float f[5] = { 8.2, 1.7, 3.5, 2.6, 4.8 };

	InsertSort(a, 5);
	InsertSort(f, 5);

	for (auto & ai : a)
	{
		cout << ai << ' ';
	}

	cout << endl;

	for (auto & af : f)
	{
		cout << af << ' ';
	}

	system("pause");
	return 0;
}