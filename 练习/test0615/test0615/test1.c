#include <stdio.h>
#include <stdlib.h>

void test(){
	int i = 0;
	int* p = (int*)malloc(sizeof(int)* 10);
	if (NULL == p){
		exit(EXIT_FAILURE);
	}
	for (i = 0; i <= 10; ++i){	//for(i = 0; i < 10; ++i)
		*(p + i) = i;	//���ﵱi��10��ʱ��Խ�����
	}
	free(p);
}
int main2(){
	test();
	system("pause");
	return 0;
}