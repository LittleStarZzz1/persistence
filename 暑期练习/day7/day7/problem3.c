#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//��������ǰk����С������
int main(){
	int a[10] = { 10, 11, 5, 1, 9, 4, 2, 7, 8, 14 };
	int n;
	int tmp;
	printf("������һ��������n: ");
	scanf("%d", &n);
	for (int i = 1; i < n; ++i){
		if (a[i] < a[0]){
			tmp = a[i];
			a[i] = a[0];
			a[0] = tmp;
		}
	}
	printf("������ǰ%d��������С��Ϊ%d\n", n, a[0]);
	system("pause");
	return 0;
}