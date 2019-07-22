#include <stdio.h>
#include <stdlib.h>

//输入一个整型数组,数组里有正数也有负数
//数组中一个或连续的多个整数组成一个子数组
//求所有子数组的和的最大值
//例如输入的数组为{ 1, -2, 3, 10, -4, 7, 2, -5 }
//最大的子数组为{ 3, 10, -4, 7, 2 },因此输出为该子数组的和为18
int main(){
	int a[] = { 1, -2, 3, 10, -4, 7, 2, -5 };
	int n = sizeof(a) / sizeof(a[0]);
	int MAX = 0;
	int sum = 0;
	int i;
	for (i = 0; i <= n; ++i){
		sum += a[i];
		if (sum > 0){
			if (sum > MAX){
				MAX = sum;
			}
		}
		else {
			sum = 0;
		}
	}
	printf("%d\n", MAX);
	system("pause");
	return 0;
}