#include <stdio.h>
#include <stdlib.h>
//递归实现strlen 
int Strlen(char* str){
	if (*str){
		return 1 + Strlen(str + 1);
	}
	return 0;
}
//非递归实现strlen 
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