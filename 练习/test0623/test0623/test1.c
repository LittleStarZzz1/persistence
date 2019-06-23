#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main1(){
	int c;
	FILE* fpr = NULL;
	fpr = fopen("C:\\Users\\lenovo\\Desktop\\1.txt", "r");
	if (!fpr){
		perror("File opening failed");
		return EXIT_FAILURE;
	}
	//fgetc当读取失败的时候或者遇到文件结束的时候,都会返回EOF
	while ((c = fgetc(fpr)) != EOF){
		putchar(c);
	}
	putchar('\n');
	//判断什么原因结束
	if (ferror(fpr)){
		puts("I/O error when reading");
	}
	else if (feof(fpr)){
		puts("End of file reached successfully");
	}
	fclose(fpr);
	fpr = NULL;
	system("pause");
	return 0;
}