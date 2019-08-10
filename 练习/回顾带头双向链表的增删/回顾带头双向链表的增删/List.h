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

//��ʼ������
void ListInit(List* plist);

//��Ӧ�ڳ�ʼ������,�ͷų�ʼ��ʱ���ٵĶ�̬�ڴ�
void ListDestroy(List* plist);

//β��,β����������
void ListPushBack(List* plist, LTDataType x);
//βɾ
void ListPopBack(List* plist);

//ͷ��
void ListPushFront(List* plist, LTDataType x);
//ͷɾ
void ListPopFront(List* plist);

//��ӡ����ĺ���
void ListPrint(List* plist);

#endif //_LIST_H