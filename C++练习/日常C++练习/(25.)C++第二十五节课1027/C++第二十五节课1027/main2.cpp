#include <iostream>

using namespace std;

class TestBase
{
public:
	// ﬁnal：修饰虚函数，表示该虚函数不能再被继承
	virtual void func() 
	{
		cout << "I'm TestBase" << endl;
	}
};

class Test : public TestBase
{
public:
	// override 检查派生类是否继承自基类
	virtual void func() override
	{
		cout << "I'm Test" << endl;
	}
};

int main2()
{
	TestBase tb;

	system("pause");
	return 0;
}