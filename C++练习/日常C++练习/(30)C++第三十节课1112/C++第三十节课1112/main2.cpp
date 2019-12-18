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
	// 可以看为传参操作，但是a会被销毁
	try
	{
		//int a;
		//float a;
		Test a;

		//a = 5;

		throw a;
	}

	catch (int & e) //准备接受int类型异常
	{
		cout << e;
	}

	catch (float & e)
	{
		cout << e;
	}

	catch (Base & e)	//谁离得进用谁
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