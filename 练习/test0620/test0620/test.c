#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//int fseek(FILE* stream, long int offset, int origin);
//fseek根据文件指针的位置和偏移量来定位文件指针
//long int ftell(FILE* stream);
//返回文件指针相对于起始位置的偏移量
int main(){
	FILE* fpr = NULL;
	int n;
	fpr = fopen("C:\\Users\\lenovo\\Desktop\\1.txt", "r");
	if (fpr == NULL){
		printf("open fail!\n");
	}
	fseek(fpr, 0, SEEK_END); //文件指针放在文件末尾
	n = ftell(fpr);
	printf("%d\n", n);
	fclose(fpr);
	fpr = NULL;
	system("pause");
	return 0;
}