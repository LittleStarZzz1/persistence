#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//有n个整数,使其前面的各数顺序向后移m个位置
//最后m个数变成最前面的m个数

int main(){
	int a[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int b[] = { 0 };
	int* p = a;
	int n = sizeof(a) / sizeof(a[0]);
	int m;
	printf("请输入一个整数: ");
	scanf("%d", &m);
	printf("原数组为: ");
	for (int i = 0; i < n; ++i){
		printf("%d ", a[i]);
	}
	putchar('\n');
	p = p + n - m;
	for (int i = 0; i < m; ++p, ++i){
		b[i] = *p;
	}
	for (int i = m; i < n; ++i){
		b[i] = a[i - m];
	}
	printf("现数组: ");
	for (int i = 0; i < n; ++i){
		printf("%d ", b[i]);
	}
	putchar('\n');
	system("pause");
	return 0;
}