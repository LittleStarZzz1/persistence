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
		//this->a = i;  //this指针可以省略
		a = i;
	}

	void printA()//成员函数中可以直接使用自己的成员变量
	{
		printf("%d\n", a);
	}

private:
	void printB();//成员函数不吃struct的空间(只是被划分在struct这个作用域),需要时调用即可
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