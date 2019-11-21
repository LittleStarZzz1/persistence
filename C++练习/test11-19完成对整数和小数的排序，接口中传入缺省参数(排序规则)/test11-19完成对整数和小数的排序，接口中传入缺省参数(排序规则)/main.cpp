#include <iostream>

using namespace std;

//1. 写一个排序函数接口，能完成对整数和小数的排序
//2. 接口中多传入一个缺省参数。如果不指定就是用A排序方式，指定了就按传入的排序方式

void InsertSort1(int * src, int n)
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

void InsertSort1(float * src, int n)
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

int main1()
{
	int a[5] = { 5, 1, 4, 2, 3 };
	float b[5] = { 8.2, 1.7, 3.5, 2.6, 4.8 };

	InsertSort1(a, 5);
	InsertSort1(b, 5);

	for (auto & i : a)
	{
		cout << i << ' ';
	}

	cout << endl;

	for (auto & i : b)
	{
		cout << i << ' ';
	}

	cout << endl;

	system("pause");
	return 0;
}