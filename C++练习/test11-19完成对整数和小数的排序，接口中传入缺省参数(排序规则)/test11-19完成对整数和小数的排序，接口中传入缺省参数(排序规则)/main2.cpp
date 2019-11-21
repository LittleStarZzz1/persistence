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

void shellSort(int* src, int n)
{
	int i, j, k;
	int gap;
	int tmp;

	for (gap = n / 2; gap; gap /= 2)
	{
		for (k = 0; k < gap; ++k)
		{
			//²åÈëÅÅÐò
			for (i = gap + k; i < n; i += gap)
			{
				tmp = src[i];

				for (j = i; j >= gap && src[j - gap] > tmp; j -= gap)
				{
					src[j] = src[j - gap];
				}

				src[j] = tmp;
			}
		}
	}
}


void Sort(int * src, int n, int flag = 0)
{
	switch (flag)
	{
	case 0:
		InsertSort(src, n);
		break;
	case 1:
		shellSort(src, n);
		break;
	}

}

int main()
{
	int src[11] = { 1, 3, 6, 7, 9, 2, 4, 8, 10, 5, 11 };

	//Sort(src, 11);
	Sort(src, 11, 1);

	for (auto & i : src)
	{
		cout << i << ' ';
	}

	cout << endl;


	system("pause");
	return 0;
}