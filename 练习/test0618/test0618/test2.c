#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//fgets,从文件中获取字符串
int main3(){
	FILE* fpr = NULL;
	char str[20];
	fpr = fopen("C:\\Users\\lenovo\\Desktop\\1.txt", "r");
	if (fpr == NULL){
		printf("open fail!\n");
	}
	fgets(str, 5, fpr);
	for (int i = 0; i < 5; ++i){
		printf("%c ", str[i]);
	}
	fclose(fpr);
	fpr = NULL;
	system("pause");
	return 0;
}

