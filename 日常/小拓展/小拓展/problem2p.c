#include <stdio.h>
#include <stdlib.h>
//求一个整数存储在内存中的二进制中1的个数(第二种方法,可处理负数)
int main2p(){
	int num = -10;
	int count = 0;
	int i;
	for (i = 0; i < 32; ++i){
		//依次比较每一个二进制位是否为1
		if (num & (1 << i)){
			++count;
		}
	}
	printf("%d\n", count);
	system("pause");
	return 0;
}