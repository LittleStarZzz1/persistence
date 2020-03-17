#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <assert.h>

typedef int QuDataType;

typedef struct QuNode
{
	QuDataType _val;
	struct QuNode* _next;
}QuNode;

typedef struct Queue
{
	struct QuNode* _front;
	struct QuNode* _back;
}Queue;

//���еĳ�ʼ��
void QueueInit(Queue* q);

//��Ӳ���,��β��
void QueuePush(Queue* q, QuDataType data);

//���Ӳ���, ��ͷɾ
void QueuePop(Queue* q);

//��ȡ������ͷ����Ԫ��
QuDataType QueueFront(Queue* q);

//��ȡ������β����Ԫ��
QuDataType QueueBack(Queue* q);

//��ȡ��������ЧԪ�صĸ���
int QueueSize(Queue* q);

//�ж��ж��Ƿ�Ϊ��, Ϊ�շ���1, ���򷵻�0
int QueueIsEmpty(Queue* q);

//���е�����
void QueueDestroy(Queue* q);


//���еĳ�ʼ��
void QueueInit(Queue* q)
{
	assert(q);

	q->_front = q->_back = NULL;

}

//��Ӳ���,��β��
void QueuePush(Queue* q, QuDataType data)
{
	assert(q);

	QuNode* newnode = (QuNode*)malloc(sizeof(QuNode));
	newnode->_val = data;
	newnode->_next = NULL;

	if (q->_back == NULL)
	{
		q->_front = q->_back = newnode;
	}
	else
	{
		q->_back->_next = newnode;
		q->_back = newnode;
	}
}

//���Ӳ���, ��ͷɾ
void QueuePop(Queue* q)
{
	assert(q);

	if (q->_front->_next == NULL)
	{
		free(q->_front);
		q->_front = q->_back = NULL;
	}
	else
	{
		QuNode* tmp = q->_front;
		q->_front = q->_front->_next;
		free(tmp);
	}
}

//��ȡ������ͷ����Ԫ��
QuDataType QueueFront(Queue* q)
{
	assert(q);
	return q->_front->_val;
}

//��ȡ������β����Ԫ��
QuDataType QueueBack(Queue* q)
{
	assert(q);
	return q->_front->_val;
}

//��ȡ��������ЧԪ�صĸ���
int QueueSize(Queue* q)
{
	assert(q);

	int count = 0;
	QuNode* cur = q->_front;
	while (cur)
	{
		++count;
		cur = cur->_next;
	}
	return count;
}

//�ж��ж��Ƿ�Ϊ��, Ϊ�շ���1, ���򷵻�0
int QueueIsEmpty(Queue* q)
{
	return q->_front == NULL ? 1 : 0;
}

//���е�����
void QueueDestroy(Queue* q)
{
	assert(q);

	QuNode* cur = q->_front;
	while (cur)
	{
		QuNode* tmp = cur->_next;
		free(cur);
		cur = tmp;
	}
	q->_front = q->_back = NULL;
}

void TestQueue()
{
	Queue q;
	QueueInit(&q);
	QueuePush(&q, 1);
	QueuePush(&q, 2);
	printf("%d\n", QueueFront(&q));
	QueuePop(&q);
	printf("%d\n", QueueFront(&q));
	QueuePop(&q);
	QueuePush(&q, 3);
	QueuePush(&q, 4);

	while (!QueueIsEmpty(&q))
	{
		printf("%d ", QueueFront(&q));
		QueuePop(&q);
	}
	printf("\n");

	QueueDestroy(&q);

}
