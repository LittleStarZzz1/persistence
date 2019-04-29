#include <stdio.h>
#include <stdlib.h>
#define IsBigNumber(ch) (ch <= 'Z' && ch >= 'A')
//编写一个程序，可以一直接收键盘字符,如果是小写字符就输出对应的大写字符
//如果接收的是大写字符，就输出对应的小写字符,如果是数字不输出。
int IsSmallNumber(char ch){
	return ch <= 'z' && ch >= 'a';
}
int main3(){
	char ch;
	while (1){
		ch = getchar();
		if (ch == '@'){
			break;
		}
		else if (IsSmallNumber(ch)){
			printf("%c", ch - 32);
		}
		else if (IsBigNumber(ch)){
			printf("%c", ch + 32);
		}
		else {
			printf("%c", ch);
		}
	}
	system("pause");
	return 0;
}