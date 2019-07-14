#include <stdio.h>
#include <stdlib.h>

typedef struct{
	int a;
	char b;
	short c;
	short d;
}AA_t;
int main1_4(){
	printf("%d\n", sizeof(AA_t));
	system("pause");
	return 0;
}