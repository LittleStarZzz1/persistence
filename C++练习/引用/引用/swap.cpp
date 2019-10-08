#include <iostream>

using namespace std;

void Swap(int & a, int & b)
{
	int tmp = a;
	a = b;
	b = tmp;
}

int main()
{
	int a = 10;
	int b = 20;
	
	Swap(a, b);

	cout << a << endl;
	cout << b << endl;

	system("pause");
	return 0;
}