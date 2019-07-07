#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//输入三个整数x,y,z,请把这三个数由小到大输出
int main1(){
	int x, y, z;
	int tmp;
	printf("请输入三个整数:   ");
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
	printf("这三个整数从小到大排列为:%d %d %d\n", x, y, z);
	system("pause");
	return 0;
}