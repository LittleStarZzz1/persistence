#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//strstr����ҵ���,�ͷ����ҵ����׵�ַ
//���û�ҵ��ͷ��ؿ�
int main1(){
	char str1[] = "abcdefggggggg";
	char str2[] = "bcdef";
	char* p = NULL;
	if (p = strstr(str1, str2)){
		puts(p);
	}
	else {
		printf("û�ҵ�!\n");
	}
	system("pause");
	return 0;
}