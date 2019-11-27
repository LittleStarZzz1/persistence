#include <iostream>
#include <typeinfo>

using namespace std;

/*
auto Add(auto a, auto b)
{
	return a + b;
}
*/

int main()
{
	int j = 10;
	auto i = j;

	auto k = &i;

	cout << k << endl;
	cout << typeid(k).name() << endl;

	//auto arr[] = { 1, 2, 3 };

	system("pause");
	return 0;
}