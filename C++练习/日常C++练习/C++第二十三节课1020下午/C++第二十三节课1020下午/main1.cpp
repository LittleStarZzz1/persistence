#include <iostream>

using namespace std;

template<class T1, class T2>
class Test{
	T1 m_a;
	T2 m_b;
public:
	Test()
	{
		cout << "<T1, T2>" << endl;
	}

};

template<class T1>
class Test<T1, double>{
	T1 m_a;
	double m_b;
public:
	Test()
	{
		cout << "<t1, double>" << endl;
	}

};

template<class T1, class T2>
class Test<T1 *, T2 *>{
	T1 * m_a;
	T2 * m_b;
public:
	Test()
	{
		cout << "<T1 *, T2 *>" << endl;
	}

};

template<class T1, class T2>
class Test<T1 &, T2 &>{
	T1 & m_a;
	T2 & m_b;
public:
	Test(T1 & a, T2 & b) :			//引用必须初始化, 并且只能用初始化列表进行初始化
		m_a(a),
		m_b(b)
	{
		cout << "<T1 &, T2 &>" << endl;
	}

};


int main1()
{
	Test<char, double> t1;

	Test<int *, char *> t3;

	int a = 0;
	char b = 0;
	Test<int &, char &> t2(a, b);

	system("pause");
	return 0;
}