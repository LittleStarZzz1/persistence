#include <stdio.h>
#include <stdlib.h>

//打印出100-999之间所有的水仙花数
int main1(){
	int i;
	int a, b, c;
	for (i = 100; i < 1000; ++i){
		a = i % 10;	//a表示i的个位上的数字
		b = i / 10 % 10;	//b表示i的十位上的数字;
		c = i / 100;
		if (a * a * a + b * b * b + c * c * c == i){
			printf("%d ", i);
		}
	}
	printf("\n");
	system("pause");
	return 0;
}