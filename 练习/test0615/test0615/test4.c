#include <stdio.h>
#include <stdlib.h>

void test(){
	int* p = (int*)malloc(100);
	p++;
	free(p);	//p����ָ��̬�ڴ����ʼΪλ��
}
int main4(){
	test();
	system("pause");
	return 0;
}