#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main2p(){
	//�ж�һ������sn�������ǲ��ǻ�����
	//������,����1234321����
	int n, sn;
	int i;
	int tmp;
	int sum = 0;
	printf("����n��sn,n��ʾ����,sn��ʾ����: ");
	scanf("%d %d", &n, &sn);
	for (i = n; i; i /= sn){
		tmp = i % sn;
		sum = sum * sn + tmp;
	}
	if (n == sum){
		printf("%d��%d�������ǻ�����\n", n, sn);
	}
	else {
		printf("%d��%d�����²����ǻ�����\n", n, sn);
	}
	//n % sn�����n��sn������ÿһλ�ı���
	system("pause");
	return 0;
}