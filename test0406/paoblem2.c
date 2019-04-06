#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//递归求n的阶乘
int Factor(int n){
	if (n == 1){
		return 1;
	}
	return n*Factor(n - 1);
	
}
//非递归求n的阶乘
int Factor_N(int n){
	int i;
	int ret = 1;
	for (i = 1; i <= n; ++i){
		ret *= i;
	}
	return ret;
}
int main(){
	int n;
	printf("请输入一个整数n: \n");
	scanf("%d", &n);
	printf("递归求:%d的阶乘为%d\n", n, Factor(n));
	printf("非递归求:%d的阶乘为%d\n", n, Factor_N(n));
	system("pause");
	return 0;
}