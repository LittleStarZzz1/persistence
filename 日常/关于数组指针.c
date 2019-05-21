#include <stdio.h>
#include <stdlib.h>
int main(){
	int arr[10] = { 0 };
	printf("arr[0] = %p\n", &arr[0]);
	printf("arr = %p\n", arr);
	printf("&arr = %p\n", &arr);
	printf("arr + 1 = %p\n", arr + 1);
	printf("&arr + 1 = %p\n", &arr + 1);
	system("pause");
	return 0;
}