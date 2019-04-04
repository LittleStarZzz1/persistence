#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int Fib(int n){
	if (n <= 2){
		return 1;
	}
	else {
		return Fib(n - 2) + Fib(n - 1);
	}
}
int main(){
	//求第n个斐波那契数
	int n;
	printf("请输入一个整数: \n");
	scanf("%d",&n);
	printf("第%d个斐波那契数是%d\n",n,Fib(n));
	system("pause");
	return 0;
}