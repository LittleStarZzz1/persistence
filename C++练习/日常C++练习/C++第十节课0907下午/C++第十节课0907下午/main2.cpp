#include "seqlist.h"

template <class T>
class Test{
	T a;
public:
	Test(T s = 0) :
		m_a(s)
	{

	}

	void setData(T s);

	void showData()
	{
		cout << m_a << endl;
	}
};

template <class T>
void Test<T>::setData(T s)
{
	m_a = s;
}

int main2()
{
	Test<int> a(6);

	a.showData();

	system("pause");
	return 0;
}