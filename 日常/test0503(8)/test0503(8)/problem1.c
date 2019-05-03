#include <stdio.h>
#include <stdlib.h>
//编写函数:unsigned int reverse_bit(unsigned int value)
//这个函数的返回值value的二进制位模式从左到右翻转后的值.
unsigned int reverse_bit(unsigned int n){
	int ret = 0;	//ret用来记录结果
	int i = 0;
	while (i < 32){
		//判断数n的二进制位上的每一位上是否为1
		if (n & (1 << i)){	//为1则进入if语句
			//ret最开始的结果为0,也就说每找到数n二进制位上的1就将其赋ret相应的位置
			ret = ret | (1 << (31 - i));
		}
		++i;
	}
	return ret;
}
//第二种方法
unsigned int reverse_bitTwo(unsigned int n){
	unsigned int sum = 0;
	for (int i = 0; i < 32; ++i, n /= 2){	//数位遍历,保证循环32次
		unsigned int tmp = n % 2;	//取出n在二进制下的每一位
		sum = sum * 2 + tmp;
	}
	return sum;
}
int main1(){
	unsigned int n = 25;
	printf("%u\n", reverse_bit(n));	//%u打印无符号十进制数
	printf("%u\n", reverse_bitTwo(n));
	system("pause");
	return 0;
}