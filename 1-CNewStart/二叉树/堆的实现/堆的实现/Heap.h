#pragma once

typedef int HpDataType;

typedef struct Heap
{
	HpDataType * _a;
	size_t _size;
	size_t _capacity;
}Heap;

//建堆
Heap * HeapCreate(Heap * hp, HpDataType * a, size_t size);
//插入
void HeapPush(Heap * hp, HpDataType x);
//删除
void HeapPop(Heap * hp);
//获取堆顶数据
HpDataType HeapTop(Heap * hp);

//判断堆是否为空
int HeapEmpty(Heap* hp);

//打印堆中数据
void HeapPrint(Heap* hp);

//向下调整算法
void AdjustDown(HpDataType * a, size_t size, int root);

//向上调整算法
void AdjustUp(int * a, int child);

//堆排序
void HeapSort(int * a, size_t size);

// topK问题
// 最大十个数
void PrintTopK(int* a, int n, int k);

//释放空间
void HeapDestory(Heap * hp);