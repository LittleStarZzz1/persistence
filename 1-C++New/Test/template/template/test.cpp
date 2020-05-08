#include <iostream>

using namespace std;

//void Swap(int* a, int* b)
//{
//	int tmp = *a;
//	*a = *b;
//	*b = tmp;
//}
//
//void Swap(double* a, double* b)
//{
//	double tmp = *a;
//	*a = *b;
//	*b = tmp;
//}
//
//void Swap(char* a, char* b)
//{
//	char tmp = *a;
//	*a = *b;
//	*b = tmp;
//}

template<class T>
void Swap(T& a, T& b)
{
	T tmp = a;
	a = b;
	b = tmp;
}

int main1()
{
	double a = 1.1, b = 2.2;
	Swap<double>(a, b);
	cout << a << ' ' << b << endl;

	int c = 1, d = 2;
	Swap<int>(c, d);
	cout << c << ' ' << d << endl;

	char e = 'a', f = 'b';
	Swap<char>(e, f);
	cout << e << ' ' << f << endl;

	system("pause");
	return 0;
}