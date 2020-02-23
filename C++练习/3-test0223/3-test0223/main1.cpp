#include <iostream>

using namespace std;

//内置类型的列表初始化
int main()
{
	int x1 = {10};

	cout << "x1 = " << x1 << endl;

	int x2{10};

	cout << "x2 = " << x2 << endl;

	int x3 = 1 + 2;

	cout << "x3 = " << x3 << endl;

	int x4 = { 1 + 2 };

	cout << "x4 = " << x4 << endl;

	int x5{ 1 + 2 };
	cout << "x5 = " << x5 << endl;

	system("pause");
	return 0;
}