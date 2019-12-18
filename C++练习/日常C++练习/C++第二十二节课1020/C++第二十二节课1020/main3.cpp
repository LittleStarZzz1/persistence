#include <iostream>

using namespace std;

template <typename T>
void swapArgs(T & a, T & b)
{
	T tmp;
	tmp = a;
	a = b;
	b = tmp;
}

//����
void swapArgs(int & a, int & b)
{
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
}

//�ػ�, ģ���ػ���Ȼ��ģ��һ����
template<>
void swapArgs<int>(int & a, int & b)
{
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
}


int main3()
{
	int a = 5;
	int b = 6;

	char d = 8;
	char c = 7;

	//swapArgs(a, b);
	//swapArgs<int>(a, b);

	swapArgs(d, c);

	cout << a << b << endl;

	system("pause");
	return 0;
}