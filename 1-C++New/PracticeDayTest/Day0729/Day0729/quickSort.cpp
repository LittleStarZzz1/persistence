#include <iostream>
#include <algorithm>

using namespace std;

//hoare法
int HoareMethod(int* a, int begin, int end)
{
	int key = a[end];
	int keyindex = end;

	while (begin < end)
	{
		while (begin < end && a[begin] <= key)
			++begin;
		while (begin < end && a[end] >= key)
			--end;

		swap(a[begin], a[end]);
	}
	swap(a[begin], a[keyindex]);
	return begin;
}

//挖坑法
int DigHoleMethod(int* a, int begin, int end)
{
	int key = a[end];

	while (begin < end)
	{
		//a[begin] == a[end] == key时没有 '=' 会死循环
		while (begin < end && a[begin] <= key)
			begin++;
		a[end] = a[begin];

		while (begin < end && a[end] >= key)
			end--;
		a[begin] = a[end];
	}
	a[begin] = key;

	return begin;
}

int PrevCurMethod(int* a, int begin, int end)
{
	int prev = begin - 1;
	int cur = begin;
	int key = a[end];

	while (cur < end)
	{
		while (a[cur] < key && ++prev != cur)
			swap(a[cur], a[prev]);
		++cur;
	}

	++prev;
	swap(a[end], a[prev]);
	return prev;
}

void _QuickSort(int* a, int begin, int end)
{
	if (begin >= end)
		return;
	int keyindex = PrevCurMethod(a, begin, end);

	_QuickSort(a, begin, keyindex - 1);
	_QuickSort(a, keyindex + 1, end);

}

void QuickSort(int* a, int n)
{
	_QuickSort(a, 0, n - 1);
}

//向下调整
void adjustDown(int* a, int n, int root)
{
	int parent = root;
	int child = parent * 2 + 1;

	while (child < n)
	{
		//选出左右孩子中较大的一个
		if (child + 1 < n && a[child + 1] > a[child])
			child += 1;
		if (a[child] > a[parent])
		{
			swap(a[parent], a[child]);
			parent = child;
			child = parent * 2 + 1;
		}
		else
			break;
	}
}
void HeapSort(int* a, int n)
{
	int noleaf = (n - 2) / 2;
	while (noleaf >= 0)
	{
		adjustDown(a, n, noleaf);
		--noleaf;
	}

	int end = n - 1;
	while (end > 0)
	{
		swap(a[0], a[end]);
		adjustDown(a, end--, 0);
	}	
}

void BableSort(int* a, int n)
{
	for (int i = 1; i < n; ++i)
	{
		for (int j = 0; j < n - i; ++j)
		{
			if (a[j - 1] > a[j])
				swap(a[j - 1], a[j]);
		}
	}
}

void _MergeSort(int* a, int begin, int end, int* tmp)
{
	if (begin >= end)
		return;

	int mid = (begin + end) >> 1;
	_MergeSort(a, begin, mid, tmp);
	_MergeSort(a, mid + 1, end, tmp);

	int begin1 = begin, end1 = mid;
	int begin2 = mid + 1, end2 = end;
	int index = begin;

	while (begin1 <= end1 && begin2 <= end2)
	{
		if (a[begin1] < a[begin2])
			tmp[index++] = a[begin1++];
		else
			tmp[index++] = a[begin2++];
	}

	if (begin1 <= end1)
	{
		while (begin1 <= end1)
			tmp[index++] = a[begin1++];
	}

	if (begin2 <= end2)
	{
		while (begin2 <= end2)
			tmp[index++] = a[begin2++];
	}

	memcpy(a + begin, tmp + begin, sizeof(int)* (end - begin + 1));
}
void MergeSort(int* a, int n)
{
	int* tmp = (int*)malloc(sizeof(int)* n);
	_MergeSort(a, 0, n - 1, tmp);
	free(tmp);
}

int main()
{
	int a[] = { 9, 5, 6, 1, 5, 3, 2, 1, 10, 23, 0, 4 };
	int n = sizeof(a) / sizeof(int);
	//QuickSort(a, n);
	//HeapSort(a, n);
	//BableSort(a, n);
	MergeSort(a, n);

	for (int i = 0; i < n; ++i)
		cout << a[i] << ' ';

	cout << endl;

	system("pause");
	return 0;
}