#include <stdio.h>
#include <stdlib.h>

//有一个已经排好序的数组,现
//输入一个数,要求按原来的规律将它插入数组中.
int main(){
	int a[] = { 1, 4, 6, 8, 9, 10, 11, 13, 16, 18, 20 };
	int n = sizeof(a) / sizeof(a[0]);
	int m;
	int i, j;
	printf("原数组为：");
	for (i = 0; i < n; ++i){
		printf("%d ", a[i]);
	}
	putchar('\n');
	printf("请输入一个新的整数: ");
	scanf("%d", &m);
	if (m >= a[n - 1]){
		a[n] = m;
	}
	else {
		for (i = 0; i < n; ++i){
			if (m <= a[i]){
				for (j = n - 1; j >= i; --j){
					a[j + 1] = a[j];
				}
				a[i] = m;
				break;
			}
		}
	}
	printf("插入新数字后的数组：");
	for (i = 0; i < n + 1; ++i){
		printf("%d ", a[i]);
	}
	putchar('\n');
	system("pause");
	return 0;
}