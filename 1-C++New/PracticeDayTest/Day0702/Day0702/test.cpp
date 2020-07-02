#include <iostream>

using namespace std;

class A
{ 
	void test(float a)
	{
		cout << "1"; 
	}
}; 
class B :public A
{ 
	void test(int b)
	{ 
		cout << "2";
	} 
}; 

int main()
{
	A *a = new A;
	B *b = new B;
	a = b;
	//a->test(1.1);

	system("pause");
	return 0;
}
