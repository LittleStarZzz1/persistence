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

//队列的初始化
void QueueInit(Queue* q);

//入队操作,即尾插
void QueuePush(Queue* q, QuDataType data);

//出队操作, 即头删
void QueuePop(Queue* q);

//获取队列中头部的元素
QuDataType QueueFront(Queue* q);

//获取队列中尾部的元素
QuDataType QueueBack(Queue* q);

//获取队列中有效元素的个数
int QueueSize(Queue* q);

//判断列队是否为空, 为空返回1, 否则返回0
int QueueIsEmpty(Queue* q);

//队列的销毁
void QueueDestroy(Queue* q);


//队列的初始化
void QueueInit(Queue* q)
{
	assert(q);

	q->_front = q->_back = NULL;

}

//入队操作,即尾插
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

//出队操作, 即头删
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

//获取队列中头部的元素
QuDataType QueueFront(Queue* q)
{
	assert(q);
	return q->_front->_val;
}

//获取队列中尾部的元素
QuDataType QueueBack(Queue* q)
{
	assert(q);
	return q->_front->_val;
}

//获取队列中有效元素的个数
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

//判断列队是否为空, 为空返回1, 否则返回0
int QueueIsEmpty(Queue* q)
{
	return q->_front == NULL ? 1 : 0;
}

//队列的销毁
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
