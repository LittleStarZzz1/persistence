#pragma once

#include "stack.h"

//��������
void Swap(int *a, int *b);

//��������
void InsertSort(int* a, int n);

//ϣ������
void ShellSort(int* a, int n);

//ѡ������
void SelectSort(int* a, int n);

//������
void HeapSort(int *a, int n);
//����
void HeapCreate(int *a, int n);
//���µ����㷨
void AdjustDown(int *a, int n, int root);

//ð������
void BubbleSort(int *a, int n);

//��������
void QuickSort(int *a, int n);

//�鲢����
void MergeSort(int* a, int n);

//��������
void CountSort(int *a, int n);

//��ӡ����
void Print(int* a, int n);




//��������
void Swap(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

//��������
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

//ϣ������
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

//ѡ������
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

//������
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
//���µ����㷨
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
//�����򽨴��
void HeapCreate(int *a, int n)
{
	int i = (n - 2) / 2;
	for (; i >= 0; --i)
	{
		AdjustDown(a, n, i);
	}

}

//ð������
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

//����������ʱ,���Ż���������,Ϊ���Ż�����,��������ȡ��
int GetMidIndex(int *a, int begin, int end)//����ȡ��
{
	int mid = (begin + end) >> 1;//��(begin + end) / 2,��λЧ�ʽϸ�
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

//1. ����ָ�뷨/hoare��
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
//2. �ڿӷ�
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
//3. ǰ��ָ�뷨        ʹ������ȡ���Ż�����
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
//���ŷǵݹ�, ����ջʵ��, ��ֹ����������ʱ����ջ���
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
//��������
void QuickSort(int *a, int n)
{
	//_QuickSort(a, 0, n - 1);//�ݹ��
	_QuickSortNoR(a, 0, n - 1);
}


void _MergeSort(int *a, int *tmp, int begin, int end)
{
	if (begin >= end)
		return;
	int mid = (begin + end) >> 1;

	_MergeSort(a, tmp, begin, mid);
	_MergeSort(a, tmp, mid + 1, end);

	//[begin, mid], [mid + 1, end]���������������, �鲢������������
	int begin1 = begin, end1 = mid;
	int begin2 = mid + 1, end2 = end;

	int index = begin;

	while (begin1 <= end1 && begin2 <= end2)
	{
		//������бȽ�
		if (a[begin1] < a[begin2])
			tmp[index++] = a[begin1++];
		else
			tmp[index++] = a[begin2++];
	}
	
	if (begin1 <= end1) //˵����һ��whileѭ�������� begin2 >= end2 ����
	{
		while (begin1 <= end1)
		{
			tmp[index++] = a[begin1++];
		}
	}
	else //��֮˵����һ��whileѭ�������� begin1 >= end1 ����
	{
		while (begin2 <= end2)
		{
			tmp[index++] = a[begin2++];
		}
	}
	//���鲢��tmp�е����ݹ鲢��a��
	memcpy(a + begin, tmp + begin, sizeof(int) * (end - begin + 1));
}
//�鲢����
void MergeSort(int* a, int n)
{
	int *tmp = (int*)malloc(sizeof(int) * n);
	_MergeSort(a, tmp, 0, n - 1);
	free(tmp);
}





//��������
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


//��ӡ����
void Print(int* a, int n)
{
	for (int i = 0; i < n; ++i)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
}