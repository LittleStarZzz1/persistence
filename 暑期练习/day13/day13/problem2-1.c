#include <stdio.h>
#include <stdlib.h>

#define sum(a,b,c) a+b+c
int main2_1(){
	int i = 3;
	int j = 2;
	printf("%d\n", i * sum(i,(i+j), j));
	system("pause");
	return 0;
}