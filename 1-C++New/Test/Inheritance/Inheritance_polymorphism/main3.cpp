#include <iostream>
 
using namespace std;

class A
{
public:
	void func()
	{
		cout << "A::func()" << endl;
	}
	void print_A()
	{
		cout << _a << endl;
	}
protected:
	int _a = 1;
};

class B : public A
{
public:
	void func()
	{
		cout << "B::func()" << endl;
	}
	void print_A()
	{
		cout << A::_a << endl;
	}

	void test()
	{
		func();
		A::func();
	}
protected:
	int _a = 2;
};

int main3()
{
	//A a;
	//a.func();

	B b;
	//b.func();
	//b.print_A();
	//b.print_B();
	b.test();


	system("pause");
	return 0;
}
