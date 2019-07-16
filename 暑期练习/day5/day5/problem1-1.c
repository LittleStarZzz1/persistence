#include <stdio.h>
#include <stdlib.h>

int main1_1(){
	int a[10];
	int* pa;
	pa = a;
	printf("&a[1] = %d\n", &a[1]);
	printf("%d\n", pa + 1);
	system("pause");
	return 0;
}