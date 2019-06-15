#include <stdio.h>
#include <stdlib.h>

void test(){
	int a = 10;
	int* p = &a;	//p不是动态开辟的内存
	free(p);
}
int main3(){
	test();
	system("pause");
	return 0;
}