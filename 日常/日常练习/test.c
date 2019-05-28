#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//strstr如果找到了,就返回找到的首地址
//如果没找到就返回空
int main1(){
	char str1[] = "abcdefggggggg";
	char str2[] = "bcdef";
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