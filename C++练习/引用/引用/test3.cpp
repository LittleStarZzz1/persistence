#include <iostream>

using namespace std;

void test1(int & a)
{
	a = 9;
}

int main3()
{
	int a = 10;
	test1(a);

	cout << a << endl;

	system("pause");
	return 0;
}