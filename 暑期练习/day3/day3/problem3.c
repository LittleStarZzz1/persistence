#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//求第n个斐波那契数(非递归)
int FibN(int n){
	if (n <= 2){
		return 1;
	}
	int an_1 = 1;
	int an_2 = 1;
	int an;
	while (n > 2){
		an = an_2 + an_1;
		an_2 = an_1;
		an_1 = an;
		--n;
	}
	return an;
}
int main(){
	int n;
	printf("请输入一个整数n: ");
	scanf("%d", &n);
	printf("第%d个斐波那契数是:%d\n", n, FibN(n));
	system("pause");
	return 0;
}