#include <iostream>

using namespace std;

void test()
{
	//动态申请一个int类型的空间
	int* pi = new int;//申请一个4字节整型空间

	//动态申请一个int类型的空间并初始化
	int* pi2 = new int(2);//申请一个4字节整型空间并赋值为2

	//动态申请int类型的数组
	int* pi3 = new int[5];//申请了一个长度为5的整型数组

	//int* pi4 = new int[5](1);

	delete pi;
	delete pi2;
	delete[] pi3;
}

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

//void test1()
//{
	//A* pA_CPP = new A;//申请单个A类型的对象
	//cout << pA_CPP << endl;
	//cout << pA_CPP->getVal() << endl;
	//delete pA_CPP;//释放掉这片空间

//	A* pA_CPP_ARR = new A[10];
//	delete[] pA_CPP_ARR;
//}

void test2()
{
	//A* pA_C = (A*)malloc(sizeof(A));
	//cout << pA_C << endl;
	//cout << pA_C->getVal() << endl;
	//free(pA_C);

	A* pA_C_ARR = (A*)malloc(sizeof(A)* 10);
	free(pA_C_ARR);
}

int main()
{
	//test1();
	test2();

	system("pause");
	return 0;
}