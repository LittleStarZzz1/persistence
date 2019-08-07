#include "slist.h"

//��ʼ������
void SListInit(SList* plist){
	assert(plist);
	plist->_head = NULL;
}

//ͷ��
void SListPushFront(SList* plist, SLDataType x){
	assert(plist);
	SListNode* cur = (SListNode*)malloc(sizeof(SListNode));
	cur->_data = x;
	cur->_next = plist->_head;
	plist->_head = cur;
}

//ͷɾ
void SListPopFront(SList* plist){
	assert(plist);
	SListNode* tmp;
	if (plist->_head){
		tmp = plist->_head;
		plist->_head = plist->_head->_next;
		free(tmp);
	}
}

//���Ҷ�Ӧ���ݵ�������
SListNode* SListFind(SList* plist, SLDataType x){
	assert(plist);
	SListNode* cur;
	for (cur = plist->_head; cur; cur = cur->_next){
		if (cur->_data == x){
			return cur;
		}
	}
	return NULL;
}

//��ָ�����λ��(pos)ǰ��������(ǰ��ʾ��)
void SListInsertFront(SList* plist, SLDataType x, SLDataType src){
	assert(plist);
	SListNode* cur;
	SListNode* newdata = (SListNode*)malloc(sizeof(SListNode));
	if (plist->_head->_data == x){
		SListPushFront(plist, src);
		return;
	}
	for (cur = plist->_head; cur; cur = cur->_next){
		if (cur->_next->_data == x){
			break;
		}
	}
	newdata->_data = src;
	newdata->_next = cur->_next;
	cur->_next = newdata;
}

//��ָ�����λ��(pos)���������
void SListInsertAfter(SListNode* pos, SLDataType x){
	assert(pos);
	SListNode* cur = (SListNode*)malloc(sizeof(SListNode));
	cur->_data = x;
	cur->_next = pos->_next;
	pos->_next = cur;
}

//��ָ�����λ��(pos)��ɾ������
void SListEraseAfter(SListNode* pos){
	assert(pos);
	SListNode* tmp = pos->_next;
	pos->_next = tmp->_next;
	free(tmp);
}

//��Ӧ�ڳ�ʼ����������Ҫ�ͷſ��ٵĶ�̬�ڴ�
void SListDestroy(SList* plist){
	assert(plist);
	SListNode* tmp;
	while (plist->_head){
		tmp = plist->_head;
		plist->_head = plist->_head->_next;
		free(tmp);
	}
}

//��ӡ����
void SListPrint(SList* plist){
	assert(plist);
	SListNode* cur;
	for (cur = plist->_head; cur; cur = cur->_next){
		printf("%d->", cur->_data);
	}
	printf("NULL\n");
}
