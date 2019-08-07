#include "slist.h"

//初始化函数
void SListInit(SList* plist){
	assert(plist);
	plist->_head = NULL;
}

//头插
void SListPushFront(SList* plist, SLDataType x){
	assert(plist);
	SListNode* cur = (SListNode*)malloc(sizeof(SListNode));
	cur->_data = x;
	cur->_next = plist->_head;
	plist->_head = cur;
}

//头删
void SListPopFront(SList* plist){
	assert(plist);
	SListNode* tmp;
	if (plist->_head){
		tmp = plist->_head;
		plist->_head = plist->_head->_next;
		free(tmp);
	}
}

//查找对应数据的链表结点
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

//在指定结点位置(pos)前插入数据(前插示例)
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

//在指定结点位置(pos)后插入数据
void SListInsertAfter(SListNode* pos, SLDataType x){
	assert(pos);
	SListNode* cur = (SListNode*)malloc(sizeof(SListNode));
	cur->_data = x;
	cur->_next = pos->_next;
	pos->_next = cur;
}

//在指定结点位置(pos)后删除数据
void SListEraseAfter(SListNode* pos){
	assert(pos);
	SListNode* tmp = pos->_next;
	pos->_next = tmp->_next;
	free(tmp);
}

//对应于初始化函数，需要释放开辟的动态内存
void SListDestroy(SList* plist){
	assert(plist);
	SListNode* tmp;
	while (plist->_head){
		tmp = plist->_head;
		plist->_head = plist->_head->_next;
		free(tmp);
	}
}

//打印链表
void SListPrint(SList* plist){
	assert(plist);
	SListNode* cur;
	for (cur = plist->_head; cur; cur = cur->_next){
		printf("%d->", cur->_data);
	}
	printf("NULL\n");
}
