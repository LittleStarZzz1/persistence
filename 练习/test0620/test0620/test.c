#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//int fseek(FILE* stream, long int offset, int origin);
//fseek�����ļ�ָ���λ�ú�ƫ��������λ�ļ�ָ��
//long int ftell(FILE* stream);
//�����ļ�ָ���������ʼλ�õ�ƫ����
int main(){
	FILE* fpr = NULL;
	int n;
	fpr = fopen("C:\\Users\\lenovo\\Desktop\\1.txt", "r");
	if (fpr == NULL){
		printf("open fail!\n");
	}
	fseek(fpr, 0, SEEK_END); //�ļ�ָ������ļ�ĩβ
	n = ftell(fpr);
	printf("%d\n", n);
	fclose(fpr);
	fpr = NULL;
	system("pause");
	return 0;
}