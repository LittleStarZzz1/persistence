#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//������������x,y,z,�������������С�������
//�����ֵĽ���ͨ��������ʵ��,�򻯴���
void Swap(int* x, int* y){
	int tmp = *x;
	*x = *y;
	*y = tmp;
}
//����֮��,���ǻ�����ͨ����λ���ķ�ʽ��ʵ���������Ľ���
void Swap1(int* x, int* y){
	*x = *x ^ *y;
	*y = *x ^ *y;
	*x = *x ^ *y;
}
//ͨ���������Ĺ�ϵʵ���������Ľ���
void Swap2(int* x, int* y){
	*x = *x + *y;
	*y = *x - *y;
	*x = *x - *y;
}
int main1p(){
	int x, y, z;
	printf("��������������:   ");
	scanf("%d %d %d", &x, &y, &z);
	if (x > y){
		Swap(&x, &y);
	}
	if (x > z){
		Swap(&x, &z);
	}
	if (y > z){
		Swap(&y, &z);
	}
	printf("������������С��������Ϊ:%d %d %d\n", x, y, z);
	system("pause");
	return 0;
}