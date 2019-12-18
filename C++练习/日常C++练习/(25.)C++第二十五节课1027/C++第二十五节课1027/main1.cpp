#include <iostream>

using namespace std;

class TestBase
{
public:
	virtual void func()
	{
		cout << "I'm TestBase" << endl;
	}
};

class TestBase2 : public TestBase
{
public:
	void func()
	{
		cout << "I'm TestBase2" << endl;
	}
};

class TestBase3 : public TestBase2
{
public:
	void func()
	{
		cout << "I'm TestBase3" << endl;
	}
};


int main1()
{
	TestBase3 t3;
	TestBase2 * ptb2 = &t3;

	TestBase * ptb = ptb2;

	//t.func();
	//tb.func();

	ptb->func();


	system("pause");
	return 0;
}