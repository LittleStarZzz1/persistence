#pragma once

typedef int HpDataType;

typedef struct Heap
{
	HpDataType * _a;
	size_t _size;
	size_t _capacity;
}Heap;

//����
Heap * HeapCreate(HpDataType * a, size_t size);
//����
void HeapPush(Heap * hp, HpDataType x);
//ɾ��
void HeapPop(Heap * hp);
//��ȡ�Ѷ�����
HpDataType HeapTop(Heap * hp);

//���µ����㷨
void AdjustDown(HpDataType * a, size_t size, int root);

//������
void HeapSort(int * a, size_t size);