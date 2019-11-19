#include <iostream>
#include <typeinfo>

using namespace std;

int TestAuto()
{
	return 10;
}

int main1()
{
	int a = 10;
	auto b = a;
	auto c = 'c';
	auto d = TestAuto();

	//auto e;

	cout << typeid(b).name() << endl;
	cout << typeid(c).name() << endl;
	cout << typeid(d).name() << endl;

	system("pause");
	return 0;
}
