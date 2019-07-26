#include <stdio.h>
#include <stdlib.h>

int main1_2(){
	int a[] = { 0, 2, 4, 6, 8, 10 };
	int* p = a + 1;
	//printf("%d\n", *(p++));	2
	//printf("%d\n", *(++p));	4
	//printf("%d\n", *(p--));	    2
	printf("%d\n", *(--p));		//0
	system("pause");
	return 0;
}