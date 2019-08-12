#include <stdio.h>
#include <stdlib.h>

int main1_3(){
	int x, y = 5;
	int* p = &x;
	//x = *p;
	x = y;
	printf("%d\n", x);
	system("pause");
	return 0;
}