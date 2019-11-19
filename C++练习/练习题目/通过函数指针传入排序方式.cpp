#include <iostream>

using namespace std;

bool cmpnum(int a, int b)
{
	return a < b;
}

//void InsertSort(int * src, int n)
//{
//	int i, j;
//	int tmp;
//
//	for (i = 1; i < n; ++i)
//	{
//		tmp = src[i];
//
//		for (j = i; j > 0 && src[j - 1] > tmp; --j)
//		{
//			src[j] = src[j - 1];
//		}
//
//		src[j] = tmp;
//	}
//}

bool cmptest(int a, int b)
{
	return a > b;
}

//通过函数指针传入排序规则
void InsertSort(int * src, int n, bool (*cmp)(int, int) = cmpnum)
{
	int i, j;
	int tmp;

	for (i = 1; i < n; ++i)
	{
		tmp = src[i];

		for (j = i; j > 0 && cmp(tmp, src[j - 1]); --j)
		{
			src[j] = src[j - 1];
		}

		src[j] = tmp;
	}
}

int main()
{
	int a[5] = { 5, 1, 4, 2, 3 };

	InsertSort(a, 5, cmptest);

	for (auto & i : a)
	{
		cout << i << ' ';
	}

	cout << endl;

	system("pause");
	return 0;
}