#include <stdio.h>
#include <stdlib.h>

void test(){
	int* p = (int*)malloc(100);
	free(p);
	free(p);	//�ظ��ͷ�
}
int main5(){
	test();
	system("pause");
	return 0;
}