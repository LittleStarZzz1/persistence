#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//ʵ��һ������,��ӡ�˷��ھ����ھ���������������Լ�ָ��
//����9���9 * 9�ھ���,����12,���12 * 12�ĳ˷��ھ���
void PrintMul(int n){
	for (int i = 1; i <= n; ++i){
		for (int j = 1; j <= i; ++j){
			printf("%d*%d=%2d ", j, i, j*i);
		}
		printf("\n");
	}
}
int main1(){
	int n;
	printf("������һ������: \n");
	scanf("%d", &n);
	PrintMul(n);
	system("pause");
	return 0;
}