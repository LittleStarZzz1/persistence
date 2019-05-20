#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
void BabbleSort(int a[], int n){
	int* p = a;
	int* q = a + 1;
	int* end = a + n - 1;
	int tmp;
	for (p = a; p < a + n - 1; ++p){
		for (q = a; q < end; ++q){
			if (*q > *(q + 1)){
				tmp = *q;
				*q = *(q + 1);
				*(q + 1) = tmp;
			}
		}
	}
}
int main(){
	int n;
	int num[20] = { 0 };
	int i = 0;
	int sum = 0;
	printf("请输入石子堆数: ");
	scanf("%d", &n);
	printf("请分别输入%d堆石子的石头数: ", n);
	for (i = 0; i < n; ++i){
		scanf("%d", num + i);
	}
	for (i = 0; i < n - 1; ++i){
		BabbleSort(num + i, n - i);
		num[i + 1] = num[i] + num[i + 1];
		sum = sum + num[i + 1];
	}
	printf("%d\n", sum);
	system("pause");
	return 0;
}