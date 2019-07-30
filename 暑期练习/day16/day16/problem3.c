#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//模拟实现函数pow(x,y)
int main(){
	int x, y;
	int res = 1;
	printf("请输入两个整数x和y(x^y): ");
	scanf("%d %d", &x, &y);
	while (y){
		res *= x;
		--y;
	}
	printf("x^y = %d\n", res);
	system("pause");
	return 0;
}