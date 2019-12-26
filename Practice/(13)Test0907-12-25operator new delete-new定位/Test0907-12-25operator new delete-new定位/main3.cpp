#include <iostream>

using namespace std;

//设计一个类, 该类只能在堆上创建对象
//1. 构造函数私有
//2. 公有的静态成员函数, 在函数里new
class HeapOnly
{
	int m_a;

	HeapOnly() :
		m_a(0)
	{

	}
public:
	static HeapOnly * CreateObject()
	{
		return new HeapOnly;
	}


};

int main()
{
	//HeapOnly hp;
	HeapOnly::CreateObject();

	system("pause");
	return 0;
}