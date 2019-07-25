#include <stdio.h>
#include <stdlib.h>

int main1_1(){
	char acX[] = "abc";
	char acY[] = { 'a', 'b', 'c' };
	acX[0] = 'd';
	acY[0] = 'e';
	puts(acX);
	puts(acY);
	system("pause");
	return 0;
}