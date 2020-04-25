#include <iostream>

using namespace std;

class A
{
public:
	A(int val = 10) :
		_a(val)
	{
		cout << "A()" << endl;
	}


	~A()
	{
		cout << "~A()" << endl;
	}

private:
	int _a;
};

int main()
{
	// malloc开辟空间失败返回0(NULL)
	// operator new 开辟空间失败后会抛异常
	// new 1. 开辟空间, 调用自定义类型构造函数初始化; 2. 开辟空间失败抛异常

	//size_t size = 2;
	//A* p1 = (A*)malloc(1024 * 1024 * 1024 * size);
	//cout << p1 << endl; // malloc 开辟失败返回0
	//try
	//{
	//	A* p2 = (A*)operator new(1024 * 1024 * 1024 * size);// operator new 开辟空间失败抛异常
	//	cout << p2 << endl;
	//}
	//catch (exception& e)
	//{
	//	cout << e.what() << endl;
	//}

	//定位 new 表达式

	A* p1 = new A;
	delete p1;

	//模拟上面实现过程, 用到 定位 new 表达式
	A* p2 = (A*)operator new(sizeof(A));
	new(p2)A(10); //在已开辟的空间上显示调用自定义类型的构造函数
	p2->~A; //显示调用析构函数

	operator delete(p2); //释放空间

	system("pause");
	return 0;
}