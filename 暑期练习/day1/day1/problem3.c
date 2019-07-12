#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//在一个二维数组中,每一行都按照从左到右递增的顺序排序
//每一列都按照从上到下递增的顺序排序
//完成一个函数,输入这样的一个二维数组和一个整数,判断该数组中是否含有该整数
int main3(){
	int arr[4][4] = { 1, 2, 8, 9,
					  2, 4, 9, 12,
					  4, 7, 10, 13,
					  6, 8, 11, 15 };
	int n;
	int row = 3;
	int col = 0;
	int leap = 1;
	printf("请输入您想要查找的数: ");
	scanf("%d", &n);
	while (row >= 0 && col <= 3){
		if (n > arr[row][col]){
			++col;
		}
		else if(n < arr[row][col]){
			--row;
		}
		else {
			printf("找到了!\n");
			leap = 0;
			break;
		}
	}
	if (leap){
		printf("没找到!\n");
	}
	system("pause");
	return 0;
}