#include <stdio.h>
#include <stdlib.h>

//猴子吃桃问题:猴子第一天摘下若干个桃子,马上吃了一半,没有吃饱,又多吃了一个
//第二天将剩下桃子的一半吃掉又多吃了一个
//以后每天猴子都会吃前一天剩下的桃子的一半再多一个
//到了第十天猴子发现只剩下一个了
//问猴子一开始一共摘了多少个桃子
#if 0
int test(){
	int day = 9;
	int x1 = 1;
	int x2 = 1;
	while (day > 0){
		x1 = (x2 + 1) * 2;
		x2 = x1;
		--day;
	}
	return x1;
}
#endif

int main1(){
	int n = 10;
	int last = 1;
	int sum = 0;
	while (n - 1){
		sum = (last + 1) * 2;
		last = sum;
		--n;
	}
	printf("%d\n", sum);
	system("pause");
	return 0;
}