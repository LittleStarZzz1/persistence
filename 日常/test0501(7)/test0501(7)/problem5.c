#include <stdio.h>
#include <stdlib.h>
//�ݹ�ʵ��strlen 
int Strlen(char* str){
	if (*str){
		return 1 + Strlen(str + 1);
	}
	return 0;
}
//�ǵݹ�ʵ��strlen 
int Strlen_N(char* str){
	int i;
	for (i = 0; str[i]; ++i);
	return i;
}
int main5(){
	char str[] = "huanyinnin";
	printf("%d\n", Strlen(str));
	printf("%d\n", Strlen_N(str));
	system("pause");
	return 0;
}