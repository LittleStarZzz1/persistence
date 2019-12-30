#include <iostream>
#include <typeinfo>

using namespace std;

//Ä£°å
template <class T>
void SwapArgs(T & a, T & b)
{
	T tmp;
	cout << typeid(tmp).name() << endl;
	tmp = a;
	a = b;
	b = tmp;
}

int main()
{
	int ia = 5;
	int ib = 7;
	SwapArgs<int>(ia, ib);

	cout << ia << ' ' << ib << endl;

	system("pause");
	return 0;
}