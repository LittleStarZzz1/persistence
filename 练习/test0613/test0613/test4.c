#include <stdio.h>
#include <stdlib.h>
//利用联合体去判断大端小端字节序
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