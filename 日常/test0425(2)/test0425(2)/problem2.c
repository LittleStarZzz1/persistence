#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main2(){
	//求十个整数中最大值
	//这种方法较为冗杂,需要重复输入.思路是输入两个数找到较大的那一个,然后再输入一个数
	//与最大的进行比较,只要比最大的大就用新数替换.
	//这种方法也适用于在十个数中找最大值和次大值
	int max, next;
	int tmp;
	printf("先输入两个数:  \n");
	scanf("%d %d", &max, &next);
	if (max < next){
		tmp = max;
		max = next;
		next = tmp;
	}
	for (int i = 0; i < 8; ++i){
		int last;
		printf("请在输入一个数: \n");
		scanf("%d",&last);
		if (last > max){
			next = max;
			max = last;
		}
		else if (last > next){
			next = last;
		}
	}
	printf("这十个数中最大的是%d,次大是%d",max,next);
	system("pause");
	return 0;
}