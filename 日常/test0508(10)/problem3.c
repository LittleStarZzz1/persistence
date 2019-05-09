#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//在屏幕上打印杨辉三角
int main(){
	int a[10][10];
	int n;
	printf("请输入一个整数： \n");
	scanf("%d",&n);
	int i, j;
	for (i = 0; i < n; ++i){
		a[i][0] = 1;
		a[i][i] = 1;
		for (j = 1; j < i; ++j){
			a[i][j] = a[i - 1][j] + a[i - 1][j - 1];
		}
	}
	for (i = 0; i < n; ++i){
		for (j = 0; j < 2 * (n - i); ++j){
			printf(" ");
		}
		for (j = 0; j <= i; ++j){
			printf("%5d", a[i][j]);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}