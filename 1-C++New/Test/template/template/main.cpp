#include <iostream>

using namespace std;

typedef int SDataType;

typedef struct Stack_c
{
	SDataType* _a;
	int _capacity;
	int _size;//记录栈顶top
}Stack_c;

void Stack_c_init(Stack_c* s);
void Stack_c_push(Stack_c* s, int val);
void Stack_c_pop(Stack_c* s);
void Stack_destroy(Stack_c* s);

template<class T>
class Stack_cpp
{
public:

	Stack_cpp();//可以在构造函数中实现栈的初始化
	void push(int val);
	void pop();
	~Stack_cpp();//可以在析构函数中实现栈的销毁

private:
	T* _a;
	int _capacity;
	int _size;
};

int main()
{
	Stack_c s;
	//Stack_c_init(&s);//首先要给栈初始化
	//Stack_c_push(&s, 1);
	//Stack_c_push(&s, 2);
	//Stack_c_push(&s, 3);
	//Stack_c_push(&s, 4);
	//Stack_c_push(&s, 5);
	//Stack_c_push(&s, 6);
	//Stack_destroy(&s);//不用了要销毁

	//s._capacity = 0;

	system("pause");
	return 0;
}