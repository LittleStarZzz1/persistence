#include <stdio.h>
#include <stdlib.h>

//将一个数组逆序输出
int main1(){
	int a[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int n = sizeof(a) / sizeof(a[0]);
	int left = 0;
	int right = n - 1;
	int tmp;
	int i;
	while (left < right){
		tmp = a[right];
		a[right] = a[left];
		a[left] = tmp;
		++left;
		--right;
	}
	for (i = 0; i < n; ++i){
		printf("%d ", a[i]);
	}
	putchar('\n');
	system("pause");
	return 0;
}