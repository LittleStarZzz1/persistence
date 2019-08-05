#include <stdio.h>
#include <stdlib.h>

//对10个数进行排序
//冒泡排序
void BabbleSort(int* a, int n){
	int tmp;
	int i, j;
	for (i = 0; i < n - 1; ++i){
		for (j = 0; j < n - 1 - i; ++j){
			if (a[j] > a[j + 1]){
				tmp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = tmp;
			}
		}
	}
}
int main1(){
	int i;
	int a[10] = { 2, 5, 1, 6, 7, 8, 9, 10, 12, 4 };
	int n = sizeof(a) / sizeof(a[0]);
	BabbleSort(a, n);
	for (i = 0; i < n; ++i){
		printf("%d ", a[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}