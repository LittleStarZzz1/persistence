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
	B b;//派生类对象

	A a = b;//派生类对象赋值给基类对象
	A* pa = &b;//派生类对象赋值给基类指针
	A& ra = b;//派生类对象赋值给基类引用

	//b = a;
}

int main2()
{
	test();
	system("pause");
	return 0;
}