#pragma once

//交换函数
void Swap(int *a, int *b);

//插入排序
void InsertSort(int* a, int n);

//希尔排序
void ShellSort(int* a, int n);

//选择排序
void SelectSort(int* a, int n);

//堆排序
void HeapSort(int *a, int n);
//建堆
void HeapCreate(int *a, int n);
//向下调整算法
void AdjustDown(int *a, int n, int root);

//冒泡排序
void BubbleSort(int *a, int n);

//快速排序
void QuickSort(int *a, int n);

//打印函数
void Print(int* a, int n);






//交换函数
void Swap(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

//插入排序
void InsertSort(int* a, int n)
{
	int i, j;
	for (i = 1; i < n; ++i)
	{
		int tmp = a[i];
		for ( j = i - 1; j >= 0 && tmp < a[j]; --j)
		{
			//if (tmp < a[j])
			//{
				a[j + 1] = a[j];
			//}
			//else
			//{
			//	break;
			//}
		}
		a[j + 1] = tmp;
	}
}

//希尔排序
void ShellSort(int* a, int n)
{
	for (int gap = n / 2; gap > 0; gap /= 2)
	{
		for (int i = 0; i < n - gap; ++i)
		{

			int end = i;
			int tmp = a[end + gap];

			while (end >= 0)
			{
				if (tmp < a[end])
				{
					a[end + gap] = a[end];
					end -= gap;
				}
				else
				{
					break;
				}
			}
			a[end + gap] = tmp;
		}
	}
}

//选择排序
void SelectSort(int* a, int n)
{
	int start = 0, end = n - 1;
	
	while (start < end)
	{
		int mini = start, maxi = end;
		for (int i = start; i <= end; ++i)
		{
			if (a[i] < a[mini])
			{
				mini = i;
			}
			if (a[i] > a[maxi])
			{
				maxi = i;
			}
		}
		Swap(&a[start], &a[mini]);
		if (start == maxi)
		{
			maxi = mini;
		}
		Swap(&a[end], &a[maxi]);
		++start;
		--end;

	}
}

//堆排序
void HeapSort(int *a, int n)
{
	HeapCreate(a, n);

	while (n > 1)
	{
		Swap(&a[0], &a[n - 1]);
		n--;
		AdjustDown(a, n, 0);
	}

}
//向下调整算法
void AdjustDown(int *a, int n, int root)
{
	int parent = root;
	int child = 2 * parent + 1;

	while (child < n)
	{
		if (child + 1 < n && a[child] < a[child + 1])
		{
			child++;
		}

		if (a[parent] < a[child])
		{
			Swap(&a[parent], &a[child]);
			parent = child;
			child = 2 * parent + 1;
		}
		else
		{
			break;
		}
	}

}
//排升序建大堆
void HeapCreate(int *a, int n)
{
	int i = (n - 2) / 2;
	for (; i >= 0; --i)
	{
		AdjustDown(a, n, i);
	}

}

//冒泡排序
void BubbleSort(int *a, int n)
{
	for (int i = 0; i < n - 1; ++i)
	{
		int flag = 0;
		for (int j = 1; j < n - i; ++j)
		{
			if (a[j - 1] > a[j])
			{
				Swap(&a[j - 1], &a[j]);
				flag = 1;
			}
		}
		if (flag == 0)
		{
			break;
		}
	}
}


//挖坑法
int DigPitMethod(int *a, int begin, int end)
{
	int key = a[end];
	int pit = end;
	while (begin < end)
	{
		while (begin < end && a[begin] <= key)
		{
			++begin;
		}

		a[pit] = a[begin];
		pit = begin;

		while (begin < end && a[end] >= key)
		{
			--end;
		}

		a[pit] = a[end];
		pit = end;
	}
	a[pit] = key;
	return pit;
}
//前后指针法
int PrevPostPointer(int *a, int begin, int end)
{
	int key = a[end];
	int cur = begin;
	int prev = begin - 1;
	while (cur < end)
	{
		if (a[cur] < key && ++prev != cur)
		{
			Swap(&a[cur], &a[prev]);
		}
		++cur;
		
	}
	++prev;
	Swap(&a[end], &a[prev]);
	return prev;
}
void _QuickSort(int *a, int begin, int end)
{
	if (begin >= end)
	{
		return;
	}
	int pitindex = DigPitMethod(a, begin, end);
	_QuickSort(a, 0, pitindex - 1);
	_QuickSort(a, pitindex + 1, end);
}
//快速排序
void QuickSort(int *a, int n)
{
	_QuickSort(a, 0, n - 1);
}


//打印函数
void Print(int* a, int n)
{
	for (int i = 0; i < n; ++i)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
}