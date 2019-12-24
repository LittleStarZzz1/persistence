#include <iostream>

using namespace std;

class Test
{
	int m_data;
public:
	Test() :
		m_data(0)
	{
		cout << "Test():" << this << endl;
	}

	~Test()
	{
		cout << "~Test():" << this << endl;
	}
};

void test1()
{
	//申请单个Test类型的空间
	Test * pt = (Test *)malloc(sizeof(Test));
	free(pt);

	//申请10个Test类型的空间
	Test * pt1 = (Test *)malloc(sizeof(Test)* 10);
	free(pt1);
}

void test2()
{
	//申请单个Test类型的空间
	Test * p1 = new Test;
	delete p1;
	
	//申请10个Test类型的空间
	Test * p2 = new Test[10];
	delete[] p2;
}

int main2()
{
	//test1();

	test2();


	system("pause");
	return 0;
}