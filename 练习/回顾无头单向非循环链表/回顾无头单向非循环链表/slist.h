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

//��ʼ������
void SListInit(SList* plist);


//��Ӧ�ڳ�ʼ����������Ҫ�ͷſ��ٵĶ�̬�ڴ�
void SListDestroy(SList* plist);

//ͷ��
void SListPushFront(SList* plist, SLDataType x);
//ͷɾ
void SListPopFront(SList* plist);

//���Ҷ�Ӧ���ݵ�������
SListNode* SListFind(SList* plist, SLDataType x);

//��ָ�����λ��(pos)ǰ��������(ǰ��ʾ��)
void SListInsertFront(SList* plist, SLDataType x, SLDataType src);
//��ָ�����λ��(pos)���������
void SListInsertAfter(SListNode* plist, SLDataType x);

//��ָ�����λ��(pos)��ɾ������
void SListEraseAfter(SListNode* pos);

//��ӡ����
void SListPrint(SList* plist);


#endif //_SLIST_H