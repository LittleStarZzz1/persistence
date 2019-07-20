#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//求数组中前k个最小的数字
int main(){
	int a[10] = { 10, 11, 5, 1, 9, 4, 2, 7, 8, 14 };
	int n;
	int tmp;
	printf("请输入一个正整数n: ");
	scanf("%d", &n);
	for (int i = 1; i < n; ++i){
		if (a[i] < a[0]){
			tmp = a[i];
			a[i] = a[0];
			a[0] = tmp;
		}
	}
	printf("数组中前%d个数中最小的为%d\n", n, a[0]);
	system("pause");
	return 0;
}