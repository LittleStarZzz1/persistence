#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//输入一行字符,分别统计出其中英文字母,空格,数字和其它字符的个数
int main(){
	int letter = 0; 
	int space = 0;
	int digit = 0;
	int character = 0;
	char c;
	printf("请输入与一些字符: ");
	while ((c = getchar()) != '\n'){
		if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')){
			++letter;
		}
		else if (c == ' '){
			++space;
		}
		else if (c >= '0' && c <= '9'){
			++digit;
		}
		else {
			++character;
		}
	}
	printf("英文字母的个数为:%d\n", letter);
	printf("空格的个数为:%d\n", space);
	printf("数字的个数为:%d\n", digit);
	printf("其他字符的个数为:%d\n", character);
	system("pause");
	return 0;
}