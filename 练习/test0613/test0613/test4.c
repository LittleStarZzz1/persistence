#include <stdio.h>
#include <stdlib.h>
//����������ȥ�жϴ��С���ֽ���
union Un{
	int i;
	char c;
};
int main4(){
	union Un un;
	un.i = 1;
	printf("%d\n", un.c);
	system("pause");
	return 0;
}