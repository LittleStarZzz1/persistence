#include <stdio.h>
#include <stdlib.h>
unsigned int reverse_bit(unsigned int num){
	int ret = 0;	//用来记录结果
	int i = 0;
	while (i < 32){		//循环32次判断num的每一位二进制是否为1
		if (num & (1 << i)){	
			//如果num的一个二进制位为1,就讲ret或上1左移(32-i)位
			ret = ret | (1 << (31 - i));
		}
		++i;
	}
	return ret;
}
int main_1(){
	unsigned int num = 25;
	printf("%u\n",reverse_bit(num));
	system("pause");
	return 0;
}