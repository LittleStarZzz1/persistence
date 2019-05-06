#include <stdio.h>
#include <stdlib.h>
//杨氏矩阵 
//有一个二维数组, 数组的每行从左到右是递增的, 每列从上到下是递增的.
//在这样的数组中查找一个数字是否存在
int FindNum(int a[][3], int x, int y, int f){
	int i = 0;
	int j = y - 1;
	while (i < x && j >= 0){
		if (a[i][j] > f){
			--j;
		}
		else if (a[i][j] < f){
			++i;
		}
		else {
			return 1;
		}
	}
	return 0;
}
int main(){
	int a[][3] = { { 1, 3, 5 }, { 3, 5, 7 }, { 5, 7, 9 } };
	if (FindNum(a, 3, 3, 5)){
		printf("找到了!\n");
	}
	else {
		printf("没找到!\n");
	}
	system("pause");
	return 0;
}