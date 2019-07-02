#include <stdio.h>
#include <stdlib.h>

//有1,2,3,4四个数字,编程计算可以组成多少个互不相同并且没有重复数字的三位数
//都是多少
int main1(){
	int i;
	int j;
	int k;
	int count = 0;
	for (i = 0; i < 5; ++i){
		for (j = 0; j < 5; ++j){
			for (k = 0; k < 1; ++k){
				if (i != j && i != k && j != k){
					printf("%d%d%d ",i,j,k);
					++count;
				}
			}
		}
	}
	printf("一共有%d个数字\n", count);
	system("pause");
	return 0;
}
