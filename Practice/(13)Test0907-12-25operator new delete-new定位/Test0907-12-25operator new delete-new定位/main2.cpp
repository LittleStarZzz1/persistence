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
	//ptָ�������Test������ͬ��С��һ��ռ�, ����������һ������, ��Ϊ���캯��û��ִ��
	Test * pt = (Test*)malloc(sizeof(Test));

	new(pt) Test;//���Test�Ĺ��캯���в���ʱ, ���ﻹ��Ҫ����

	pt->~Test();//

	system("pause");
	return 0;
}