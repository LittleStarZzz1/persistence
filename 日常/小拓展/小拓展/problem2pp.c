#include <stdio.h>
#include <stdlib.h>
//求一个整数存储在内存中的二进制中1的个数(第三种方法)
//更加优化,不需要循环32次
int main2pp(){
	int num = 10;
	int count = 0;
	while (num != 0){
		++count;
		num = num & (num - 1);	//每执行一次,消除一个二进制中的1
	}
	printf("%d\n", count);
	system("pause");
	return 0;
}