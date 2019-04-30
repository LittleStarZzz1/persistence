#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//实现一个函数,打印乘法口诀表，口诀表的行数和列数自己指定
//输入9输出9 * 9口诀表,输入12,输出12 * 12的乘法口诀表
void PrintMul(int n){
	for (int i = 1; i <= n; ++i){
		for (int j = 1; j <= i; ++j){
			printf("%d*%d=%2d ", j, i, j*i);
		}
		printf("\n");
	}
}
int main1(){
	int n;
	printf("请输入一个整数: \n");
	scanf("%d", &n);
	PrintMul(n);
	system("pause");
	return 0;
}