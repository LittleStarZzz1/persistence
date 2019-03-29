#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(){
	int num;
	int i;
	int sum = 0;
	int tmp = 0;
	printf("请输入一个个位数: ");
	scanf("%d",&num);
	for (i = 0; i < 5; ++i){
		tmp = tmp * 10 + num;
		sum += tmp;
	}
	printf("sum = %d\n",sum);
	system("pause");
	return 0;
}