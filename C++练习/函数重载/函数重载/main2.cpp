#include <iostream>

using namespace std;

void swapArgs(int * pa, int * pb)
{
	int tmp;
	tmp = *pa;
	*pa = *pb;
	*pb = tmp;
}

void swapArgs(float * pa, float * pb)
{
	float tmp;
	tmp = *pa;
	*pa = *pb;
	*pb = tmp;
}


int main2()
{
	int a = 10, b = 20;
	float c = 3.14, d = 0.618;

	swapArgs(&a, &b);
	swapArgs(&c, &d);

	cout << "a =" << a << ' ' << "b = " << b << endl;
	cout << "c =" << c << ' ' << "d = " << d << endl;


	system("pause");
	return 0;
}