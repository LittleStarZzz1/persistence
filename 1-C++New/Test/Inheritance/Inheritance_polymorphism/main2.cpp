#include <iostream>

using namespace std;

class A
{
protected:
	int _a = 1;
	int _b = 2;
	int _c = 3;
};

class B : public A
{
protected:
	int _d = 4;
};

void test()
{
	B b;//���������

	A a = b;//���������ֵ���������
	A* pa = &b;//���������ֵ������ָ��
	A& ra = b;//���������ֵ����������

	//b = a;
}

int main2()
{
	test();
	system("pause");
	return 0;
}