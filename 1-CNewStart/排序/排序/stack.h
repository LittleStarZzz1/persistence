#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef int DataType;

//֧�ֶ�̬������ջ
typedef struct Stack
{
	DataType* _a;//����
	size_t _top;
	size_t _capacity;//ջ������
}Stack;

//ջ�ĳ�ʼ��
void StackInit(Stack* s);
//��ջ
void StackPush(Stack* s, DataType x);
//��ջ
void StackPop(Stack* s);
//����ջ������
DataType StackTop(Stack* s);
//���ջ�Ƿ�Ϊ��
int StackIsEmptyr(Stack* s);
//ջ������
void StackDestroy(Stack* s);




//ջ�ĳ�ʼ��
void StackInit(Stack* s)
{
	assert(s);
	s->_a = NULL;
	s->_top = s->_capacity = 0;
}

//��ջ
void StackPush(Stack* s, DataType x)
{
	assert(s);//�п�
	if (s->_top == s->_capacity)//�ж��Ƿ���Ҫ����
	{
		size_t newcapacity = s->_capacity == 0 ? 4 : s->_capacity * 2;
		s->_a = (DataType*)malloc(sizeof(DataType) * newcapacity);
		s->_capacity = newcapacity;
	}
	//����Ҫ�������a[s->_top]��ֵ, ����ջ
	s->_a[s->_top] = x;
	++s->_top;
}

//��ջ
void StackPop(Stack* s)
{
	assert(s);
	s->_top--;
}

//����ջ������
DataType StackTop(Stack* s)
{
	return s->_a[s->_top - 1];
}

//���ջ�Ƿ�Ϊ��
int StackIsEmptyr(Stack* s)
{
	return s->_top == 0 ? 1 : 0;
}


//ջ������
void StackDestroy(Stack* s)
{
	assert(s);

	//�ͷſռ�
	free(s->_a);
	s->_a = NULL;
	s->_capacity = s->_top = 0;
}

//�Լ�ʵ��ջ�Ĳ���
void testStack()
{
	Stack st;
	StackInit(&st);

	StackPush(&st, 1);
	StackPush(&st, 2);
	printf("%d ", StackTop(&st));
	StackPop(&st);
	printf("%d ", StackTop(&st));
	StackPop(&st);
	StackPush(&st, 3);
	StackPush(&st, 4);

	while (!StackIsEmptyr(&st))
	{
		printf("%d ", StackTop(&st));
		StackPop(&st);
	}

	StackDestroy(&st);

}

