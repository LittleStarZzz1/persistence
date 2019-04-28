#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main2p(){
	//判断一个数在sn进制下是不是回文数
	//回文数,类似1234321的数
	int n, sn;
	int i;
	int tmp;
	int sum = 0;
	printf("请输n和sn,n表示数字,sn表示进制: ");
	scanf("%d %d", &n, &sn);
	for (i = n; i; i /= sn){
		tmp = i % sn;
		sum = sum * sn + tmp;
	}
	if (n == sum){
		printf("%d在%d进制下是回文数\n", n, sn);
	}
	else {
		printf("%d在%d进制下不是是回文数\n", n, sn);
	}
	//n % sn完成了n在sn进制下每一位的遍历
	system("pause");
	return 0;
}