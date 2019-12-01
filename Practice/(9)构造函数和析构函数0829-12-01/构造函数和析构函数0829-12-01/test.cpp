#include <iostream>

using namespace std;

class A
{
	int m_a;

public:
	void PrintA()
	{
		cout << m_a << endl;
	}

	void Show()
	{
		cout << "Show()" << endl;
	}

};

//编译可以通过，但是程序会崩溃

int main1()
{
	A * p = NULL;

	//p->m_a = 5;
	p->PrintA();
	p->Show();


	system("pause");
	return 0;
}