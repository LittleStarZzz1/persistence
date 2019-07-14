#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main2_3(){
	char acHello[] = "hello\0world";
	char acNew[15] = { 0 };
	strcpy(acNew, acHello);
	printf("%d\n", strlen(acNew));
	printf("%d\n", sizeof(acNew));
	system("pause");
	return 0;
}