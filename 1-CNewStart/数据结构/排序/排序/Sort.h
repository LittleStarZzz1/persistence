#pragma once

#include "stack.h"

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

//归并排序
void MergeSort(int* a, int n);

//计数排序
void CountSort(int *a, int n);

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
	for (int gap = n / 3 + 1; gap > 0; gap /= 2)
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

//当数组有序时,快排会变成最坏的情况,为了优化快排,采用三数取中
int GetMidIndex(int *a, int begin, int end)//三数取中
{
	int mid = (begin + end) >> 1;//即(begin + end) / 2,移位效率较高
	if (a[begin] < a[mid])
	{
		if (a[mid] < a[end])
		{
			return mid;
		}
		else // a[mid] > a[end]
		{
			if (a[begin] < a[end])
			{
				return end;
			}
			else
			{
				return begin;
			}
		}
	}
	else // a[begin] > a[mid]
	{
		if (a[mid] > a[end])
		{
			return mid;
		}
		else
		{
			if (a[begin] > a[end])
			{
				return end;
			}
			else
			{
				return begin;
			}
		}
	}
}

//1. 左右指针法/hoare法
int HoareMethod(int *a, int begin, int end)
{
	int key = a[end];
	int keyindex = end;
	while (begin < end)
	{
		while (begin < end && a[begin] <= key)
		{
			++begin;
		}
		while (begin < end && a[end] >= key)
		{
			--end;
		}
		Swap(&a[begin], &a[end]);
	}
	Swap(&a[begin], &a[keyindex]);
	return begin;
}
//2. 挖坑法
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
//3. 前后指针法        使用三数取中优化快排
int PrevCurPointer(int *a, int begin, int end)
{
	int keyindex = GetMidIndex(a, begin, end);
	Swap(&a[keyindex], &a[end]);
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
	//int keyindex = DigPitMethod(a, begin, end);
	//int keyindex = HoareMethod(a, begin, end);
	int keyindex = PrevCurPointer(a, begin, end);
	_QuickSort(a, begin, keyindex - 1);
	_QuickSort(a, keyindex + 1, end);
}
//快排非递归, 借助栈实现, 防止数据量过大时出现栈溢出
void _QuickSortNoR(int *a, int begin, int end)
{
	Stack st;
	StackInit(&st);
	StackPush(&st, begin);
	StackPush(&st, end);

	while (!StackIsEmptyr(&st))
	{
		int right = StackTop(&st);
		StackPop(&st);
		int left = StackTop(&st);
		StackPop(&st);
		
		int keyindex = PrevCurPointer(a, left, right);

		if (left < keyindex - 1)
		{
			StackPush(&st, left);
			StackPush(&st, keyindex - 1);
		}

		if (keyindex + 1 < right)
		{
			StackPush(&st, keyindex + 1);
			StackPush(&st, right);
		}
	}

	StackDestroy(&st);
}
//快速排序
void QuickSort(int *a, int n)
{
	//_QuickSort(a, 0, n - 1);//递归版
	_QuickSortNoR(a, 0, n - 1);
}


void _MergeSort(int *a, int *tmp, int begin, int end)
{
	if (begin >= end)
		return;
	int mid = (begin + end) >> 1;

	_MergeSort(a, tmp, begin, mid);
	_MergeSort(a, tmp, mid + 1, end);

	//[begin, mid], [mid + 1, end]是两端有序的区间, 归并两端有序区间
	int begin1 = begin, end1 = mid;
	int begin2 = mid + 1, end2 = end;

	int index = begin;

	while (begin1 <= end1 && begin2 <= end2)
	{
		//逐个进行比较
		if (a[begin1] < a[begin2])
			tmp[index++] = a[begin1++];
		else
			tmp[index++] = a[begin2++];
	}
	
	if (begin1 <= end1) //说明上一个while循环是由于 begin2 >= end2 跳出
	{
		while (begin1 <= end1)
		{
			tmp[index++] = a[begin1++];
		}
	}
	else //反之说明上一个while循环是由于 begin1 >= end1 跳出
	{
		while (begin2 <= end2)
		{
			tmp[index++] = a[begin2++];
		}
	}
	//将归并到tmp中的数据归并回a中
	memcpy(a + begin, tmp + begin, sizeof(int) * (end - begin + 1));
}
//归并排序
void MergeSort(int* a, int n)
{
	int *tmp = (int*)malloc(sizeof(int) * n);
	_MergeSort(a, tmp, 0, n - 1);
	free(tmp);
}





//计数排序
void CountSort(int *a, int n)
{
	int max = a[0], min = a[0];
	for (int i = 0; i < n; ++i)
	{
		if (a[i] > max)
			max = a[i];
		if (a[i] < min)
			min = a[i];
	}
	int range = max - min + 1;
	int *countArr = (int*)malloc(sizeof(int) * range);
	memset(countArr, 0, sizeof(int) * range);

	for (int i = 0; i < n; ++i)
	{
		countArr[a[i] - min]++;
	}

	int j = 0;
	for (int i = 0; i < range; ++i)
	{
		
		while (countArr[i]--)
		{
			a[j++] = i + min;
		}
	}

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