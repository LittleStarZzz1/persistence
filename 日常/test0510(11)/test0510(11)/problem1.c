#include <stdio.h>
#include <stdlib.h>
//��ȡһ�������������������е�ż��λ������λ�� 
//�ֱ��������������
int main1(){
	int n = 10;
	int i;
	printf("ת��Ϊ��������Ϊ:");
	for (i = 31; i >= 0; --i){
		printf("%d", (n >> i) & 1);
	}
	printf("\n");
	printf("����λΪ:");
	for (i = 31; i >= 1; i -= 2){
		printf("%d", (n >> i) & 1);
	}
	printf("\n");
	printf("ż��λΪ:");
	for (i = 30; i >= 0; i -= 2){
		printf("%d", (n >> i) & 1);
	}
	printf("\n");
	system("pause");
	return 0;
}