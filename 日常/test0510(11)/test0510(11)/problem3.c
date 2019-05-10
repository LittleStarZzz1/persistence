#include <stdio.h>
#include <stdlib.h>
//编程实现： 
//两个int(32位)整数m和n的二进制表达中,有多少个位(bit)不同
int main(){
	int num1 = 10;
	int num2 = 20;
	int ret = num1 ^ num2;
	int count = 0;
	int i;
	printf("num1转化为二进制数为:");
	for (i = 31; i >= 0; --i){
		printf("%d", (num1 >> i) & 1);
	}
	printf("\n");
	printf("num2转化为二进制数为:");
	for (i = 31; i >= 0; --i){
		printf("%d", (num2 >> i) & 1);
	}
	printf("\n");
	for (int i = 0; i < 32; ++i){
		if (ret & (1 << i)){
			++count;
		}
	}
	printf("%d\n", count);
	system("pause");
	return 0;
}