#include <stdio.h>
#include <stdlib.h>
//��������ʱ��������������������(ʹ��λ������)
int main1(){
	int a = 20;
	int b = 10;
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("a = %d, b = %d\n", a, b);
	system("pause");
	return 0;
}