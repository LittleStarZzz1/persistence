#include <stdio.h>
#include <stdlib.h>
//��num�ĵ��������λ��Ϊ1
int main3(){
	int num = 10;
	num = num | (1 << 5);
	printf("%d\n", num);
	system("pause");
	return 0;
}