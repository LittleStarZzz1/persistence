#include <stdio.h>
#include <stdlib.h>
//��̬�����ڴ������ͷ�(�ڴ�й©)
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