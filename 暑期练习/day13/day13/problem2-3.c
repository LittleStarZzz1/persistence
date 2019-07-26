#include <stdio.h>
#include <stdlib.h>

int func(){
	int i, j, k = 0;
	for (i = 0, j = -1; j = 0; i++, j++){
		k++;
	}
	return k;
}
int main2_3(){
	printf("%d\n", (func()));
	system("pause");
	return 0;
}