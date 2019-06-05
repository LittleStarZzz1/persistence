#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main7(){
	int arr1[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
	//memcpy函数去处理
	memcpy(arr1 + 2, arr1, 6 * sizeof(int));
	for (int i = 0; i < 10; ++i){
		printf("%d ", arr1[i]);
	}
	printf("\n");
	//memmove函数去处理
	//memmove(arr1 + 2, arr1, 6 * sizeof(int));
	//for (int i = 0; i < 10; ++i){
	//	printf("%d ", arr1[i]);
	//}
	//printf("\n");
	system("pause");
	return 0;
}