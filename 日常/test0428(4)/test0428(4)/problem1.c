#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//在屏幕上输出每行对应*图案(对称)
void PrintStar(int n){
	int i;
	int j;
	for (i = 1; i <= n; ++i){
		for (j = 1; j <= n - i; ++j){
			printf(" ");
		}
		for (j = 1; j <= 2 * i - 1; ++j){
			printf("*");
		}
		printf("\n");
	}
	for (i = n - 1; i >= 1; --i){
		for (j = n - i; j >= 1; --j){
			printf(" ");
		}
		for (j = 2 * i - 1; j >= 1; --j){
			printf("*");
		}
		printf("\n");
	}
}
int main1(){
	int n;
	scanf("%d", &n);
	PrintStar(n);
	system("pause");
	return 0;
}