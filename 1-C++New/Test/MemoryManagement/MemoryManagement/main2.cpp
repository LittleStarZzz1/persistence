#include <iostream>

using namespace std;

class A
{
public:
	A(int x = 10) :
		_val(x)
	{
		cout << "A()" << endl;
	}

	~A()
	{
		cout << "~A()" << endl;
	}

	int getVal()
	{
		return _val;
	}
private:
	int _val;
};

void test1()
{
	size_t size = 2;

	void* ptr1 = malloc(size * 1024 * 1024 * 1024);
	cout << ptr1 << endl;

	try
	{
		void* ptr2 = operator new(size * 1024 * 1024 * 1024);
		cout << ptr2 << endl;
		//operator delete(ptr2);
	}
	catch (exception& e)
	{
		cout << e.what() << endl;
	}

	free(ptr1);
	
	//A* ptr1 = (A*)malloc(sizeof(A));
	//A* ptr2 = new A(1);
	//A* ptr3 = (A*)operator new(sizeof(A));


	//free(ptr1);
	//delete ptr2;
	//operator delete(ptr3);
}

class Test
{
public:
	Test(int x = 10) :
		_a(x)
	{
		cout << "Test" << endl;
	}

	int GetVal()
	{
		return _a;
	}

	~Test()
	{
		cout << "~Test()" << endl;
	}

private:
	int _a;
};

void test3()
{
	Test* pT = (Test*)malloc(sizeof(Test));//申请好的内存

	new(pT) Test(10);//定位new表达式

	cout << pT->GetVal() << endl;
}

int main()
{
	//test1();
	test3();

	system("pause");
	return 0;
}