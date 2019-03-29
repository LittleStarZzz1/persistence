#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>


int main(){
	int n;
	int i;
	int j;
	int k;
	printf("请输入一个数");
	scanf("%d",&n);
	for (i = 1; i <= n; ++i){
		for (j = 1; j <= n - i; ++j){
			putchar(' ');
		}
		for (k = 1; k <= i * 2 - 1; ++k){
			putchar('*');
		}
		putchar('\n');
	}
	for (i = n-1; i >= 1; --i){
		for (j = 1; j <= n - i; ++j){
			putchar(' ');
		}
		for (k = 1; k <= i * 2 - 1; ++k){
			putchar('*');
		}
		putchar('\n');
	}
	system("pause");
	return 0;
}