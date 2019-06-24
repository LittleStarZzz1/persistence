#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//字符串翻转
void Round_string1(char* str){
	int left = 0;
	int right = strlen(str) - 1;
	char tmp;
	while (left < right){
		tmp = str[left];
		str[left] = str[right];
		str[right] = tmp;
		++left;
		--right;
	}
}
//利用递归将字符串进行翻转
void Round_string2(char* str){
	int end = strlen(str) - 1;
	char tmp;
	tmp = str[0];
	if (str[0]){
		str[0] = str[end];
		str[end] = '\0';
		Round_string2(str + 1);
		str[end] = tmp;
	}
}
int main1(){
	char str[] = "Hello World!";
	Round_string1(str);
	Round_string2(str);
	puts(str);
	system("pause");
	return 0;
}