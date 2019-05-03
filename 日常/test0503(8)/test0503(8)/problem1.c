#include <stdio.h>
#include <stdlib.h>
//��д����:unsigned int reverse_bit(unsigned int value)
//��������ķ���ֵvalue�Ķ�����λģʽ�����ҷ�ת���ֵ.
unsigned int reverse_bit(unsigned int n){
	int ret = 0;	//ret������¼���
	int i = 0;
	while (i < 32){
		//�ж���n�Ķ�����λ�ϵ�ÿһλ���Ƿ�Ϊ1
		if (n & (1 << i)){	//Ϊ1�����if���
			//ret�ʼ�Ľ��Ϊ0,Ҳ��˵ÿ�ҵ���n������λ�ϵ�1�ͽ��丳ret��Ӧ��λ��
			ret = ret | (1 << (31 - i));
		}
		++i;
	}
	return ret;
}
//�ڶ��ַ���
unsigned int reverse_bitTwo(unsigned int n){
	unsigned int sum = 0;
	for (int i = 0; i < 32; ++i, n /= 2){	//��λ����,��֤ѭ��32��
		unsigned int tmp = n % 2;	//ȡ��n�ڶ������µ�ÿһλ
		sum = sum * 2 + tmp;
	}
	return sum;
}
int main1(){
	unsigned int n = 25;
	printf("%u\n", reverse_bit(n));	//%u��ӡ�޷���ʮ������
	printf("%u\n", reverse_bitTwo(n));
	system("pause");
	return 0;
}