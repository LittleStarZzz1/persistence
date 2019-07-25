
#include <stdio.h>
#include <stdlib.h>

int main1_4(){
	int arr[4] = { 0 };
	int brr[4] = { 1 };
	int i;
	for (i = 0; i < 4; ++i){
		printf("%d ", arr[i]);
	}
	putchar('\n');
	for (i = 0; i < 4; ++i){
		printf("%d ", brr[i]);
	}
	system("pause");
	return 0;
}