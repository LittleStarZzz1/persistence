#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main2_1(){
	unsigned int a = 0xFFFFFFF7;
	unsigned char i = (unsigned char)a;
	char *b = (char*)&a;
	printf("%08x,%08x", i, *b);	//000000F7,FFFFFFF7
	system("pause");
	return 0;
}
