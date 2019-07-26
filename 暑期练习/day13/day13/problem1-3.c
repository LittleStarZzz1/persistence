#include <stdio.h>
#include <stdlib.h>

int main1_3(){
	int c[] = { 1, 3, 5 };
	int* k = c + 1;
	printf("%d\n", *++k);	//5
	system("pause");
	return 0;
}