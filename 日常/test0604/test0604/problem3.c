#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//strstrʹ��
int main3(){
	char str1[] = "abcdefghijk";
	char str2[] = "bcde";
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