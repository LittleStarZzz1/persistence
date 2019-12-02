#include <iostream>

using namespace std;

//void test1(int & a)
//{
//	a = 9;
//}

int main2()
{
	int a = 10;
	//test1(a);
	int b = 20;

	int & sa = a;
	//int & sa = b;
	int & ma = a;
	int & ba = a;

	sa = 20;

	cout << a << endl;
	cout << b << endl;

	system("pause");
	return 0;
}