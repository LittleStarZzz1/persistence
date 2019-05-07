#include <stdio.h>
#include <stdlib.h>
//不创建临时变量交换两个数的内容(使用位操作符)
int main1(){
	int a = 20;
	int b = 10;
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("a = %d, b = %d\n", a, b);
	system("pause");
	return 0;
}