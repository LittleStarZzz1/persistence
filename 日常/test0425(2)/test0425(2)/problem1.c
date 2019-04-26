#include <stdio.h>
#include <stdlib.h>
//定义函数来交换两个数的内容
void Swap(int* a, int* b){
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
int main1(){
	//给定两个整型变量的值,将两个值的内容交换
	/*int tmp;
	int a = 10, b = 20;
	tmp = a;
	a = b;
	b = tmp;
	printf("%d %d",a, b);*/
	//不创建临时变量,交换两个数的内容
	/*int a = 10, b = 20;
	a = a + b;
	b = a - b;
	a = a - b;
	printf("%d %d",a,b);*/
	int a = 10, b = 20;
	Swap(&a,&b);
	printf("%d %d",a,b);
	system("pause");
	return 0;
}