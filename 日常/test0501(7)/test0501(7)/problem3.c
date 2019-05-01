#include <stdio.h>
#include <stdlib.h>
//写一个递归函数,输入一个非负整数,返回组成它的数字之和
int DigitSum(int n){
	if (n > 9){
		return (n % 10) + DigitSum(n / 10);
	}
	return n;
}
int main3(){
	printf("%d\n",DigitSum(1234));
	system("pause");
	return 0;
}