#include <stdio.h>
#include <stdlib.h>

union X{
	int x;
	char y[4];
}a;
int main1_3(){
	a.x = 0x11223344;
	printf("%x\n", a.y[0]);
	printf("%x\n", a.y[1]);
	printf("%x\n", a.y[2]);
	printf("%x\n", a.y[3]);
	system("pause");
	return 0;
}