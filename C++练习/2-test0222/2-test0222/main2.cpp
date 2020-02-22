#include <iostream>

using namespace std;

//Ä¬ÈÏº¯Êı¿ØÖÆ
class Test2
{
	int m_a;
public:
	//Test2() = delete;
	Test2() = default;
	Test2(const Test2 & t) = default;
	Test2 & operator = (const Test2 & t) = delete;
	Test2(int a) :
		m_a(a)
	{

	}
};

int main()
{
	//Test2 t(Test2(5));

	Test2 t1;
	Test2 t2;
	//t1 = t2;

	system("pause");
	return 0;
}