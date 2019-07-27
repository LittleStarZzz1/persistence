#include <stdio.h>
#include <stdlib.h>

int main2_3(){
	int arr[] = { 6, 7, 8, 9, 10 };
	int* ptr = arr;
	//printf("%d,%d\n", *ptr, *(++ptr));
	*(ptr++) += 123;
	printf("%d,%d\n", *ptr, *(++ptr));	//½á¹ûÎª8,8
	system("pause");
	return 0;
}
