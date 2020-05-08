#include <iostream>

using namespace std;

template<class T>
T Add(T& a, const T& b)
{
	return a + b;
}

int main2()
{
	int a1 = 10, a2 = 20;
	double d1 = 1.1, d2 = 2.2;

	//Add(a1, a2);
	//Add(d1, d2);
	//Add<int>(a1, d1);
	Add(a1, (int)d1);

	system("pause");
	return 0;
}