#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//�ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ����� 
//����:����str1 = AABCD��str2 = BCDAA,����1
//����str1 = abcd��str2 = ACBD,����0.
int Judge_string(char* str1, char* str2, int len){
	int i;
	int j;
	if (strcmp(str1, str2) == 0){
		return 1;
	}
	for (i = 0; i < len - 1; ++i){
		char tmp = str1[0];
		for (j = 0; j < len - 1; ++j){
			str1[j] = str1[j + 1];
		}
		str1[j] = tmp;
		if (strcmp(str1, str2) == 0){
			return 1;
		}
	}
	return 0;
}
int main(){
	char str1[] = "AABCD";
	char str2[] = "BCDAA";
	int n = strlen(str1);
	if (Judge_string(str1, str2, n)){
		printf("str2����str1�����õ���!\n");
	}
	else {
		printf("str2������str1�����õ���!\n");
	}
	system("pause");
	return 0;
}