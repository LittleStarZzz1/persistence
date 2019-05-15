#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//判断一个字符串是否为另外一个字符串旋转之后的字符串。 
//例如:给定str1 = AABCD和str2 = BCDAA,返回1
//给定str1 = abcd和str2 = ACBD,返回0.
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
		printf("str2是由str1左旋得到的!\n");
	}
	else {
		printf("str2不是由str1左旋得到的!\n");
	}
	system("pause");
	return 0;
}