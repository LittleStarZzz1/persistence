#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main2()
{
	int a, b;
	scanf("%d,%d", &a, &b);
	if (a > b) a = b; //b = a;    
	else a++; b++;    
	printf("%d,%d", a, b);

	system("pause");
	return 0;
}