#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//���ַ����еĿո��滻Ϊ%20
//���� "abc defgx yz"ת��Ϊ"abc%20defgx%20yz"
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
	int NewBack = size - 1;	//�¿ռ��ĩβ
	int OldBack = len - 1;	//�ɿռ��ĩβ
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