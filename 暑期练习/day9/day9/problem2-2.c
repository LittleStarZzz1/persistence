#include <stdio.h>
#include <stdlib.h>

//写一个宏,输入两个参数,返回较小的一个.
#define Min(a, b) ((a)<=(b)?(a):(b))
int main2_2(){
	int a = 20;
	int b = 10;
	printf("%d\n", Min(a, b));
	system("pause");
	return 0;
}