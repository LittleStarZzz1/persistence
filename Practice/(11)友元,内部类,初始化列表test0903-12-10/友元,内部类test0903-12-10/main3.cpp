#include <iostream>

using namespace std;

class A
{
	int m_a;
public:
	A(int a) :
		m_a(a)
	{

	}
};

class B
{
	A aa;
	int & ret;
	const int m_n;
public:
	B(int a, int num) :
		aa(a),
		ret(num),
		m_n(10)
	{

	}
};

int main3()
{


	system("pause");
	return 0;
}