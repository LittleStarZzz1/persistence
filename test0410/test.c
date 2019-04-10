#include <stdio.h>
#include <stdlib.h>
void Swap(int* x, int* y){
	int tmp = *x;
	*x = *y;
	*y = tmp;
}
void BabbleSort(int arr[],int size){
	int bound = 0;
	for (; bound < size; ++bound){
		for (int cur = size - 1; cur > bound; --cur){
			if (arr[cur - 1] > arr[cur]){
				Swap(&arr[cur - 1], &arr[cur]);
			}
		}
	}
}
int main(){
	int arr[10] = { 9, 5, 2, 6, 3, 4, 7, 8, 1, 0 };
	int size = sizeof(arr) / sizeof(arr[0]);
	BabbleSort(arr, size);
	for (int i = 0; i < size; ++i){
		printf("%d ",arr[i]);
	}
	system("pause");
	return 0;
}