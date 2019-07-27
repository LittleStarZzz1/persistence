#include <stdio.h>
#include <stdlib.h>

//编写一个函数,求一个数字是否是回文数
int main(){
	int n;
	int i;
	int tmp;
	int sum = 0;
	printf("请输入一个整数; ");
	scanf("%d", &n);
	for (i = n; i; i /= 10){
		tmp = i % 10;
		sum = sum * 10 + tmp;
	}
	if (sum == n){
		printf("%d是回文数!\n", n);
	}
	system("pause");
	return 0;
}