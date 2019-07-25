#include <stdio.h>
#include <stdlib.h>

int main2_1(){
	unsigned char a = 0xA5;
	unsigned char b = ~a >> 4 + 1;
	printf("%d\n", b);
	system("pause");
	return 0;
}