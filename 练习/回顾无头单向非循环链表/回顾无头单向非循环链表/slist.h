#ifndef _SLIST_H
#define _SLIST_H
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <malloc.h>

typedef int SLDataType;

typedef struct SListNode{
	SLDataType _data;
	struct SListNode* _next;
}SListNode;

typedef struct SList{
	SListNode* _head;
}SList;

//初始化函数
void SListInit(SList* plist);


//对应于初始化函数，需要释放开辟的动态内存
void SListDestroy(SList* plist);

//头插
void SListPushFront(SList* plist, SLDataType x);
//头删
void SListPopFront(SList* plist);

//查找对应数据的链表结点
SListNode* SListFind(SList* plist, SLDataType x);

//在指定结点位置(pos)前插入数据(前插示例)
void SListInsertFront(SList* plist, SLDataType x, SLDataType src);
//在指定结点位置(pos)后插入数据
void SListInsertAfter(SListNode* plist, SLDataType x);

//在指定结点位置(pos)后删除数据
void SListEraseAfter(SListNode* pos);

//打印链表
void SListPrint(SList* plist);


#endif //_SLIST_H