#include <iostream>

using namespace std;


//继承的基础写法
class TestBase
{
public:
	int m_a;

	TestBase(int i) :
		m_a(i)
	{

	}

	void func()
	{
		cout << "我是父类的函数" << endl;
	}
};

class Test : public TestBase
{
public:
	int m_a;

	Test(int a, int b) :
		TestBase(a),
		m_a(b)
	{

	}

	void func()
	{
		cout << "我是子类的函数" << endl;
	}

};

int main()
{
#if 1
	Test t(5, 6);

	t.func();

#else
	Test * pt = new Test(5, 6);
	TestBase * ptb = pt;

	//cout << pt->m_a << endl;
	//cout << ptb->m_a << endl;

	pt->func();
	ptb->func();

	//t.m_a = 5;
	//cout << t.m_a;

	//cout << t.m_a << endl;
#endif

	system("pause");
	return 0;
}