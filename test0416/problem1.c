#include <stdio.h>
#include <stdlib.h>
unsigned int reverse_bit(unsigned int num){
	int ret = 0;	//������¼���
	int i = 0;
	while (i < 32){		//ѭ��32���ж�num��ÿһλ�������Ƿ�Ϊ1
		if (num & (1 << i)){	
			//���num��һ��������λΪ1,�ͽ�ret����1����(32-i)λ
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