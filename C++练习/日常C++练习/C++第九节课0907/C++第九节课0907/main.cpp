#include "date.h"

//������


int _main()
{
	Date test(2019, 9, 7);


	cout << (test + 10) << endl;
	system("pause");
	return 0;
}


//���һ����,����ֻ���ڶ��ϴ�������.
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












