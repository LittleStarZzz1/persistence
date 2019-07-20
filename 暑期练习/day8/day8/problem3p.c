#include <stdio.h>
#include <stdlib.h>

//先将数组排序
void SortArray(int a[], int n){
	int i, j;
	int tmp;
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
int main(){
	int a[] = { 1, 2, 3, 2, 2, 2, 5, 5, 2 };
	int n = sizeof(a) / sizeof(a[0]);
	SortArray(a, n);
	int size = n / 2;
	int count = 0;
	int i;
	for (i = 0; i < n; ++i){
		if (a[i] == a[size]){
			++count;
		}
	}
	if (count > size){
		printf("%d\n", a[size]);
	}
	system("pause");
	return 0;
}