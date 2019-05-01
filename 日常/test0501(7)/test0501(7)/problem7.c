#include <stdio.h>
#include <stdlib.h>
//递归方式实现打印一个整数的每一位
void PrintNum(int n){
	if (n > 9){
		PrintNum(n / 10);
	}
	printf("%d ",n % 10);
}
int main7(){
	PrintNum(1234);
	system("pause");
	return 0;
}