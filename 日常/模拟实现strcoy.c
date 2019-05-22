#include <stdio.h>
#include <stdlib.h>
//Ä£ÄâÊµÏÖstrcpy
char* my_strcpy(char* str1, const char* str2){
	char* tmp = str1;
	while (*(str1++) = *(str2++));
	return tmp;
}
int main(){
	char str1[20] = "ABCDEF";
	char str2[20] = "QWERTY";
	my_strcpy(str1, str2);
	printf("%s\n", str1);
	system("pause");
	return 0;
}