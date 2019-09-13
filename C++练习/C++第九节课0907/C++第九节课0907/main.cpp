#include "date.h"

//日期类


int _main()
{
	Date test(2019, 9, 7);


	cout << (test + 10) << endl;
	system("pause");
	return 0;
}


//设计一个类,该类只能在堆上创建对象.
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












