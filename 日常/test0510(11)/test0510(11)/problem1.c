#include <stdio.h>
#include <stdlib.h>
//获取一个数二进制序列中所有的偶数位和奇数位， 
//分别输出二进制序列
int main1(){
	int n = 10;
	int i;
	printf("转化为二进制数为:");
	for (i = 31; i >= 0; --i){
		printf("%d", (n >> i) & 1);
	}
	printf("\n");
	printf("奇数位为:");
	for (i = 31; i >= 1; i -= 2){
		printf("%d", (n >> i) & 1);
	}
	printf("\n");
	printf("偶数位为:");
	for (i = 30; i >= 0; i -= 2){
		printf("%d", (n >> i) & 1);
	}
	printf("\n");
	system("pause");
	return 0;
}