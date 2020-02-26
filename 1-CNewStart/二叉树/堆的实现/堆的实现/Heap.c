#include <stdio.h>
#include <stdlib.h>
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

int main()
{


	system("pause");
	return 0;
}
