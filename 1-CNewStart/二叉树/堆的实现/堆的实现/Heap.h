#pragma once

typedef int HpDataType;

typedef struct Heap
{
	HpDataType * _a;
	size_t _size;
	size_t _capacity;
}Heap;

//����
Heap * HeapCreate(HpDataType * a, size_t n);
//����
void HeapPush(Heap * hp, HpDataType x);
//ɾ��
void HeapPop(Heap * hp);
//��ȡ�Ѷ�����
HpDataType HeapTop(Heap * hp);

//���µ����㷨
void AdjustDown(Heap * a, size_t n, int root);