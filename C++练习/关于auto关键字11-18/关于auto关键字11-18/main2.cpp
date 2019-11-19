#include <iostream>
#include <typeinfo>

using namespace std;

int main2()
{
	int x = 10;
	auto a = &x;
	auto * b = &x;
	auto & c = x;

	cout << typeid(a).name() << endl;
	cout << typeid(b).name() << endl;
	cout << typeid(c).name() << endl;

	system("pause");
	return 0;
}