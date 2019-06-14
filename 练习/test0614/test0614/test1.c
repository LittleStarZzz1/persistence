#include <stdio.h>
#include <stdlib.h>
int main1(){
	int* p = NULL;
	p = (int*)malloc(sizeof(int));
	if (p != NULL){
		*p = 8;
	}
	printf("%d\n", *p);
	free(p);
	p = NULL;
	system("pause");
	return 0;
}