#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//�����ļ��ĸ�ʽ������
int main1(){
	FILE* fpw = NULL;
	char str[20] = "hellor world!";
	fpw = fopen("C:\\Users\\lenovo\\Desktop\\1.txt", "w");
	if (fpw == NULL){
		printf("open fail!\n");
	}
	fprintf(fpw, "%s", "str");
	fclose(fpw);
	fpw = NULL;
	system("pause");
	return 0;
}