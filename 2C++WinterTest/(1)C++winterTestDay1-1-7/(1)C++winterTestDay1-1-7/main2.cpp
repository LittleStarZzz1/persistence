#include <iostream>

using namespace std;

int main2()
{
	int i = 10;
	int j = 10;
	int k = 3;

	//+运算符的优先级大于 *=
	//cout << (k *= i + j) << endl;

	k *= i + j;
	cout << k << endl;

	system("pause");
	return 0;
}