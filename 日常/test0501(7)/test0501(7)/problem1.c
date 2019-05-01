#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//递归实现求第n个斐波那契数
int Fib(int n){
	if (n <= 2){
		return 1;
	}
	return Fib(n - 1) + Fib(n - 2);
}
//非递归实现求第n个斐波那契数
int Fib_N(int n){
	int an_1 = 1;
	int an_2 = 1;
	int an;
	if (n <= 2){
		return 1;
	}
	for (int i = 2; i < n; ++i){
		an = an_2 + an_1;
		an_2 = an_1;
		an_1 = an;
	}
	return an;
}
int main1(){
	int n;
	scanf("%d", &n);
	printf("%d\n", Fib(n));
	printf("%d\n", Fib_N(n));
	system("pause");
	return 0;
}