#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//���ַ������ҳ���һ��ֻ����һ�ε��ַ�
//��������"abaccdeff",�����'b'
char FindChar(char* str){
	char a[256] = { 0 };
	char* tmp = str;
	while (*str){
		a[*str]++;
		str++;
	}
	str = tmp;
	while (*str){
		if (a[*str] == 1){
			return *str;
		}
		str++;
	}
	return 0;
}
int main(){
	char str[] = "";
	char c;
	printf("������һЩ�ַ�: ");
	scanf("%s", str);
	c = FindChar(str);
	if (c){
		printf("%c\n", c);
	}
	else {
		printf("�ַ����в�����ֻ����һ�ε��ַ�!\n");
	}
	system("pause");
	return 0;
}