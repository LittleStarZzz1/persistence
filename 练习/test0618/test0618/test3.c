#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//fputs,���ļ���д���ַ���
int main(){
	FILE* fpw = NULL;
	fpw = fopen("C:\\Users\\lenovo\\Desktop\\2.txt", "w");
	fputs("hello world", fpw);
	fclose(fpw);
	fpw = NULL;
	system("pause");
	return 0;
}
