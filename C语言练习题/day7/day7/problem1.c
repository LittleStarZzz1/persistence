#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//求S = a + aa + aaa + aaaa + a...a的值
//其中a是一个数字,例如2 + 22 + 222 + 2222 + 22222(此时是5个数相加)
//几个数相加由键盘控制
int main1(){
	int a, n;
	int sum = 0;
	int tmp = 0;
	printf("请输入一个整数a表示数字,整数n表示位数: ");
	scanf("%d %d", &a, &n);
	while (n){
		tmp = tmp * 10 + a;
		sum += tmp;
		n = n - 1;
	}
	printf("所求得的数字之和为:%d\n", sum);
	system("pause");
	return 0;
}