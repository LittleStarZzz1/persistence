#include <iostream>

using namespace std;

extern "C"{
	int func(int a)
	{
		return a;
	}

	int func(int a, int b)
	{
		return a + b;
	}
}

int main()
{


	system("pause");
	return 0;
}