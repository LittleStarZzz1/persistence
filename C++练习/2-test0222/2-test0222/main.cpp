#include <iostream>

using namespace std;

class Test
{
	int m_a;
	char m_c;
public:
	/*
	Test() :
		m_a(0),
		m_c('\0')
	{

	}

	Test(int a) :
		m_a(a),
		m_c('\0')
	{

	}

	Test(char c) :
		m_a(0),
		m_c(c)
	{

	}
	*/
	Test(int a = 0, char c = '\0') :
		m_a(a),
		m_c(c)
	{

	}

	Test(char c) :	//Î¯ÅÉ¹¹Ôì
		Test(0, c)
	{

	}

	void show()
	{
		cout << m_a << ' ' << m_c << endl;
	}
};

int main()
{
	Test t('c');
	t.show();

	system("pause");
	return 0;
}