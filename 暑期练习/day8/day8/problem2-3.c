#include <stdio.h>
#include <stdlib.h>

int main2_3(){
	unsigned long ulA = 0x11000000;
	printf("%x\n", *(unsigned char*)&ulA);	//½á¹ûÎª0
	system("pause");
	return 0;
}