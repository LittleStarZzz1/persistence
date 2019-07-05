#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//一个整数,它加上100是一个完全平方数,再加上168又是一个完全平方数
//请问该数是多少?
int main1(){
	int i;
	int x, y;
	for (i = -100; i < 100000; ++i){
		x = (int)sqrt(i + 100);
		y = (int)sqrt(i + 268);
		if (x * x == (i + 100) && y * y == (i + 268)){
			printf("%d\n", i);
		}
	}
	system("pause");
	return 0;
}