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

//�������ͨ�������ǳ�������

int main1()
{
	A * p = NULL;

	//p->m_a = 5;
	p->PrintA();
	p->Show();


	system("pause");
	return 0;
}