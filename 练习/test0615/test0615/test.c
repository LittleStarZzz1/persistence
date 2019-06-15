#include <stdio.h>
#include <stdlib.h>

void test(){
	int* p = (int*)malloc(sizeof(int));
	*p = 20; //如果p的值时NULL,就会有问题
	free(p);
}
int main1(){
	test();
	system("pause");
	return 0;
}