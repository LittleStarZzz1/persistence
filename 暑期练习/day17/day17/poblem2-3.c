#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main2_3(){
	int i = 10;
	long t = sizeof(i++);
	printf("%d", i);	//10
	system("pause");
	return 0;
}