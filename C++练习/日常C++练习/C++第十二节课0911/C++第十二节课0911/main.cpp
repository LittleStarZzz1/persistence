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
		return *this;	//ǰ��++
	}

	Test operator ++ (int)	//��Ҫ����ֵʱ��Ҫ��������
	{
		Test tmp = *this;
		m_a++;
		return tmp;	//����++
	}

	Test operator -- (int)	//��Ҫ����ֵʱ��Ҫ��������
	{
		Test tmp = *this;
		m_a--;
		return tmp;	//����--
	}

	Test operator -- ()	//��Ҫ����ֵʱ��Ҫ��������
	{
		m_a--;
		return *this;	//ǰ��--
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