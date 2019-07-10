#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//输入两个正整数m和n,求其最大公约数和最小公倍数
int main2(){
	int m, n;
	int a, b;
	int tmp;
	printf("请输入两个正整数: ");
	scanf("%d %d", &m, &n);
	if (m >= n){
		a = m;
		b = n;
	}
	else {
		a = n;
		b = m;
	}	//保证大数为a,小数为b
	while (b != 0){
		tmp = a % b;
		a = b;
		b = tmp;
	}
	printf("最大公约数为%d\n", a);
	printf("最小公倍数为%d\n", m * n / a);
	system("pause");
	return 0;
}