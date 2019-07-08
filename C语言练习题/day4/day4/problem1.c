#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//有一对兔子,从出生后第三个月起每个月都生一对兔子,小兔子长到第三个月后
//每个月又生一对小兔子,假设兔子不会死掉,问每个月的兔子总数为多少
//方法一递归求兔子数量
int FibNum(int n){
	if (n <= 2){
		return 1;
	}
	return FibNum(n - 1) + FibNum(n - 2);
}
//数字规模较大时,递归求解会花费较长的时间
//方法二非递归求解
int NFibNum(int n){
	int an_1 = 1;
	int an_2 = 1;
	int an;
	if (n <= 2){
		return 1;
	}
	while (n > 2){
		an = an_2 + an_1;
		an_2 = an_1;
		an_1 = an;
		--n;
	}
	return an;

}
int main1(){
	int month;
	printf("请输入月份: ");
	scanf("%d", &month);
	printf("利用递归求解得到第%d个月的兔子总数为%d\n", month, 2 * FibNum(month));
	printf("利用非递归求解得到第%d个月的兔子总数为%d\n", month, 2 * NFibNum(month));
	system("pause");
	return 0;
}