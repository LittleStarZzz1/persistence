#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Heap.h"

//小堆
//执行向下调整算法的条件: 左右子树都为堆
void AdjustDown(HpDataType * a, size_t size, int root)
{
	int parent = root;
	int child = parent * 2 + 1; //获取root节点的左孩子下标
	while (child < size)
	{
		if (child + 1 < size && a[child + 1] < a[child])//找到较小的孩子
		{
			++child;
		}
		if (a[parent] > a[child])
		{
			HpDataType tmp = a[parent];
			a[parent] = a[child];
			a[child] = tmp;

			parent = child;
			child = parent * 2 + 1;
		}
		else
		{
			break;
		}
	}
}

//向上调整算法
void AdjustUp(int * a, int child)
{
	int parent = (child - 1) / 2;
	//while (parent >= 0) //判断条件不对, 没有起到作用, parent 不会小于0, 借助 break 跳出
	while (child > 0)
	{

		if (a[child] < a[parent])
		{
			int tmp = a[child];
			a[child] = a[parent];
			a[parent] = tmp;

			child = parent;
			parent = (child - 1) / 2;
		}
		else
		{
			break;
		}
	}
}

Heap * HeapCreate(HpDataType * a, size_t size)
{
	Heap * hp = (Heap*)malloc(sizeof(Heap));
	hp->_a = malloc(sizeof(HpDataType) * size);

	//hp->_a = a; 不行, 只是完成了指针赋值
	memcpy(hp->_a, a, sizeof(HpDataType)* size);
	hp->_size = size;
	hp->_capacity = size;

	//建堆, 从最后一个非叶子节点开始进行向下调整算法
	for (int i = (size - 1) / 2; i >= 0; --i)
	{
		AdjustDown(hp->_a, hp->_size, i);
	}
	return hp;
}

//堆排序
void HeapSort(int * a, size_t size)
{
	//将数组调整成为小堆
	for (int i = (size - 1) / 2; i >= 0; --i)
	{
		AdjustDown(a, size, i);
	}

	printf("排序前 : \n");
	for (int i = 0; i < size; ++i)
	{
		printf("%d ", a[i]);
	}
	printf("\n");

	int end = size - 1;

	while (end > 0)
	{
		int tmp = a[end];
		a[end] = a[0];
		a[0] = tmp;

		AdjustDown(a, end, 0);
		end--;
	}

	printf("排序后 : \n");
	for (int i = 0; i < size; ++i)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
	
}

//堆排序的测试
void testHeapSort()
{
	int a[10] = { 15, 18, 19, 37, 28, 27, 25, 34, 49, 65 };

	HeapSort(a, 10);
}

int main()
{
	testHeapSort();

	system("pause");
	return 0;
}
