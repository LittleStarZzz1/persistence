#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "Heap.h"

void Swap(int * a, int * b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

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

Heap * HeapCreate(Heap * hp, HpDataType * a, size_t size)
{
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

//插入
void HeapPush(Heap * hp, HpDataType x)
{
	if (hp->_size == hp->_capacity)
	{
		hp->_capacity *= 2;
		realloc(hp, sizeof(HpDataType) * hp->_capacity);
	}
	hp->_a[hp->_size] = x;
	hp->_size++;
	AdjustUp(hp->_a, hp->_size - 1);
}

//删除
void HeapPop(Heap * hp)
{
	Swap(&hp->_a[0], &hp->_a[hp->_size - 1]);
	hp->_size--;

	AdjustDown(hp->_a, hp->_size, 0);
}

//获取堆顶数据
HpDataType HeapTop(Heap * hp)
{
	return hp->_a[0];
}

//判断堆是否为空
int HeapEmpty(Heap* hp)
{
	return hp->_size == 0 ? 1 : 0;
}

//打印堆中数据
void HeapPrint(Heap* hp)
{
	for (int i = 0; i < hp->_size; ++i)
	{
		printf("%d ", hp->_a[i]);
	}
	printf("\n");
}

//topK问题
// 最大十个数
void PrintTopK(int* a, int n, int k)
{
	//建立一个10个数的小堆
	Heap hp;
	HeapCreate(&hp, a, k);

	for (int i = k; i < n; ++i)
	{
		if (HeapTop(&hp) < a[i])
		{
			HeapPop(&hp);
			HeapPush(&hp, a[i]);
		}
	}
	HeapPrint(&hp);
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

//释放空间
void HeapDestory(Heap * hp)
{
	free(hp->_a);
	hp->_size == hp->_capacity == 0;
	hp->_a == NULL;
}

//堆排序的测试
void testHeapSort()
{
	int a[10] = { 15, 18, 19, 37, 28, 27, 25, 34, 49, 65 };

	HeapSort(a, 10);
}

//topK问题测试
void TestTopk()
{
	int n = 10000;
	int * a = (int *)malloc(sizeof(int) * n);
	srand(time(0));

	for (size_t i = 0; i < n; ++i)
	{
		a[i] = rand() % 1000000;
	}
	//a[15] = 1000000 + 1;
	//a[1231] = 1000000 + 2;
	//a[531] = 1000000 + 30;
	//a[5121] = 1000000 + 4;
	//a[115] = 1000000 + 5;
	//a[2335] = 1000000 + 6;
	//a[9999] = 1000000 + 7;
	//a[760] = 1000000 + 8;
	//a[423] = 1000000 + 9;
	//a[3144] = 1000000 + 10;

	PrintTopK(a, n, 10);
}

int main()
{
	//testHeapSort();
	TestTopk();

	system("pause");
	return 0;
}
