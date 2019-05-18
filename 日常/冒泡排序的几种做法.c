#include <stdio.h>
#include <stdlib.h>
void BabbleSort1(int a[], int size){
	int bound = 0;
	for (; bound < size; ++bound){
		for (int cur = size - 1; cur > bound; --cur){
			if (a[cur - 1] > a[cur]){
				int tmp = a[cur - 1];
				a[cur - 1] = a[cur];
				a[cur] = tmp;
			}
		}
	}
}
void BabbleSort2(int a[], int n){
	for (int i = 0; i < n - 1; ++i){
		for (int j = 0; j < n - i - 1; ++j){
			if (a[j] > a[j + 1]){
				int tmp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = tmp;
			}
		}
	}
}
//÷∏’Î»•◊ˆ√∞≈›≈≈–Ú
void BabbleSort3(int a[], int n){
	int* p = a;
	int* q = a + 1;
	int* end = a + n - 1;
	for (p = a; p < a + n - 1; ++p){
		for (q = a; q < end; ++q){
			if (*q > *(q + 1)){
				int tmp = *q;
				*q = *(q + 1);
				*(q + 1) = tmp;
			}
		}
	}
}
int main(){
	int a[] = { 2, 4, 5, 6, 1, 3, 0, 9, 7, 8 };
	int size = sizeof(a) / sizeof(a[0]);
	//BabbleSort1(a, size);
	//BabbleSort2(a, size);
	BabbleSort3(a, size);
	for (int i = 0; i < size; ++i){
		printf("%d ", a[i]);
	}
	system("pause");
	return 0;
}