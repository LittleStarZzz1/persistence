#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//fgetc,���ļ��л�ȡһ���ַ�
int main1(){
	FILE* fpr = NULL;
	char c;
	fpr = fopen("C:\\Users\\lenovo\\Desktop\\1.txt", "r");
	if (fpr == NULL){
		printf("open fail!\n");
		system("pause");
		return 0;
	}
	c = fgetc(fpr);
	printf("%c\n", c);
	fclose(fpr);
	fpr = NULL;
	system("pause");
	return 0;
}