#include <stdio.h>
#include <stdlib.h>
int FindNum(int a[][3], int row, int col, int f){
	int i = 0;
	int j = col - 1;
	while (i < row && j >= 0){
		if (a[0][j] < f){
			++i;
		}
		else if (a[0][j] > f){
			--j;
		}
		else {
			return 1;
		}
	}
	return 0;
}
int main(){
	int a[][3] = { { 1, 3, 5 }, { 3, 5, 7 }, { 5, 7, 9 } };
	if (FindNum(a,3,3,10)){
		printf("找到了!\n");
	}
	else {
		printf("没找到!\n");
	}
	system("pause");
	return 0;
}