#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
void BabbleSort(int a[], int n){
	int* p = a;
	int* q = a + 1;
	int* end = a + n - 1;
	for (p = a; p < a + n + 1; ++p){
		for (q = a; q < end; ++q){
			if (*q > *(q + 1)){
				int tmp = *q;
				*q = *(q + 1);
				*(q + 1) = tmp;
			}
		}
		--end;
	}
}
int main(){
	int n;
	int i;
	printf("请输入石子的堆数: ");
	scanf("%d", &n);
	int sum = 0;
	int num[20] = { 0 };
	printf("请分别输入每堆石子的石头数: ");
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