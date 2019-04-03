#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void printMt(int n){
	int i, j;
	for (i = 1; i <= n; ++i){
		for (j = 1; j <= i; ++j){
			printf("%d*%d=%2d ", j, i, j*i);
		}
		putchar('\n');
	}
}
int main_1(){
	int n;
	printf("请输入一个整数: \n");
	scanf("%d", &n);
	printMt(n);
	system("pause");
	return 0;
}