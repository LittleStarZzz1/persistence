#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//��д����ģ��������������ĳ���.����������������
//������ȷ,��ʾ����¼�ɹ���,�������.
//������������,�����������.���ξ���,����ʾ�˳�����.
int main(){
	char pwd[20] = { 0 };
	int i;
	for (i = 0; i < 3; ++i){
		printf("��������������: ");
		scanf("%s", &pwd);
		if (strcmp(pwd, "huanyin") == 0){
			break;
		}
		printf("��������������!\n");
	}
	if (i == 3){
		printf("��¼ʧ��!\n");
	}
	else {
		printf("��¼�ɹ�!\n");
	}
	system("pause");
	return 0;
}