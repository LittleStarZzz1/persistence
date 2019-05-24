#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//用函数指针数组实现计算器
int Add(int x, int y);
int Sub(int x, int y);
int Mul(int x, int y);
int Div(int x, int y);
int main2(){
	int input;
	int x, y;
	int ret = 0;
	int(*p[5])(int x, int y) = { 0, Add, Sub, Mul, Div };	//转移表
	while (1){
		printf("*****************************\n");
		printf("   1. Add          2.Sub     \n");
		printf("   3. Mul          4.Div     \n");
		printf("*****************************\n");
		printf("请选择: ");
		scanf("%d", &input);
		if ((input > 0) && (input < 5)){
			printf("请输入两个操作数:  ");
			scanf("%d %d", &x, &y);
			ret = (*p[input])(x, y);
		}
		else {
			printf("您的输入有误!\n");
		}
		system("cls");
		printf("ret = %d\n", ret);
	}
	system("pause");
	return 0;
}