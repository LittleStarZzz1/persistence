#include <stdio.h>
#include <stdlib.h>

int main2_2(){
	const int i = 0;
	int* j = (int*)&i;
	*j = 1;
	printf("%d, %d\n", i, *j);
	system("pause");
	return 0;
}