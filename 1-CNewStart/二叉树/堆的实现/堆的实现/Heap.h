#pragma once

typedef int HpDataType;

typedef struct Heap
{
	HpDataType * _a;
	size_t _size;
	size_t _capacity;
}Heap;

//建堆
Heap * HeapCreate(HpDataType * a, size_t n);
//插入
void HeapPush(Heap * hp, HpDataType x);
//删除
void HeapPop(Heap * hp);
//获取堆顶数据
HpDataType HeapTop(Heap * hp);

//向下调整算法
void AdjustDown(Heap * a, size_t n, int root);