#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//������ʵ��
int Add(int x, int y){
	return x + y;
}
int Sub(int x, int y){
	return x - y;
}
int Mul(int x, int y){
	return x * y;
}
int Div(int x, int y){
	if (y != 0){
		return x / y;
	}
}
int main1(){
	int input;
	int x, y;
	int ret = 0;
	while (1){
		printf("*****************************\n");
		printf("   1. Add          2.Sub     \n");
		printf("   3. Mul          4.Div     \n");
		printf("*****************************\n");
		printf("��ѡ��: ");
		scanf("%d", &input);
		switch (input){
		case 1:
			printf("�����������:  ");
			scanf("%d %d", &x, &y);
			ret = Add(x, y);
			break;
		case 2:
			printf("�����������:  ");
			scanf("%d %d", &x, &y);
			ret = Sub(x, y);
			break;
		case 3:
			printf("�����������:  ");
			scanf("%d %d", &x, &y);
			ret = Mul(x, y);
			break;
		case 4:
			printf("�����������:  ");
			scanf("%d %d", &x, &y);
			ret = Div(x, y);
			break;
		default:
			printf("����ѡ������!\n");
			break;
		}
		system("cls");
		printf("ret = %d\n", ret);
	}
	system("pause");
	return 0;
}