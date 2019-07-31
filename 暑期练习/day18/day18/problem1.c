#include <stdio.h>
#include <stdlib.h>

#define N 3
#define Y(n) ((N+1)*n)	//这种定义在编程规范中是严格禁止的
int main1_1(){
	int z = 2 * (N + Y(5 + 1));
	printf("%d\n", z);	//48
	system("pause");
	return 0;
}