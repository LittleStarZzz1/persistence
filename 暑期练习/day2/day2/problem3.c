#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//将字符串中的空格替换为%20
//比如 "abc defgx yz"转换为"abc%20defgx%20yz"
void ReplaceChar(char* string, int len){
	if (len <= 0){
		return;
	}
	int i;
	int count = 0;
	int size;
	for (i = 0; i < len; ++i){
		if (string[i] == ' '){
			++count;
		}
	}
	size = len + count * 2;
	if (size == len){
		return;
	}
	int NewBack = size - 1;	//新空间的末尾
	int OldBack = len - 1;	//旧空间的末尾
	while (OldBack >= 0 && NewBack > OldBack){
		if (string[OldBack] == ' '){
			string[NewBack--] = '0';
			string[NewBack--] = '2';
			string[NewBack--] = '%';
			OldBack--;
		}
		else {
			string[NewBack--] = string[OldBack--];
		}
	}
}
int main(){
	char string[100] = "You are a good man!";
	int n = strlen(string);
	ReplaceChar(string, n);
	puts(string);
	system("pause");
	return 0;
}