#include <stdio.h>
#include <stdlib.h>
//计算一个数的二进制中1的个数
//该方法只能处理正数
int main2(){
	int num = 10;
	int count = 0;
	while (num){
		if (num % 2 == 1){
			++count;
		}
		num = num >> 1;
	}
	printf("%d\n", count);
	system("pause");
	return 0;
}