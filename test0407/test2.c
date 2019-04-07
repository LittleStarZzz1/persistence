#include <stdio.h>
#include <stdlib.h>
//递归实现strlen
int Strlen(char* str){
	if (str[0] == '\0'){
		return 0;
	}
	return 1 + Strlen(str + 1);
}
//非递归实现strlen
int Strlen_N(char* str){
	int length = 0;
	while (str[0] != '\0'){
		++length;
		++str;
	}
	return length;
}
int main_5(){
	char* str = "abcdef";
	Strlen(str);
	printf("%d\n", Strlen(str));
	printf("%d\n",Strlen_N(str));
	system("pause");
	return 0;
}
