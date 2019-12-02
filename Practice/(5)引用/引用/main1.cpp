#include <iostream>

using namespace std;

int main1()
{
	int a = 5;
	int &b = a;
	b = 10;

	a = 20;

	cout << &a << endl;
	cout << &b << endl;


	system("pause");
	return 0;
}