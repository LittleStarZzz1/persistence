#ifndef _LIST_H
#define _LIST_H

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef int LTDataType;

typedef struct ListNode{
	LTDataType _data;
	struct ListNode* _next;
	struct ListNode* _prev;
}ListNode;

typedef struct List{
	struct ListNode* _head;
}List;

//初始化函数
void ListInit(List* plist);

//对应于初始化函数,释放初始化时开辟的动态内存
void ListDestroy(List* plist);

//尾插,尾结点插入数据
void ListPushBack(List* plist, LTDataType x);
//尾删
void ListPopBack(List* plist);

//头插
void ListPushFront(List* plist, LTDataType x);
//头删
void ListPopFront(List* plist);

//打印链表的函数
void ListPrint(List* plist);

#endif //_LIST_H