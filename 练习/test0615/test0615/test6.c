#include <stdio.h>
#include <stdlib.h>
//动态开辟内存忘记释放(内存泄漏)
void test(){
	int* p = (int*)malloc(100);
	if (p != NULL){
		*p = 20;
	}
	//free(p);
}
int main6(){
	test();
	system("pause");
	return 0;
}