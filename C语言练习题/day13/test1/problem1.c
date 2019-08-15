#include <stdio.h>
#include <stdlib.h>

//输入数组,最大的与数组中第一个元素交换
//最小的与最后一个元素交换
void AdjustArray(int a[], int n){
	int i;
	int tmp = a[0];
	int tmp1 = a[n - 1];
	int pos, pos1;
	for (i = 1; i < n; ++i){
		if (a[i] > tmp){
			tmp = a[i];
			pos = i;
		}
	}
	a[pos] = a[0];
	a[0] = tmp;
	int j;
	for (j = n - 1; j >= 0; --j){
		if (a[j] < tmp1){
			tmp1 = a[j];
			pos1 = j;
		}
	}
	a[pos1] = a[n - 1];
	a[n - 1] = tmp1;
}
int main1(){
	int a[] = { 2, 9, 12, 4, 7, 8, 10, 1, 16, 18 };
	int n = sizeof(a) / sizeof(a[0]);
	int i;
	AdjustArray(a, n);
	for (i = 0; i < n; ++i){
		printf("%d ", a[i]);
	}
	system("pause");
	return 0;
}