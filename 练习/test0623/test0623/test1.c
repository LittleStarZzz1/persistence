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
	//fgetc����ȡʧ�ܵ�ʱ����������ļ�������ʱ��,���᷵��EOF
	while ((c = fgetc(fpr)) != EOF){
		putchar(c);
	}
	putchar('\n');
	//�ж�ʲôԭ�����
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