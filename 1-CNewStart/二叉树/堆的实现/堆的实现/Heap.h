#pragma once

typedef int HpDataType;

typedef struct Heap
{
	HpDataType * _a;
	size_t _size;
	size_t _capacity;
}Heap;

//����
Heap * HeapCreate(Heap * hp, HpDataType * a, size_t size);
//����
void HeapPush(Heap * hp, HpDataType x);
//ɾ��
void HeapPop(Heap * hp);
//��ȡ�Ѷ�����
HpDataType HeapTop(Heap * hp);

//�ж϶��Ƿ�Ϊ��
int HeapEmpty(Heap* hp);

//��ӡ��������
void HeapPrint(Heap* hp);

//���µ����㷨
void AdjustDown(HpDataType * a, size_t size, int root);

//���ϵ����㷨
void AdjustUp(int * a, int child);

//������
void HeapSort(int * a, size_t size);

// topK����
// ���ʮ����
void PrintTopK(int* a, int n, int k);

//�ͷſռ�
void HeapDestory(Heap * hp);