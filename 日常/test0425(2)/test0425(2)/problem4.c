#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main() {
	//求两个数的最大公约数
	/*int a, b;
	int min;
	int max = 0;
	printf("请输入两个数: \n");
	scanf("%d %d",&a,&b);
	min = a < b ? a : b;
	for (int i = 2; i <= min; ++i){
		if (a % i == 0 && b % i == 0){
			max = i;
		}
	}
	if (max == 0){
		printf("这两个数互质!\n");
	}
	else {
		printf("这两个数最大公约数是%d\n",max);
	}*/
	//辗转相除法求最大公约数
	int a, b, c;
	printf("请输入两个数: \n");
	scanf("%d %d",&a,&b);
	while (c = a % b){
		a = b;
		b = c;
	}
	if (b == 1){
		printf("这两个数互质!\n");
	}
	else {
		printf("这两个数的最大公约数是%d\n",b);
	}
	system("pause");
	return 0;
}