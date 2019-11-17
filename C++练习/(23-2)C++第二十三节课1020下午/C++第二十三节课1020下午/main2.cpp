#include <iostream>

using namespace std;

//¿‡–Õ›Õ»°

class Truetype{
public:
	static bool get()
	{
		return true;
	}
};

class Falsetype{
public:
	static bool get()
	{
		return false;
	}
};

template <class T>
class TypeTraits{
public:
	typedef Falsetype Jtype;
};

template <>
class TypeTraits<int>{
public:
	typedef Truetype Jtype;
};

template <>
class TypeTraits<float>{
public:
	typedef Truetype Jtype;
};

int main2()
{
	cout << TypeTraits<int>::Jtype::get() << endl;
	cout << TypeTraits<double>::Jtype::get() << endl;

	system("pause");
	return 0;
}