#include <stdio.h>
#include <stdlib.h>

int main1_3(){
	int a = 4;
	//printf("%d\n", ++(a++));	++��Ҫ��ֵ
	printf("%d\n", a++);
	printf("%d\n", a);
	system("pause");
	return 0;
}