#include <iostream>
#include <typeinfo>

using namespace std;

void fun(int a)
{
	cout << "1" << endl;
}

void fun(int * pa)
{
	cout << "2" << endl;
}


int main1()
{
	int * pa = nullptr;

	fun(0);
	fun(NULL);
	fun((int *)NULL);

	cout << typeid(nullptr).name() << endl;

	system("pause");
	return 0;
}