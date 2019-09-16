#include <iostream>

using namespace std;

class Test{
	int m_a;
public:
	Test(int a = 0) :
		m_a(a)
	{

	}

	Test operator ++()
	{
		m_a++;
		return *this;	//前置++
	}

	Test operator ++ (int)	//需要作左值时才要返回引用
	{
		Test tmp = *this;
		m_a++;
		return tmp;	//后置++
	}

	Test operator -- (int)	//需要作左值时才要返回引用
	{
		Test tmp = *this;
		m_a--;
		return tmp;	//后置--
	}

	Test operator -- ()	//需要作左值时才要返回引用
	{
		m_a--;
		return *this;	//前置--
	}

	friend ostream & operator << (ostream & os, Test & t);



};


ostream & operator << (ostream & os, Test & t)
{
	os << t.m_a;
	return os;
}

int main_()
{
	Test t(7);

	cout << t++ << endl;

	cout << --t << endl;
	cout << t << endl;

	cout << t.operator++(1) << endl;
	cout << t << endl;

	system("pause");
	return 0;
}