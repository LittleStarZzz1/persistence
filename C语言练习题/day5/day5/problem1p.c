#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//打印0-99999之间的水仙花数
int main1p(){
	int array[20] = { 0 };
	int count = 0;
	int i, j;
	int sum = 0;
	for (i = 0; i < 100000; ++i){	//首先是数字遍历
		for (j = i; j; j /= 10){	//数位遍历
			array[count] = j % 10;	//将该数字的每一位存在数组中
			++count;
		}
		for (j = 0; j < count; ++j){
			sum += pow(array[j], count);
		}
		if (sum == i){
			printf("%d ", i);
		}
		count = sum = 0;	//最后记得将count和sum强制归0
	}
	printf("\n");
	system("pause");
	return 0;
}