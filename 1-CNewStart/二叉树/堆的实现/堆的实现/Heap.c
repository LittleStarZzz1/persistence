#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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

//���ϵ����㷨
void AdjustUp(int * a, int child)
{
	int parent = (child - 1) / 2;
	//while (parent >= 0) //�ж���������, û��������, parent ����С��0, ���� break ����
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

//������
void HeapSort(int * a, size_t size)
{
	//�����������ΪС��
	for (int i = (size - 1) / 2; i >= 0; --i)
	{
		AdjustDown(a, size, i);
	}

	printf("����ǰ : \n");
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

	printf("����� : \n");
	for (int i = 0; i < size; ++i)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
	
}

//������Ĳ���
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
