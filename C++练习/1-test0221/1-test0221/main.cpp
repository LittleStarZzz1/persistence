#include <iostream>

using namespace std;

void OutOfMem()
{
	cerr << "内存申请失败" << endl;
	throw bad_alloc();
}

int main()
{
	set_new_handler(OutOfMem);//如果内存申请失败,我调用什么样的函数去处理

	try{
		int * ptest1 = new int[100000000];
		int * ptest2 = new int[100000000];
		int * ptest3 = new int[100000000];
		int * ptest4 = new int[100000000];
		int * ptest5 = new int[100000000];
		int * ptest6 = new int[100000000];
		int * ptest7 = new int[100000000];
	}

	catch (bad_alloc & bc)
	{
		cout << bc.what() << endl;
	}


	system("pause");
	return 0;
}