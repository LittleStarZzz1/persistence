#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//在字符串中找出第一个只出现一次的字符
//比如输入"abaccdeff",则输出'b'
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
	printf("请输入一些字符: ");
	scanf("%s", str);
	c = FindChar(str);
	if (c){
		printf("%c\n", c);
	}
	else {
		printf("字符串中不存在只出现一次的字符!\n");
	}
	system("pause");
	return 0;
}