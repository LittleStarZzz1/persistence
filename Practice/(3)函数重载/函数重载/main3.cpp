#include <iostream>


using namespace std;

//void test(int a, int b = 200, int c = 300);

void test(int a, int b = 20, int c = 30)
{
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;
}



int main()
{
	//test(10);
	//test(10, 200);
	//test(10, 200, 300);
	system("pause");
	return 0;
}