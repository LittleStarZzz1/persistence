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

Heap * HeapCreate(Heap * hp, HpDataType * a, size_t size)
{
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

//����
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

//ɾ��
void HeapPop(Heap * hp)
{
	Swap(&hp->_a[0], &hp->_a[hp->_size - 1]);
	hp->_size--;

	AdjustDown(hp->_a, hp->_size, 0);
}

//��ȡ�Ѷ�����
HpDataType HeapTop(Heap * hp)
{
	return hp->_a[0];
}

//�ж϶��Ƿ�Ϊ��
int HeapEmpty(Heap* hp)
{
	return hp->_size == 0 ? 1 : 0;
}

//��ӡ��������
void HeapPrint(Heap* hp)
{
	for (int i = 0; i < hp->_size; ++i)
	{
		printf("%d ", hp->_a[i]);
	}
	printf("\n");
}

//topK����
// ���ʮ����
void PrintTopK(int* a, int n, int k)
{
	//����һ��10������С��
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

//�ͷſռ�
void HeapDestory(Heap * hp)
{
	free(hp->_a);
	hp->_size == hp->_capacity == 0;
	hp->_a == NULL;
}

//������Ĳ���
void testHeapSort()
{
	int a[10] = { 15, 18, 19, 37, 28, 27, 25, 34, 49, 65 };

	HeapSort(a, 10);
}

//topK�������
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
