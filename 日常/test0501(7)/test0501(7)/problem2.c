#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//编写一个函数实现n^k,使用递归实现
int PowFunction(int n, int k){
	if (k == 0){
		return 1;
	}
	if (k == 1){
		return n;
	}
	return n * PowFunction(n, k - 1);
}
int main2(){
	int n, k;
	scanf("%d %d", &n, &k);
	printf("%d\n", PowFunction(n, k));
	system("pause");
	return 0;
}