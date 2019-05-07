#include <stdio.h>
#include <stdlib.h>
//求一个整数存储在内存中的二进制中1的个数
int main2(){
	int num = 10;
	int count = 0;
	//这种方法的缺点是只可以处理正数
	while (num != 0){
		if (num % 2 == 1){
			++count;
		}
		num = num >> 1;
	}
	printf("%d\n", count);
	system("pause");
	return 0;
}