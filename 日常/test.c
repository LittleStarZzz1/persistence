#include <stdio.h>
#include <stdlib.h>
int main(){
	int num = 10;
	//��num�ĵ��������λ��Ϊ1
	num = num | (1 << 5);
	//��num�ĵ��������λ��Ϊ0
	//num = num & ~(1 << 5);
	printf("%d\n",num);
	system("pause");
	return 0;
}