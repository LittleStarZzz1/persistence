#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//求Sn=a+aa+aaa+aaaa+aaaaa的前5项之和，其中a是一个数字， 
int main(){
	int n;
	int i;
	int sum = 0;
	int tmp = 0;
	printf("请输入一个整数n(0 - 9): ");
	scanf("%d", &n);
	for (i = 0; i < 5; ++i){
		tmp = tmp * 10 + n;
		sum += tmp;
	}
	printf("%d\n", sum);
	system("pause");
	return 0;
}