#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int JudgeNum(int n){
	int tmp = sqrt(n);
	for (int i = 2; i <= tmp; ++i){
		if (n % i == 0){
			return 0;
		}
	}
	return 1;
}
int main(){
	int n;
	printf("请输入一个整数: ");
	scanf("%d",&n);
	if (n == 1){
		printf("%d既不是素数也不是合数\n",n);
	}
	else if (JudgeNum(n)){
		printf("%d是质数\n",n);
	}
	else {
		printf("%d是合数\n",n);
	}
	system("pause");
	return 0;
}