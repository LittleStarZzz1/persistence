#include <stdio.h>
#include <stdlib.h>
//用指针进行冒泡排序
void BabbleSort(int arr[], int size){
	int* p = arr;
	int* q = arr + 1;
	int* end = arr + size - 1;
	for (p = arr; p < arr + size - 1; ++p){
		for (q = arr; q < end; ++q){
			if (*q > *(q + 1)){
				int tmp = *q;
				*q = *(q + 1);
				*(q + 1) = tmp;
			}
		}
		--end;
	}
	for (p = arr; p < arr + size; ++p){
		printf("%d ", *p);
	}
}
int main(){
	int arr[] = { 2, 5, 6, 7, 9, 3, 4, 1, 10 };
	int size = sizeof(arr) / sizeof(arr[0]);
	BabbleSort(arr, size);
	system("pause");
	return 0;
}