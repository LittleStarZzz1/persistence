#include <stdio.h>
#include <stdlib.h>
//Ä£ÄâÊµÏÖstrcpy
char* My_strcpy(char* str1, char* str2){
	char* p = str1;
	while (*(str1++) = *(str2++));
	return p;

}
int main3(){
	char str1[20];
	char str2[] = "abcdef";
	My_strcpy(str1, str2);
	printf("%s\n", str1);
	system("pause");
	return 0;
}