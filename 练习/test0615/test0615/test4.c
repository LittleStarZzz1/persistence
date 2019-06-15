#include <stdio.h>
#include <stdlib.h>

void test(){
	int* p = (int*)malloc(100);
	p++;
	free(p);	//p不再指向动态内存的起始为位置
}
int main4(){
	test();
	system("pause");
	return 0;
}