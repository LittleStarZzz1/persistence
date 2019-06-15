#include <stdio.h>
#include <stdlib.h>

void test(){
	int* p = (int*)malloc(100);
	free(p);
	free(p);	//÷ÿ∏¥ Õ∑≈
}
int main5(){
	test();
	system("pause");
	return 0;
}