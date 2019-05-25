#include <stdio.h>
#include <stdlib.h>
int cmp(const void* p1, const void* p2){
	return (*(int*)p1) - (*(int*)p2);
}
void Swap(void* p1, void* p2, int size){
	int i;
	char tmp;
	for (i = 0; i < size; ++i){
		tmp = *((char*)p1 + i);
		*((char*)p1 + i) = *((char*)p2 + i);
		*((char*)p2 + i) = tmp;
	}
}
void BabbleSort(void* data, int n, int size, int(*cmp)(void*, void*)){
	int i = 0;
	int j = 0;
	for (i = 0; i < n - 1; ++i){
		for (j = 0; j < n - 1 - i; ++j){
			if (cmp((char*)data + j * size, (char*)data + (j + 1) * size) > 0){
				Swap((char*)data + j * size, (char*)data + (j + 1) * size, size);
			}
		}
	}
}
int main(){
	int a[] = { 2, 4, 3, 1, 7, 8, 9, 10, 5, 11, 0 };
	int n = sizeof(a) / sizeof(a[0]);
	int i;
	BabbleSort(a, n, sizeof(int), cmp);
	for (i = 0; i < n; ++i){
		printf("%d ", a[i]);
	}
	system("pause");
	return 0;
}