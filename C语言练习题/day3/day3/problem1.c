#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//������������x,y,z,�������������С�������
int main1(){
	int x, y, z;
	int tmp;
	printf("��������������:   ");
	scanf("%d %d %d", &x, &y, &z);
	if (x > y){
		tmp = x;
		x = y;
		y = tmp;
	}
	if (x > z){
		tmp = x;
		x = z;
		z = tmp;
	}
	if (y > z){
		tmp = y;
		y = z;
		z = tmp;
	}
	printf("������������С��������Ϊ:%d %d %d\n", x, y, z);
	system("pause");
	return 0;
}