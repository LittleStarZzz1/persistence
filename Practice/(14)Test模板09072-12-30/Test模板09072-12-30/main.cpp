#include <iostream>

using namespace std;

//一般的交换函数
void Swap(int & a, int & b)
{
	int tmp = a;
	a = b;
	b = tmp;
}

//函数重载
void Swap(double & a, double & b)
{
	double tmp = a;
	a = b;
	b = tmp;
}

void Swap(char & a, char & b)
{
	char tmp = a;
	a = b;
	b = tmp;
}

int main1()
{

	system("pause");
	return 0;
}