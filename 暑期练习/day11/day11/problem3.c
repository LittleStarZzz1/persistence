#include <stdio.h>
#include <stdlib.h>
char FindChar(char* str){
	char a[256] = { 0 };
	char* tmp = str;
	while (*str){
		a[*str]++;
		str++;
	}
	str = tmp;
	while (*str){
		if (a[*str] >= 2){
			return *str;
		}
		str++;
	}
	return 0;
}
int main(){
	char str[] = "qywyer23tdd";
	char c = FindChar(str);
	if (c){
		printf("%c\n", c);
	}
	else {
		printf("未找到重复出现的字符！\n");
	}
	system("pause");
	return 0;
}