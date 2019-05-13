#include <stdio.h>
#include <stdlib.h>
//Ä£ÄâÊµÏÖstrcat
char* My_strcat(char* str1, char* str2){
	char* p = str1;
	while (*str1 != '\0'){
		++str1;
	}
	while (*(str1++) = *(str2++));
	return p;
}
int main(){
	char str1[20] = "hello!";
	char str2[] = "abcdefgh";
	My_strcat(str1, str2);
	printf("%s\n", str1);
	system("pause");
	return 0;
}