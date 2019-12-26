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

int main()
{
	//pt指向的是与Test对象相同大小的一块空间, 还不能算是一个对象, 因为构造函数没有执行
	Test * pt = (Test*)malloc(sizeof(Test));

	new(pt) Test;//如果Test的构造函数有参数时, 这里还需要传参

	pt->~Test();//

	system("pause");
	return 0;
}