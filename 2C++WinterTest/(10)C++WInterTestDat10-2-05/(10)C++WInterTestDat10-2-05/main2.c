#include <stdio.h>
#include <stdlib.h>



void fun(int a, int b)
{
	a = 100;
	b = 200;
}

int main2()
{
	int a = 5, b = 7;
	fun(a, b);
	printf("%d%d\n", a, b);
	system("pause");
	return 0;
}