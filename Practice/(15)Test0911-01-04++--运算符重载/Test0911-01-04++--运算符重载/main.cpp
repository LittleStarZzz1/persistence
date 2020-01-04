#include <iostream>

using namespace std;

//++,--运算符重载
class Test
{
	int m_a;
public:
	Test(int a = 0) :
		m_a(a)
	{

	}

	//后置++
	Test operator ++()
	{
		m_a++;
		return *this;
	}

	//前置++
	Test operator ++(int)
	{
		Test tmp = *this;
		m_a++;
		return tmp;
	}

	//后置--
	Test operator --()
	{
		m_a--;
		return *this;
	}

	//前置--
	Test operator --(int)
	{
		Test tmp = *this;
		m_a--;
		return tmp;
	}

	friend ostream & operator << (ostream & os, Test & t);

};

ostream & operator << (ostream & os, Test & t)
{
	os << t.m_a;
	return os;
}

int main()
{
	Test t(7);

	cout << t.operator++(0) << endl;
	cout << t << endl;

	system("pause");
	return 0;
}