#include <stdio.h>
#include <stdlib.h>
//函数指针作为函数返回值出现
Add(int x, int y);
//函数fn的返回值为指针(指向函数 int  xx(int a, int b)的指针)
int(*fn(int n))(int a, int b){
	printf("fn: n = %d\n", n);
	return Add;
}
int main3(){
	int value = fn(100)(3, 9);
	printf("%d\n", value);
	system("pause");
	return 0;
}