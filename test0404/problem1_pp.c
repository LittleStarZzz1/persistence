#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int Fib(int n){
	int num1 = 1;	//第一个数为1
	int num2 = 1;	//第二个数为1
	int sum;
	while (n > 2){
		sum = num1 + num2;
		num1 = num2;
		num2 = sum;
		--n;
	}
	return 1;
}
int main(){
	int n;
	printf("请输入一个整数: \n");
	scanf("%d",&n);
	printf("第%d个斐波那契数是%d\n",n,Fib(n));
	system("pause");
	return 0;
}