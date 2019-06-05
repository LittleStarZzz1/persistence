#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//strtok函数的用法
int main5(){
	char str[] = "i,am.a student";
	char sep[] = ",. ";
	char* tok = NULL;
	for (tok = strtok(str, sep); tok != NULL;
		tok = strtok(NULL, sep)){
		puts(tok);
	}
	system("pause");
	return 0;
}