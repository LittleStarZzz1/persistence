#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(){
	int n;
	int j;
	int	tmp = 0;
	int sn;
	int sum = 0;
	printf("请输入一个整数和一个表示进制的数: ");
	scanf("%d %d",&n,&sn);
	for (j = n; j; j /= sn){
		tmp = j % sn;
		sum = sum * sn + tmp;
	}
	if (sum == n){
		printf("%d在%d进制下是回文数\n",n,sn);
	}
	else {
		printf("%d在%d进制下不是回文数",n,sn);
	}
	system("pause");
	return 0;
}