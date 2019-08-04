#include <stdio.h>
#include <stdlib.h>

//给一个不多于5位的正整数
//求出它是几位数
//逆序打印各位数字
void PrintNumber(int n){	//递归实现逆序打印
	printf("%d ", n % 10);
	if (n > 10){
		PrintNumber(n / 10);
	}
}
int Num(int n){
	int count = 0;
	while (n){
		++count;
		n = n / 10;
	}
	return count;
}
int main2(){
	printf("逆序打印：");
	PrintNumber(12345);
	putchar('\n');
	printf("数字位数：%d\n", Num(12345));
	system("pause");
	return 0;
}