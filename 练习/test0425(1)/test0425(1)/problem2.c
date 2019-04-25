#include <stdio.h>
#include <stdlib.h>
int main2(){
	//输出乘法口诀表
	int i;
	int j;
	for (i = 1; i < 9; ++i){
		for (j = 1; j <= i; ++j){
			printf("%d*%d=%2d ",j,i,j*i);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}