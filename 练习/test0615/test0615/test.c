#include <stdio.h>
#include <stdlib.h>

void test(){
	int* p = (int*)malloc(sizeof(int));
	*p = 20; //���p��ֵʱNULL,�ͻ�������
	free(p);
}
int main1(){
	test();
	system("pause");
	return 0;
}