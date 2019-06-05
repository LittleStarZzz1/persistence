#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//strstr使用
int main3(){
	char str1[] = "abcdefghijk";
	char str2[] = "bcde";
	char* p = NULL;
	if (p = strstr(str1, str2)){
		puts(p);
	}
	else {
		printf("没找到!\n");
	}
	system("pause");
	return 0;
}