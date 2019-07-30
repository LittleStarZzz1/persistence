#include <stdio.h>
#include <stdlib.h>

int main2_1(){
	int arr[] = { 1, 2, 3, 4, 5 };
	int *ptr = (int*)(&arr + 1);
	printf("%d %d\n", *(arr + 1), *(ptr - 1));
	system("pause");
	return 0;
}