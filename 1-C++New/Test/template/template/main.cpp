#include <iostream>

using namespace std;

typedef int SDataType;

typedef struct Stack_c
{
	SDataType* _a;
	int _capacity;
	int _size;//��¼ջ��top
}Stack_c;

void Stack_c_init(Stack_c* s);
void Stack_c_push(Stack_c* s, int val);
void Stack_c_pop(Stack_c* s);
void Stack_destroy(Stack_c* s);

template<class T>
class Stack_cpp
{
public:

	Stack_cpp();//�����ڹ��캯����ʵ��ջ�ĳ�ʼ��
	void push(int val);
	void pop();
	~Stack_cpp();//����������������ʵ��ջ������

private:
	T* _a;
	int _capacity;
	int _size;
};

int main()
{
	Stack_c s;
	//Stack_c_init(&s);//����Ҫ��ջ��ʼ��
	//Stack_c_push(&s, 1);
	//Stack_c_push(&s, 2);
	//Stack_c_push(&s, 3);
	//Stack_c_push(&s, 4);
	//Stack_c_push(&s, 5);
	//Stack_c_push(&s, 6);
	//Stack_destroy(&s);//������Ҫ����

	//s._capacity = 0;

	system("pause");
	return 0;
}