#include <iostream>

using namespace std;

class ct
{
	int a;
public:
	double b;
	char c;

	void test()
	{

	}

	void changeA(int i)
	{
		//this->a = i;  //thisָ�����ʡ��
		a = i;
	}

	void printA()//��Ա�����п���ֱ��ʹ���Լ��ĳ�Ա����
	{
		printf("%d\n", a);
	}

private:
	void printB();//��Ա��������struct�Ŀռ�(ֻ�Ǳ�������struct���������),��Ҫʱ���ü���
};

void ct::printB()
{
	printf("%.2lf\n", b);
}

int main()
{
	ct c;
	ct d;
	ct * pc = nullptr;

	c.changeA(5);
	c.printA();

	d.changeA(6);
	d.printA();

	pc->test();

	cout << sizeof(ct) << endl;


	system("pause");
	return 0;
}