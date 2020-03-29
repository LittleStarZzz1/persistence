#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef int DataType;

//支持动态增长的栈
typedef struct Stack
{
	DataType* _a;//数组
	size_t _top;
	size_t _capacity;//栈的容量
}Stack;

//栈的初始化
void StackInit(Stack* s);
//入栈
void StackPush(Stack* s, DataType x);
//出栈
void StackPop(Stack* s);
//返回栈顶数据
DataType StackTop(Stack* s);
//检查栈是否为空
int StackIsEmptyr(Stack* s);
//栈的销毁
void StackDestroy(Stack* s);




//栈的初始化
void StackInit(Stack* s)
{
	assert(s);
	s->_a = NULL;
	s->_top = s->_capacity = 0;
}

//入栈
void StackPush(Stack* s, DataType x)
{
	assert(s);//判空
	if (s->_top == s->_capacity)//判断是否需要扩容
	{
		size_t newcapacity = s->_capacity == 0 ? 4 : s->_capacity * 2;
		s->_a = (DataType*)malloc(sizeof(DataType) * newcapacity);
		s->_capacity = newcapacity;
	}
	//不需要扩容则给a[s->_top]赋值, 即进栈
	s->_a[s->_top] = x;
	++s->_top;
}

//出栈
void StackPop(Stack* s)
{
	assert(s);
	s->_top--;
}

//返回栈顶数据
DataType StackTop(Stack* s)
{
	return s->_a[s->_top - 1];
}

//检查栈是否为空
int StackIsEmptyr(Stack* s)
{
	return s->_top == 0 ? 1 : 0;
}


//栈的销毁
void StackDestroy(Stack* s)
{
	assert(s);

	//释放空间
	free(s->_a);
	s->_a = NULL;
	s->_capacity = s->_top = 0;
}

//自己实现栈的测试
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

