#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//ʵ��һ�����������������ַ����е�k���ַ���
//ABCD����һ���ַ��õ�BCDA
//ABCD���������ַ��õ�CDAB
void Round_string(char* str, int n){
	int i = 0;
	int j = strlen(str);
	while (n){
		char tmp = str[0];
		for (i = 0; i < j - 1; ++i){
			str[i] = str[i + 1];
		}
		str[i] = tmp;
		--n;
	}
}
int main1(){
	char str[] = "ABCD";
	Round_string(str, 3);
	printf("%s\n", str);
	system("pause");
	return 0;
}