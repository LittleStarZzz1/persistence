#include <iostream>

using namespace std;

void fun(int a, int b)
{
	a = 100;
	b = 200;
}

int main1()
{
	int a = 5, b = 7;
	fun(a, b);
	cout << a << b << endl;
	system("pause");
	return 0;
}