#include <stdio.h>
#include <stdlib.h>
//��num�ĵ��������λ��Ϊ0
int main(){
	int num = 10;
	num = num & ~(1 << 5);
	printf("%d\n", num);
	system("pause");
	return 0;
}