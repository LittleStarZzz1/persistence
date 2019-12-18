#include <iostream>

using namespace std;

template <class T1, class T2>
class Test{
	T1 m_a;
	T2 m_b;
public:
	Test()
	{
		cout << "T1, T2" << endl;


	}
};

//模板类的特化
template <>
class Test<int, char>{
	int m_a;
	char m_b;
public:
	Test()
	{
		cout << "int, char" << endl;


	}
};


int main4()
{
	Test<int, char> t1;
	Test<int, int> t2;

	system("pause");
	return 0;
}