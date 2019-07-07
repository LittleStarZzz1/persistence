#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//输入三个整数x,y,z,请把这三个数由小到大输出
//把数字的交换通过函数来实现,简化代码
void Swap(int* x, int* y){
	int tmp = *x;
	*x = *y;
	*y = tmp;
}
//除此之外,我们还可以通过按位异或的方式来实现两个数的交换
void Swap1(int* x, int* y){
	*x = *x ^ *y;
	*y = *x ^ *y;
	*x = *x ^ *y;
}
//通过两个数的关系实现两个数的交换
void Swap2(int* x, int* y){
	*x = *x + *y;
	*y = *x - *y;
	*x = *x - *y;
}
int main1p(){
	int x, y, z;
	printf("请输入三个整数:   ");
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
	printf("这三个整数从小到大排列为:%d %d %d\n", x, y, z);
	system("pause");
	return 0;
}