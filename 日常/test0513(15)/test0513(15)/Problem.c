#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//喝汽水,1瓶汽水1元,2个空瓶可以换一瓶汽水
//给20元,可以多少汽水
int main1(){
	int money;
	int empty;
	int count;
	printf("请输入现金数目: ");
	scanf("%d", &money);
	empty = money;
	count = money;
	while (empty >= 2){
		count = count + empty / 2;
		empty = empty / 2 + empty % 2;
	}
	printf("可以喝%d瓶汽水!\n", count);
	system("pause");
	return 0;
}