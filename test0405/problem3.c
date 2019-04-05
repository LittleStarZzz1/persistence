#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int DigitSum(int n){
	if (n < 10){
		return n;
	}
	return DigitSum(n / 10) + n % 10;
}
int main(){
	int number;
	printf("请输入一个整数: \n");
	scanf("%d",&number);
	printf("%d\n",DigitSum(number));
	system("pause");
	return 0;
}