#include <iostream>

using namespace std;

void OutOfMem()
{
	cerr << "�ڴ�����ʧ��" << endl;
	throw bad_alloc();
}

int main()
{
	set_new_handler(OutOfMem);//����ڴ�����ʧ��,�ҵ���ʲô���ĺ���ȥ����

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