#include <iostream>

using namespace std;

class Base{
public:
	int m_b = 5;
};

class Test : public Base
{

};

void func()
{
	try
	{
		Test a;

		throw a;

	}

	catch (char & e)
	{

	}
}

int main2()
{
	// ���Կ�Ϊ���β���������a�ᱻ����
	try
	{
		//int a;
		//float a;
		Test a;

		//a = 5;

		throw a;
	}

	catch (int & e) //׼������int�����쳣
	{
		cout << e;
	}

	catch (float & e)
	{
		cout << e;
	}

	catch (Base & e)	//˭��ý���˭
	{
		cout << e.m_b << endl;
	}

	catch (Test & e)
	{
		cout << e.m_b << endl;
	}

	system("pause");
	return 0;
}