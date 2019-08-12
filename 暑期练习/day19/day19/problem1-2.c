#include <stdio.h>
#include <stdlib.h>

int main1_2(){
	int a = 5;
	int* p = &a;
	int* q = &a;
	//a = (*p)*(*q);
	//a = p - q;
	printf("%d\n", a);
	system("pause");
	return 0;
}