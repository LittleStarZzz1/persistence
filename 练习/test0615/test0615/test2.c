#include <stdio.h>
#include <stdlib.h>

void test(){
	int a = 10;
	int* p = &a;	//p���Ƕ�̬���ٵ��ڴ�
	free(p);
}
int main3(){
	test();
	system("pause");
	return 0;
}