#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
//strerror����
int main6(){
	FILE* pfile;	//�ļ����͵�ָ��
	pfile = fopen("unexist.ent", "r");	//������ļ���"r"��ʽ(ֻ��)
	if (pfile == NULL){
		printf("Error opening file unexist.ent : %s\n", strerror(errno));
	}
	system("pause");
	return 0;
}