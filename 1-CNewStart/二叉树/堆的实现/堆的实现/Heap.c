#include <stdio.h>
#include <stdlib.h>
#include "Heap.h"

//С��
//ִ�����µ����㷨������: ����������Ϊ��
void AdjustDown(HpDataType * a, size_t size, int root)
{
	int parent = root;
	int child = parent * 2 + 1; //��ȡroot�ڵ�������±�
	while (child < size)
	{
		if (child + 1 < size && a[child + 1] < a[child])//�ҵ���С�ĺ���
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

	//hp->_a = a; ����, ֻ�������ָ�븳ֵ
	memcpy(hp->_a, a, sizeof(HpDataType)* size);
	hp->_size = size;
	hp->_capacity = size;

	//����, �����һ����Ҷ�ӽڵ㿪ʼ�������µ����㷨
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
