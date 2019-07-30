#include <stdio.h>
#include <stdlib.h>

int main1_4(){
	int a[12] = { 1, 4, 7, 10, 2, 5, 8, 11, 3, 6, 9, 12 };
	int i = 10;
	printf("%d\n", a[a[i]]);
	system("pause");
	return 0;
}