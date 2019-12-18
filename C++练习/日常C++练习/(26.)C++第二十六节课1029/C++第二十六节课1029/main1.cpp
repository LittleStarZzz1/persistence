#include <iostream>

using namespace std;

class Base
{
public:
	int m_a;

	void func1()
	{
		cout << "Base::func1" << endl;
	}
};

class Base2
{
public:
	int m_b;

	void func2()
	{
		cout << "Base2::func2" << endl;
	}
};


//¶àÖØ¼Ì³Ð
class Test : public Base, public Base2
{
public:
	//ÖØÐ´
	void func1()
	{
		cout << "Test::func1()" << endl;
	}

	void func2()
	{
		cout << "Test::func2()" << endl;
	}

};

int main1()
{
	Test t;

	Base * pb = &t;
	Base2 * pb2 = &t;


	t.m_a = 2;
	t.m_b = 3;

	//t.func1();
	//t.func2();

	pb->func1();
	pb2->func2();


	system("pause");
	return 0;
}