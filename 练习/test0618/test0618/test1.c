#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//fputc往文件中写入一个字符
int main2(){
	FILE* fpw = NULL;
	fpw = fopen("C:\\Users\\lenovo\\Desktop\\2.txt", "w");
	if (fpw == NULL){
		printf("open fail!\n");
	}
	fputc('a', fpw);
	fclose(fpw);
	fpw = NULL;
	system("pause");
	return 0;
}