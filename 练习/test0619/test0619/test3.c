#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//使用二进制打开文件并进行读写操作
int main(){
	FILE* fpr = NULL;
	FILE* fpw = NULL;
	char str[100] = "";
	fpr = fopen("C:\\Users\\lenovo\\Desktop\\1.txt", "rb");
	fpw = fopen("C:\\Users\\lenovo\\Desktop\\2.txt", "wb");
	fread(str, 2, 3, fpr);
	fwrite(str, 2, 3, fpw);
	fclose(fpr);
	fpr = NULL;
	fclose(fpw);
	fpw = NULL;
	system("pause");
	return 0;
}