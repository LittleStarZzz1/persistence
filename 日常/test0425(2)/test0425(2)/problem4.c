#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main() {
	//�������������Լ��
	/*int a, b;
	int min;
	int max = 0;
	printf("������������: \n");
	scanf("%d %d",&a,&b);
	min = a < b ? a : b;
	for (int i = 2; i <= min; ++i){
		if (a % i == 0 && b % i == 0){
			max = i;
		}
	}
	if (max == 0){
		printf("������������!\n");
	}
	else {
		printf("�����������Լ����%d\n",max);
	}*/
	//շת����������Լ��
	int a, b, c;
	printf("������������: \n");
	scanf("%d %d",&a,&b);
	while (c = a % b){
		a = b;
		b = c;
	}
	if (b == 1){
		printf("������������!\n");
	}
	else {
		printf("�������������Լ����%d\n",b);
	}
	system("pause");
	return 0;
}