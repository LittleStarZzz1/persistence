#include <stdio.h>
#include <stdlib.h>

int main1_3(){
	int x[] = { 1, 2, 3, 4, 5, 6 };
	int* p = x;
	p += 2;
	//printf("%d\n", *p++);
	//printf("%d\n", *++p);
	printf("%d\n", ++*p);
	system("pause");
	return 0;
}